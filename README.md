# Libft
Ce projet a pour but de vous faire coder en C une bibliothèque de fonctionsusuelles que vous pourrez utiliser dans tous vos projets

## Préambule
Ce premier projet marque le début de votre formation de développeur. profitez-enpour lire cet article et apprenez aujourd’hui que le typage est ce qui différencie le déve-loppeur de la bête. Si vous ne comprenez pas tout ce n’est pas grave. Ca viendra avec letemps.

## Introduction
Le projet `libft` reprend le concept du `D06` de la piscine, à savoir vous faire écrire unebibliothèque de fonctions utiles que vous pourrez ensuite utiliser dans la vaste majoritéde vos projets de C cette année et ainsi vous faire gagner beaucoup de temps. Ce projetvous demande d’écrire beaucoup de code que vous avez déja réalisé pendant la piscine, ce qui en fait un excellent moment pour faire le point sur votre avancement.

## Objectifs
La programmation en C est une activité très laborieuse dès lors qu’on a pas accès àtoutes ces petites fonctions usuelles très pratiques. C’est pourquoi nous vous proposonsà travers ce projet de prendre le temps de réécrire ces fonctions, de les comprendre etde vous les approprier. Vous pourrez alors réutiliser votre bibliothèque pour travailler efficacement sur vos projets en C suivants. Ce projet est également pour vous l’occasion d’étendre la liste des fonctions demandées avec les vôtres et ainsi de rendre votre bibliothèque encore plus utile. N’hésitez pas àcompléter votre `libft` tout au long de votre scolarité une fois que ce projet ne sera plusqu’un souvenir pour vous.

## Consignes générales
- Les fonctions sont à réaliser dans l’ordre que vous souhaitez et vous êtes très en-couragés à utiliser les fonctions déja codées pour réaliser les suivantes. La difficultén’est pas croissante et l’ordre du sujet parfaitement arbitraire. C’est un peu commedans un jeu vidéo où vous pouvez réaliser des quêtes dans l’ordre que vous voulezet utiliser le loot des précédentes pour vous faciliter les suivantes.
- Votre projet doit être à la Norme.
- En aucun cas vos fonctions ne doivent quitter de façon inattendue (Segmentationfault, bus error, double free, etc) en dehors des comportements indéterminés. Votreprojet serait alors considéré comme non fonctionnel et recevra la note de0ensoutenance.
- Toute mémoire allouée sur le tas doit être libérée proprement quand nécéssaire.•Vous devez rendre, à la racine de votre dépôt de rendu, un fichierauteurcontenantvotre login suivi d’un `’\n’` :
```bash
$>cat -e auteur
xlogin$
```
- Vous devez rendre un fichier C par fonction à réaliser ainsi qu’un fichierlibft.hqui contiendra tous leurs prototypes ainsi que lesmacroset lestypedefsdontvous pourriez avoir besoin. Tous ces fichiers devront se trouver à la racine de votredépot.
- Vous devez rendre unMakefilequi compilera vos sources vers une bibliothèquestatique nomméelibft.a.
- Votre `Makefile` doit au moins proposer les règles `$(NAME)`, `all`, `clean`, `fclean` et `re` dans l’ordre qui vous paraîtra le plus adapté.
- Votre `Makefile` doit compiler votre travail avec les flags de compilation `-Wall`, `-Wextra` et `-Werror`.
- Seules les fonctions suivantes de lalibcsont autorisées : `malloc(3)`, `free(3)` et `write(2)` et leur utilisation est restreinte, voir plus bas.
- Vous devez bien entendu inclure l’includesystème nécessaire pour utiliser l’une ou l’autre des 3 fonctions autorisées dans votre fichier `.c` concerné. Le seul `include` système que vous êtes autorisés à utiliser en plus est `string.h` pour avoir accès àla constante `NULL` et au `typesize_t`. Tout le reste est interdit.
- Nous vous encourageons à réaliser un ou plusieurs programmes de test pour votre bibliothèque. Bien que ce travail ne soit pas à rendre sur votre dépot et ne sera pas évalué, il vous permettra de tester facilement votre travail et celui desautres.

Hormis dans le cadre de la piscine à distance qui n’en contient pas, vous trouverezune utilité particulière pour ces tests lors des soutenances. Vous êtes dans ce cadre là libres d’utiliser vos tests ou ceux du souteneur/soutenu voire même les deux si cela vous fait plaisir et la logistique sous-jacente est à votre discrétion.

## Considérations techniques
- Votre fichier `libft.h` peut contenir des `macros` et des `typedefs` selon vos besoins.
- Une chaine de caractères est TOUJOURS terminée par un `’\0’`, même si cela a été omis dans la description d’une fonction. Dans le cas contraire, cela serait explicitement indiqué.
- Interdiction d’utiliser des variables globales.
- Si vous avez besoin de fonctions auxiliaires pour l’écriture d’une fonction complexe,vous devez définir ces fonctions auxiliaires en `static` dans le respect de la Norme. - Vous devez prêter attention à vos types et utiliser judicieusement les casts quand c’est nécéssaire, en particulier lorsqu’un type `void *` est impliqué. Dans l’absolu, évitez les casts implicites, quels que soient les types concernés. Exemple :
```c
char *str;
str = malloc(42 *sizeof(*str));            /* Wrong ! Malloc retourne un void * (cast implicite) */
str = (char*) malloc(42 *sizeof(*str));    /* Right ! (cast explicite) *
```
