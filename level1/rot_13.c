#include <unistd.h>
#include <stdio.h>

int    main(int ac, char **av)
{
	int i = 0;
	unsigned char c;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				c = av[1][i] + 13;
				if (c > 122)
					c -= 26;
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				c = av[1][i] + 13;
				if (c > 90)
					c -= 26;
			}
			else
				c = av[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}