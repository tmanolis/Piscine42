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
	int k;

	i = -1;
	j = 0;
	k = 1;

	
	if (ft_strlen(s1) < ft_strlen(s2))
		return (i);
	else if (ft_strlen(s1) == ft_strlen(s2))
		return (j);
	else
		return (k); 
}
