void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}
