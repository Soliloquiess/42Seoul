#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int ret;
	int *tmp;

	if (min >= max)
		return (0);
	ret = max - min;
	*range = (int*)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	tmp = *range;
	while (min < max)
		*(tmp++) = min++;
	return (ret);
}
int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int min = 0;
	int max = 10;
	int *result;
	int range = ft_ultimate_range(&result, min, max);
	printf("%d\n", range);
	for(int i = 0; i < max - min; i++)
		printf("%d ", result[i]);
	printf("\n");
	return 0;
}

