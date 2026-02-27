#include <stdio.h>

/**
 * row_sum - Calcule la somme de row * c pour c allant de 1 à cols
 * @row: Multiplicateur correspondant à la ligne courante
 * @cols: Nombre de colonnes
 *
 * Return: La somme calculée pour la ligne donnée
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - Calcule la somme totale des row_sum de 1 à rows
 * @rows: Nombre total de lignes
 * @cols: Nombre total de colonnes
 *
 * Return: La somme totale accumulée
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
		total += row_sum(r, cols);

	return (total);
}

/**
 * main - Point d'entrée du programme
 *
 * Return: 0 en cas de succès
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
