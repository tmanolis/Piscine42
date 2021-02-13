#include <unistd.h>
#include <stdlib.h>

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
	// else if (!(argv[1] == ' ' || (argv[1] > 48 && argv[1] < 53)))
		// return (0);
	else if (ft_strlen(argv[1]) != 31)
		return (0);
	else
		return (1);
}

int	*get_params(char *str)
{
	int i;
	int *contour;

	contour = (int *) malloc(16);

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
	if ((count_building == header) && (line[0] + line[1] + line[2] + line[3] == 10))
		return (1);
	else
		return (0);
}

int	map_valid(int* contour, int map[4][4])
{
	int arr[4] = {map[0][0], map[0][1], map[0][2], map[0][3]};
	int brr[4] = {map[1][0], map[1][1], map[1][2], map[1][3]};
	int crr[4] = {map[2][0], map[2][1], map[2][2], map[2][3]};
	int drr[4] = {map[3][0], map[3][1], map[3][2], map[3][3]};
	int err[4] = {map[0][3], map[0][2], map[0][1], map[0][0]};
	int frr[4] = {map[1][3], map[1][2], map[1][1], map[1][0]};
	int grr[4] = {map[2][3], map[2][2], map[2][1], map[2][0]};
	int hrr[4] = {map[3][3], map[3][2], map[3][1], map[3][0]};
	int irr[4] = {map[0][0], map[1][0], map[2][0], map[3][0]};
	int jrr[4] = {map[0][1], map[1][1], map[2][1], map[3][1]};
	int krr[4] = {map[0][2], map[1][2], map[2][2], map[3][2]};
	int lrr[4] = {map[0][3], map[1][3], map[2][3], map[3][3]};
	int mrr[4] = {map[3][0], map[2][0], map[1][0], map[0][0]};
	int nrr[4] = {map[3][1], map[2][1], map[1][1], map[0][1]};
	int orr[4] = {map[3][2], map[2][2], map[1][2], map[0][2]};
	int prr[4] = {map[3][3], map[2][3], map[1][3], map[0][3]};

	if (verify_line(contour[0], arr) + verify_line(contour[1], brr) + verify_line(contour[2], crr) 
	+ verify_line(contour[3], drr) + verify_line(contour[4], err) + verify_line(contour[5], frr) 
	+ verify_line(contour[6], grr) + verify_line(contour[7], hrr) + verify_line(contour[8], irr) 
	+ verify_line(contour[9], jrr) + verify_line(contour[10], krr) + verify_line(contour[11], lrr) 
	+ verify_line(contour[12], mrr) + verify_line(contour[13], nrr) + verify_line(contour[14], orr) 
	+ verify_line(contour[15], prr) == 16)
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
	int fakemap[4][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}
	};

	if (!(map_valid(contour, fakemap)))
	{
		write(1, "error", 5);
		return (1);
	}
	
	return (0);
}
