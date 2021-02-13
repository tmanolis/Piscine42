char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}


char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] > 96 && str[i] < 123)) 
		{
			str[i] = str[i] - 32;
		}
		else if (!(str[i - 1] > 96 && str[i -1] < 123) 
			&& (str[i] > 96 && str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
