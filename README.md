![Programmation en C](./img/Programmation_en_C.png "Pseudo-logo du repository 'Programmation en C'.")

# Code Groupe en C

Ici seront ajouté tous les codes avec Wail Ait Hamedate, Daniel Alves Araujo, Antony 'Kiwi' et Lucas Espinar.
Ce groupe a été créé dans le but de pouvoir partager le code normalement ce qui sera bien pour les groupe plus tard en projet.

## Licence

Le projet est sous licence GNU Général Public Licence

## C'est quoi ici ?

C'est un endroit pour partager les projets en C et parfois en Ocaml pourquoi pas. N'hésitez pas à regarder comment faire pour Git un projet en local/Git.

# Programmation en C - Cours L2 Informatique

Nous mettons en pratique au maximum les cours et les testons dans plusieurs situations simples.
`main.c` est le fichier qui sera à la source de l'executable. Les autres fichiers seront disposé dans le dossier sources, header comme fichiers sources 

Pour pouvoir executer ce projet, il vous faudra au préalable `gcc` installable grâce à `cygwin64` sur Windows, qu'il est possible d'avoir depuis https://www.cygwin.com/ . `gcc` est nativement disponible sur les distributions GNU/Linux.

- Pour Windows

Il y a une petite spécificité sur Windows qu'il faut faire avant de poursuivre le projet : Ajouter `gcc` à la variable `Path`.
Après installation de Cygwin64, rechercher `Modifier les variables d'environnement système`

![Menu démarrer et rechercher Variables d'environnement système](./img/Variable.png "Modifier les variables d'environnement système.")

Paramètres Système Avancés -> Variables d'environnement

![Accéder aux Variables d'environnement](./img/Variable2.png "Modifier les variables d'environnement système - Partie 2.")

Puis double cliquer sur Path

![Accéder à la variable Path](./img/Variable3.png "Modifier les variables d'environnement système - Partie 3.")

Et enfin en cliquant sur une nouvelle ligne, insérer le lien vers le dossier de `cygwin64` et `cygwin64\bin`

![Renseigner le chemin vers cygwin64](./img/Variable4.png "Modifier les variables d'environnement système - Partie 4.")

Faites triplement `Ok` et redémarrez les programmes utilisant le path pour fonctionner si vous avez besoin d'accéder à `gcc` avec ceux-ci comme le Terminal ou encore Visual Studio Code dans notre cas. Redémarrez votre Ordinateur si Path n'est pas encore chargé, dans le pire des cas.

- Pour Linux

Naturellement disponible.

- Pour Mac

Malheureusement je n'en sais pas plus sur ce sujet à propos de Mac.

## Typedef créés

Dans ce projet, vous trouverez souvent des types non-objets listé comme ce qui suit en-dessous. Tous disponible dans le dossier sources. Sachez que pour les type `T_pile` et `T_file`, ils auront besoin au préalable de la structure `cellule`.

### Pile

`cellule`
```c
struct cellule
{
    int elem;
    struct cellule *suiv;
};
```

`T_pile`
```c
typedef struct cellule *T_pile;
```

Avec ses fonctions

```c
T_pile creerVide(void);
T_pile empiler(T_pile p, int val);
T_pile depiler(T_pile p);
void afficherPile(T_pile p);
int lenPile(T_pile p);
```
### File

`T_file`
```c
typedef struct {
    struct cellule *tete;
    struct cellule *queue;
}T_file;
```

Avec ses fonctions 

```c
T_file creerFile(void);
T_file enfiler(T_file file, int elem);
T_file defiler(T_file file);
```

### Array

Afin de comprendre Malloc, nous avons fait une fonction simplifiée qui n'appelle pas les pointeur au début mais qui doit être pointer tout du long sous la force de tableau `Array`.

```c
struct array
{
    int *elem;
    int size;
};

typedef struct array Array;
```

Avec ses fonctions

```c
Array empty_Array();
void append_int_array(Array *a, int e);
void afficher_array(Array a);
void free_array(Array *a);
```

### Arbres Binaires

Pour conclure et compléter les cours appris au Semestre 3 en Algorithme et Programmation, nous avons rajouté les arbres binaires limité à 25 de profondeurs avec le type `T_btree`.
```c
struct tree
{
    int elem;
    struct tree *subleft;
    struct tree *subright;
};

typedef struct tree *T_btree;
```

Avec ses fonctions

```c
T_btree creer_arbre_vide();
T_btree creer_arbre(int val);
T_btree creer_arbre_test(int profondeur);
T_btree subleft(T_btree tree);
void afficher_arbre(T_btree tree);
int free_branch(T_btree tree);
void free_tree(T_btree tree);
void cut(T_btree tree, char l_or_r);
unsigned long long get_nbr_leaf(T_btree tree);
unsigned long long get_nbr_noeuds(T_btree tree);
bool isleaf(T_btree tree);
int test_tree();
```

# Logs

## 19-01-2023
    - Correction des pile/files qui ne fonctionnaient pas avant
    - Création des arbres (limité à une profondeur de 25 testé)
    - Ajouts de fonctions via les exercices de TD/TP
    - Corrections et ajouts de paragraphes dans les markdown
    - Changement des images

## 18-01-2023
    - Plus d'exemple de Malloc dans shaya.c (dans le dossier source) 

## 17-01-2023
    - Correction des exercices
    - Importation des exercices de TD/TP

## 13-01-2023

    - Création d'une excecution automatique pour tout le projet sous pyton pour Visual Studio Code.
    - Rendu de ce Repository public pour un meilleur partage mais seulement les membres-contributeurs peuvent intéragir directement avec les fichiers.
    - Impossible de régler le problème du dépilage des files.

## 12-01-2023

    - Ajout d'une programmation modulaire au "projet" de base.

## 11-01-2023

    - Support Git ajouté
    - Création du projet d'apprentissage du C pour L2 Infos. Ajout des structs T_pile, T_file et de leur fonction de modification