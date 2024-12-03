# Listes Chaînées Simples

Ce projet traite de l'implémentation et de la gestion des listes chaînées simples en langage C. Nous explorons différentes opérations telles que l'affichage des éléments, l'ajout de nouveaux nœuds et la gestion de la mémoire.

## Exigences
- Le projet doit être compilé sur Ubuntu 20.04 LTS avec `gcc`.
- Respect du style de code Betty.
- Aucune variable globale autorisée.
- Maximum de 5 fonctions par fichier.
- Les seules fonctions standard autorisées sont `malloc`, `free` et `exit`.

## Fichiers
- `lists.h` : Fichier d'en-tête contenant la structure et les prototypes des fonctions.
- `0-print_list.c` : Fonction permettant d'afficher tous les éléments d'une liste chaînée simple.
- `README.md` : Description du projet.

## Compilation
Pour compiler les fichiers, utilisez la commande suivante :
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
