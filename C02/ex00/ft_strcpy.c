char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[0 + i] != '\0')
	{
		dest[0 + i] = src[0 + i];
		i++;
	}
	dest[0 + i] = '\0'; 
	return (dest);
}
