#ifndef _INC_COLOR
#define _INC_COLOR

/*--------------------------------------------------------------------------
 STRUCTURE
--------------------------------------------------------------------------*/
typedef struct RGB { float r, g, b; } RGB;
typedef struct HSL { float h, s, l; } HSL;
typedef struct XYZ { float x, y, z; } XYZ; 
typedef struct LAB { float l, a, b; } LAB;
typedef struct ARGB { float a; RGB RGB; } ARGB;

/*--------------------------------------------------------------------------
 PROTROTYPE
--------------------------------------------------------------------------*/
int	rgbToHex(RGB _RGB); RGB	hexToRgb(int _hex);	HSL	hexToHsl(int _hex);	XYZ	hexToXyz(int _hex);	LAB	hexToLab(int _hex);
int	hslToHex(HSL _HSL); RGB	hslToRgb(HSL _HSL); HSL	rgbToHsl(RGB _RGB); XYZ	rgbToXyz(RGB _RGB); LAB	rgbToLab(RGB _RGB);
int xyzToHex(XYZ _XYZ); RGB	xyzToRgb(XYZ _XYZ); HSL	xyzToHsl(XYZ _XYZ); XYZ	hslToXyz(HSL _HSL); LAB	hslToLab(HSL _HSL);
int	labToHex(LAB _LAB);	RGB	labToRgb(LAB _LAB);	HSL	labToHsl(LAB _LAB);	XYZ	labToXyz(LAB _LAB);	LAB	xyzToLab(XYZ _XYZ);

//--- La surchage ne fonctionnera pas sur MSC vu qu'il ne supporte pas C11.
#ifndef _MSC_VER
#define toHex(x) _Generic((x), default: x       , RGB: rgbToHex, HSL: hslToHex, XYZ: xyzToHex, LAB: labToHex)(x)
#define toRgb(x) _Generic((x), default: hexToRgb, RGB: x       , HSL: hslToRgb, XYZ: xyzToRgb, LAB: labToRgb)(x)
#define toHsl(x) _Generic((x), default: hexToHsl, RGB: rgbToHsl, HSL: x       , XYZ: xyzToHsl, LAB: labToHsl)(x)
#define toXyz(x) _Generic((x), default: hexToXyz, RGB: rgbToXyz, HSL: hslToXyz, XYZ:         , LAB: labToXyz)(x)
#define toLab(x) _Generic((x), default: hexToLab, RGB: rgbToLab, HSL: hslToLab, XYZ: xyzToLab, LAB:         )(x)
#endif

float labDeltaC(LAB _LAB_a, LAB _LAB_b);
float labDeltaH(LAB _LAB_a, LAB _LAB_b);
float labDeltaE(LAB _LAB_a, LAB _LAB_b);
float labDeltaE94(LAB _LAB_a, LAB _LAB_b);

/*--------------------------------------------------------------------------
 COLOR SPACE CONVERSION
--------------------------------------------------------------------------*/
float hueToRgb(float _p, float _q, float _h)
{
	if (_h < 0.f) _h += 1.f;
	if (_h > 1.f) _h -= 1.f;
	if (6.f * _h < 1.f) return (_p + (_q - _p) * _h * 6.f);
	if (2.f * _h < 1.f) return (_q);
	if (3.f * _h < 2.f) return (_p + (_q - _p) * (4.f - _h * 6.f));
	return _q;
};
RGB hexToRgb(int _hex)
{
	RGB _RGB;
	_RGB.r = (float)(_hex >> 16 & 0xFF) / 255.f;
	_RGB.g = (float)(_hex >> 8 & 0xFF) / 255.f;
	_RGB.b = (float)(_hex & 0xFF) / 255.f;
	return _RGB;
}
HSL hexToHsl(int _hex)
{
	return rgbToHsl(hexToRgb(_hex));
}
XYZ hexToXyz(int _hex)
{
	return rgbToXyz(hexToRgb(_hex));
}
LAB hexToLab(int _hex)
{
	return xyzToLab(rgbToXyz(hexToRgb(_hex)));
}
int rgbToHex(RGB _RGB)
{
	int _hex = 0x000000;
	_hex += (int)(roundf(_RGB.r * 255.f)) << 16;
	_hex += (int)(roundf(_RGB.g * 255.f)) << 8;
	_hex += (int)(roundf(_RGB.b * 255.f));
	return _hex & 0xFFFFFF;
}
HSL rgbToHsl(RGB _RGB)
{
	//--- Initialize return variable.
	HSL _HSL;

	//--- Store extreme values.
	float _min = min(min(_RGB.r, _RGB.g), _RGB.b);
	float _max = max(max(_RGB.r, _RGB.g), _RGB.b);
	float _dlt = _max - _min;
	float _sum = _max + _min;

	//--- Get the luminosity.
	_HSL.l = _sum / 2.f;
	
	//--- Verify the input chromatic.
	if (_dlt > 0.f)
	{
		//--- Translate to HSL colorspace.
		_HSL.s = (_HSL.l < 0.5f) ? (_dlt / _sum) : (_dlt / 2.f - _sum);
			 if (_max == _RGB.r) _HSL.h = (_RGB.g - _RGB.b) / _dlt + (_RGB.g < _RGB.b ? 6.f : 0.f);
		else if (_max == _RGB.g) _HSL.h = (_RGB.b - _RGB.r) / _dlt + 2.f;
		else if (_max == _RGB.b) _HSL.h = (_RGB.r - _RGB.g) / _dlt + 4.f;
		_HSL.h /= 6.f;
	}
	else
	{
		//--- If the color is achromatic.
		_HSL.h = 0.f;
		_HSL.s = 0.f;
	}

	//--- Return the color.
	return _HSL;
}
XYZ rgbToXyz(RGB _RGB)
{
	//--- Initialize the return variable.
	XYZ _XYZ;

	//--- Convert RGB to sRGB to XYZ
	float _r = (_RGB.r > 0.04045f) ? powf((_RGB.r + 0.055f) / 1.055f, 2.4f) : _RGB.r / 12.92f;
	float _g = (_RGB.g > 0.04045f) ? powf((_RGB.g + 0.055f) / 1.055f, 2.4f) : _RGB.g / 12.92f;
	float _b = (_RGB.b > 0.04045f) ? powf((_RGB.b + 0.055f) / 1.055f, 2.4f) : _RGB.b / 12.92f;
	_XYZ.x = _r * 41.24f + _g * 35.76f + _b * 18.05f;
	_XYZ.y = _r * 21.26f + _g * 71.52f + _b * 07.22f;
	_XYZ.z = _r * 01.93f + _g * 11.92f + _b * 95.05f;

	//--- Return the color.
	return _XYZ;
};
LAB rgbToLab(RGB _RGB)
{
	return xyzToLab(rgbToXyz(_RGB));
};
int hslToHex(HSL _HSL)
{
	return rgbToHex(hslToRgb(_HSL));
}
RGB hslToRgb(HSL _HSL)
{
	//--- Initialize the return variable.
	RGB _RGB;

	//--- Verify the input chromatic.
	if (_HSL.s > 0.f)
	{

		//--- Translate color.
		float _p, _q;
		_q = (_HSL.l < 0.5f)
			? (_HSL.s + 1.f) * _HSL.l
			: (_HSL.s + _HSL.l) - (_HSL.s * _HSL.l);
		_p = 2.f * _HSL.l - _q;

		//--- Translate color.
		_RGB.r = hueToRgb(_p, _q, _HSL.h + (1.f / 3.f));
		_RGB.g = hueToRgb(_p, _q, _HSL.h);
		_RGB.b = hueToRgb(_p, _q, _HSL.h - (1.f / 3.f));
	}
	else
	{
		//--- If the color is achromatic.
		_RGB.r = _HSL.l;
		_RGB.g = _HSL.l;
		_RGB.b = _HSL.l;
	}

	//--- Return the color.
	return _RGB;
};
XYZ hslToXyz(HSL _HSL)
{
	return rgbToXyz(hslToRgb(_HSL));
};
LAB hslToLab(HSL _HSL)
{
	return xyzToLab(rgbToXyz(hslToRgb(_HSL)));
};
int xyzToHex(XYZ _XYZ)
{
	return (int)rgbToHex(xyzToRgb(_XYZ));
}
RGB xyzToRgb(XYZ _XYZ)
{
	//--- Initialize the return variable.
	RGB _RGB;

	//--- Convert XYZ to sRGB to RGB
	float _r = _XYZ.x *  0.032406f + _XYZ.y * -0.015372f + _XYZ.z * -0.004986f;
	float _g = _XYZ.x * -0.009689f + _XYZ.y *  0.018758f + _XYZ.z *  0.000415f;
	float _b = _XYZ.x *  0.000557f + _XYZ.y * -0.002040f + _XYZ.z *  0.010570f;
	_RGB.r = (_r > 0.0031308f) ? 1.055f * powf(_r, 1.0f / 2.4f) - 0.055f : _r * 12.92f;
	_RGB.g = (_g > 0.0031308f) ? 1.055f * powf(_g, 1.0f / 2.4f) - 0.055f : _g * 12.92f;
	_RGB.b = (_b > 0.0031308f) ? 1.055f * powf(_b, 1.0f / 2.4f) - 0.055f : _b * 12.92f;

	//--- Return the color.
	return _RGB;
}
HSL xyzToHsl(XYZ _XYZ)
{
	return rgbToHsl(xyzToRgb(_XYZ));
}
LAB xyzToLab(XYZ _XYZ) 
{
	//--- Initialize the return value.
	LAB _LAB;

	//--- Translate to Lab colorspace.
	float _x = _XYZ.x / 095.047f; _x = (_x > 0.008856f) ? powf(_x, 1.0f / 3.0f) : (7.787f * _x) + (16.f / 116.f);
	float _y = _XYZ.y / 100.000f; _y = (_y > 0.008856f) ? powf(_y, 1.0f / 3.0f) : (7.787f * _y) + (16.f / 116.f);
	float _z = _XYZ.z / 108.883f; _z = (_z > 0.008856f) ? powf(_z, 1.0f / 3.0f) : (7.787f * _z) + (16.f / 116.f);
	_LAB.l = 116.f * _y - 16.f;
	_LAB.a = 500.f * (_x - _y);
	_LAB.b = 200.f * (_y - _z);

	//--- Return the color.
	return _LAB;
};
int labToHex(LAB _LAB)
{
	return rgbToHex(xyzToRgb(labToXyz(_LAB)));
}
RGB labToRgb(LAB _LAB)
{
	return xyzToRgb(labToXyz(_LAB));
}
HSL labToHsl(LAB _LAB)
{
	return rgbToHsl(xyzToRgb(labToXyz(_LAB)));
}
XYZ labToXyz(LAB _LAB)
{
	//--- Initialize the return value.
	XYZ _XYZ;

	//--- Translate to XYZ colorspace.
	float _y = (_LAB.l + 16.f) / 116.f;
	float _x = _y + _LAB.a / 500.f;
	float _z = _y - _LAB.b / 200.f;
	_x = (powf(_x, 3.f) > 0.008856f) ? powf(_x, 3.f) : (_x - 16.f / 116.f) / 7.787f;
	_y = (powf(_y, 3.f) > 0.008856f) ? powf(_y, 3.f) : (_y - 16.f / 116.f) / 7.787f;
	_z = (powf(_z, 3.f) > 0.008856f) ? powf(_z, 3.f) : (_z - 16.f / 116.f) / 7.787f;
	_XYZ.x = _x * 095.047f;
	_XYZ.y = _y * 100.000f;
	_XYZ.z = _z * 108.883f;

	//--- Return the color.
	return _XYZ;
}

/*--------------------------------------------------------------------------
 COLOR ANALYSING
--------------------------------------------------------------------------*/
int rgbCompare(RGB _RGB_a, RGB _RGB_b)
{
	if (_RGB_a.r != _RGB_b.r) return 0;
	if (_RGB_a.g != _RGB_b.g) return 0;
	if (_RGB_a.b != _RGB_b.b) return 0;
	return 1;

	return rgbToHex(_RGB_a) == rgbToHex(_RGB_b);
}
float rgbDistance(RGB _RGB_a, RGB _RGB_b)
{
	return (fabsf(_RGB_b.r - _RGB_a.r)
		+ fabsf(_RGB_b.g - _RGB_a.g)
		+ fabsf(_RGB_b.b - _RGB_a.b));
}
float labDeltaC(LAB _LAB_a, LAB _LAB_b)
{
	return sqrtf(powf(_LAB_b.a, 2.f) + powf(_LAB_b.b, 2.f))
		 - sqrtf(powf(_LAB_a.a, 2.f) + powf(_LAB_a.b, 2.f));
};
float labDeltaH(LAB _LAB_a, LAB _LAB_b)
{
	return sqrtf(powf(_LAB_b.a - _LAB_a.a, 2.f))
		 + sqrtf(powf(_LAB_b.b - _LAB_a.b, 2.f))
		 - powf(labDeltaC(_LAB_a, _LAB_b), 2.f);
}
float labDeltaE(LAB _LAB_a, LAB _LAB_b)
{
	return sqrtf( powf(_LAB_b.l - _LAB_a.l, 2.f)
				+ powf(_LAB_b.a - _LAB_a.a, 2.f)
				+ powf(_LAB_b.b - _LAB_a.b, 2.f));
};
float labDeltaE94(LAB _LAB_a, LAB _LAB_b)
{
	float _xDC = labDeltaC(_LAB_a, _LAB_b);
	float _xDE = labDeltaE(_LAB_a, _LAB_b);
	float _xDL = _LAB_b.l - _LAB_a.l;

	float _xDH = sqrtf(_xDE) > (sqrtf(fabsf(_xDL)) + sqrtf(fabsf(_xDC)))
		? sqrtf(powf(_xDE,2.f) - powf(_xDL, 2.f) - powf(_xDC, 2.f)) : 0.f;

	float _xC1 = sqrtf(powf(_LAB_a.a, 2.f) + powf(_LAB_a.b, 2.f));
	_xDC /= _xC1 * 0.045f + 1.f;
	_xDH /= _xC1 * 0.015f + 1.f;

	return sqrtf(powf(_xDL, 2.f) + powf(_xDL, 2.f) + powf(_xDL, 2.f));
}

/*--------------------------------------------------------------------------
COLOR MANIPULATION
--------------------------------------------------------------------------*/
RGB rgbBlend(RGB _RGB_a, RGB _RGB_b, float _r)
{
	//--- Direcly input color if the ratio is off limits.
	if (_r >= 1.f) return _RGB_a; 
	if (_r <= 0.f) return _RGB_b;

	//--- Blend color by multiplying channels.
	return (RGB){ _RGB_a.r * _r + _RGB_b.r * (1.f - _r),
				  _RGB_a.g * _r + _RGB_b.g * (1.f - _r),
				  _RGB_a.b * _r + _RGB_b.b * (1.f - _r)};
};
RGB rgbProcessBrightness(RGB _RGB, float _value)
{
	return (RGB){_RGB.r + _value,
				 _RGB.g + _value,
				 _RGB.b + _value};
};
RGB rgbProcessContrast(RGB _RGB, float _value)
{
	float _factor = (1.015f * (_value + 1.f)) / (1.f* (1.015f - _value));
	return (RGB){(_factor * _RGB.r - 0.5f) + 0.5f,
				 (_factor * _RGB.g - 0.5f) + 0.5f,
				 (_factor * _RGB.b - 0.5f) + 0.5f
	};
}
RGB rgbProcessGamma(RGB _RGB, float _value)
{
	return (RGB){ powf(_RGB.r, 1.f / _value),
				  powf(_RGB.g, 1.f / _value),
				  powf(_RGB.b, 1.f / _value)};
};
RGB rgbProcessNegative(RGB _RGB)
{
	return (RGB){ 1.f - _RGB.r, 
				  1.f - _RGB.g, 
				  1.f - _RGB.b};
};
RGB rgbProcessSolarize(RGB _RGB, float _value)
{
	if(_value > 0.f)
	return (RGB) {(_RGB.r < _value) ? 1.f - _RGB.r : _RGB.r,
				 (_RGB.g < _value) ? 1.f - _RGB.g : _RGB.g,
				 (_RGB.b < _value) ? 1.f - _RGB.b : _RGB.b};
	else
	return (RGB){(_RGB.r > _value + 1.f) ? 1.f - _RGB.r : _RGB.r,
				 (_RGB.g > _value + 1.f) ? 1.f - _RGB.g : _RGB.g,
				 (_RGB.b > _value + 1.f) ? 1.f - _RGB.b : _RGB.b};
}
RGB rgbProcessGrayscale(RGB _RGB)
{
	float _l = _RGB.r * 0.299f + _RGB.g * 0.587f + _RGB.b * 0.114f;
	return (RGB){ _l, _l, _l};
}

#endif