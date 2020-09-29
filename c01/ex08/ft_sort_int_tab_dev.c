
#include <unistd.h>


void ft_sort_int_tab(int *tab, int size);


/*
void ft_sort_int_tab(int *tab, int size)
{
 int i;
 int tmp;
i = -1;
 while (++i < size)
 {
  if (tab[i + 1] < tab[i])    //出現需要調整時，執行swap
  {
   tmp = tab[i];
   tab[i] = tab[i + 1];
   tab[i + 1] = tmp;
   i = -1;                    //從０執行，確保每個都比較過
  }
 }
}

*/


void	ft_sort_int_tab(int *arr, int size)
{
	int		i;
	int		j;
	int		tmp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] >= arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			i++;
		}
		j++;
	}
}


void	ft_sort_int_tab(int *tab, int size);
int main()
{
	int arr[4] = {5, 4,23,11};
	ft_sort_int_tab(&arr[0], 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ",arr[i]);
	}
}
