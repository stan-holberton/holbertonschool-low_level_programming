#include "main.h"

/**
 * _pow_recursion - Retourne la valeur de x élevée à la puissance y.
 * @x: la base
 * @y: l'exposant
 *
 * Return: x à la puissance y, ou -1 si y est inférieur à 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
