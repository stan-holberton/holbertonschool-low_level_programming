# Doubly Linked Lists - Listes Doublement Chaînées

Ce projet a pour objectif de nous familiariser avec les **listes doublement chaînées**, une structure de données essentielle en informatique. Contrairement aux listes simplement chaînées, où chaque nœud contient un pointeur vers le nœud suivant, les listes doublement chaînées permettent une navigation dans les deux sens grâce à un pointeur vers le nœud précédent et un autre vers le nœud suivant.

## Objectifs du projet

- Comprendre le fonctionnement des listes doublement chaînées.
- Apprendre à manipuler cette structure de données en C.
- Implémenter des fonctions pour parcourir, ajouter, supprimer et gérer les nœuds d'une liste doublement chaînée.
- Travailler avec la mémoire dynamique à l'aide des fonctions `malloc` et `free`.
- S'assurer de la gestion correcte des ressources (vérification des fuites mémoire avec Valgrind).
- Respecter les bonnes pratiques de codage, notamment avec le style **Betty**.

## Concepts abordés

- **Structure de données :** Compréhension de la structure `dlistint_t`, qui contient :
  - Un entier (`n`) représentant la valeur du nœud.
  - Un pointeur vers le nœud précédent (`prev`).
  - Un pointeur vers le nœud suivant (`next`).

- **Navigation bidirectionnelle :** Grâce aux pointeurs `prev` et `next`, on peut parcourir la liste dans les deux directions :
  - **Vers l'avant :** De la tête (head) vers la queue (tail).
  - **Vers l'arrière :** De la queue vers la tête.

- **Allocation et libération de mémoire :** Gestion dynamique de la mémoire pour créer et supprimer des nœuds sans provoquer de fuites.

## Exigences techniques

- Toutes les fonctions sont écrites en **C**, respectent le **Betty Style** et sont compilées sur Ubuntu 20.04 LTS avec `gcc`.
- Les fichiers incluent une documentation claire et concise au format **Betty**.
- Aucun usage de variables globales.
- Les seules fonctions de la bibliothèque standard autorisées sont :
  - `malloc`
  - `free`
  - `printf`
  - `exit`
- Toutes les fonctions doivent être testées avec des fichiers `main.c` (non poussés dans le dépôt).

## Structure du projet

- **`lists.h` :** Contient la définition de la structure `dlistint_t` et les prototypes des fonctions.
- **Implémentation :** Série de fichiers `.c` pour manipuler les listes doublement chaînées.
- **Documentation :** Le projet est entièrement documenté pour expliquer chaque fonction, paramètre et valeur de retour.
- **Tests :** Les fonctions sont testées pour garantir leur bon fonctionnement et leur robustesse.

## Compilation

Toutes les fonctions du projet sont compilées avec les options suivantes :
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <function_file.c> -o <output_file>
