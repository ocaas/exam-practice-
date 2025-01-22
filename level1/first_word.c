#include <unistd.h>

int	main (int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i] != "\n")
		{
			write (1, av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}


/* 
if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while (argv[1][i] && (argv[1][i] != 32 && argv[1][i] != 9))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	} */