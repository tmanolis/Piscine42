#include <unistd.h>

#define A [map[0][0], map[0][1], map[0][2], map[0][3]]
#define B [map[1][0], map[1][1], map[1][2], map[1][3]]
#define C [map[2][0], map[2][1], map[2][2], map[2][3]]
#define D [map[3][0], map[3][1], map[3][2], map[3][3]]

#define E [map[0][3], map[0][2], map[0][1], map[0][0]]
#define F [map[1][3], map[1][2], map[1][1], map[1][0]]
#define G [map[2][3], map[2][2], map[2][1], map[2][0]]
#define H [map[3][3], map[3][2], map[3][1], map[3][0]]


#define I [map[0][0], map[1][0], map[2][0], map[3][0]]
#define J [map[0][1], map[1][1], map[2][1], map[3][1]]
#define K [map[0][2], map[1][2], map[2][2], map[3][2]]
#define L [map[0][3], map[1][3], map[2][3], map[3][3]]

#define M [map[3][0], map[2][0], map[1][0], map[0][0]]
#define N [map[3][1], map[2][1], map[1][1], map[0][1]]
#define O [map[3][2], map[2][2], map[1][2], map[0][2]]
#define P [map[3][3], map[2][3], map[1][3], map[0][3]]


int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	params_valid(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	else if (!(argv[1] == ' ' || (argv[1] > 48 && argv[1] < 53)))
		return (0);
	else if (ft_strlen(argv[1]) =! 31)
		return (0);
	else
		return (1);
}

int	*get_params(char *str)
{
	int i;
	int contour[16];

	while (str[i] != '\0')
	{
		if (str[i] > 48 && str[i] < 53)
		{	
			contour[i] = str[i] - 48;
		}
		i++;
	}
	return (contour);
}

int	verify_line(int header, int *line)
{
	int i;
	int max;
	int count_building;

	i = 0;
	max = 0;
	count_building = 0;
	while (i < 4)
	{
		if (max < line[i])
		{
			count_building = count_building + 1;
			max = line[i];
		}
		i++;
	}
	if ((count_building == header) && (line[0] + line[1] + line[2] + line[3] == 10)
		return (1);
	else
		return (0);
}

int	map_valid(int *contour, int **map)
{
	if (verify_line(contour[0], A) + verify_line(contour[1], B) + verify_line(contour[2], C) 
	+ verify_line(contour[3], D) + verify_line(contour[4], E) + verify_line(contour[5], F) 
	+ verify_line(contour[6], G) + verify_line(contour[7], H) + verify_line(contour[8], I) 
	+ verify_line(contour[9], J) + verify_line(contour[10], K) + verify_line(contour[11], L) 
	+ verify_line(contour[12], M) + verify_line(contour[13], N) + verify_line(contour[14], O) 
	+ verify_line(contour[15], P) == 16)
	{
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	if (!(params_valid(argc, argv)))
	{
		write(1, "error", 5);
		return (1);
	}
	
	int *contour = get_params(argv[1]);

	if (!(map_valid(contour, map)))
	{
		write(1, "error", 5);
		return (1);
	}
	
	return (0);
}
