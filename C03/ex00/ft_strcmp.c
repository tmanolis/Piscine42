int 	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}


int	ft_strcmp(char *s1,char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	if (i == ft_strlen(s2))
		return (0);
	else if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i]	
	}
}
