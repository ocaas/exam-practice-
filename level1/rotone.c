#include <unistd.h>
#include <stdio.h>

//HELP ITS 6AM IM ACTUALLY GOING TO KMS WHY DOESNT IT WORK?????????

int	main(int ac, char **s)
{
	int i = 0;

	if(ac == 2)
	{
		while(s[1][i])
		{
			if(s[1][i] >= 'a' && s[1][i] <= 'y')
				s[1][i] = s[1][i] + 1;
				// printf("entra en minus con valor: %c\n", s[1][i])
			if(s[1][i] >= 'A' && s[1][i] <= 'Y')
				s[1][i] = s[1][i] + 1;
			if(s[1][i] == 'z' || s[1][i] == 'Z')
				s[1][i] = s[1][i] - 25;
			write(1, &s[1][i], 1);
			i++;
		}		
		write(1, "\n", 1);
		return 0;
	}
}

/* void	rotone(char *s)
{
	int i = 0;
	while(*s)
	{
		if(s[i] >= 'a' && s[i] <= 'y')
		{
			i++;
			write(1, &s[i], 1);
			printf("%i\n", i);
		}
		if(s[i] >= 'A' && s[i] <= 'Y')
		{
			i++;
			write(1, &s[i], 1);
		}
		if(s[i] == 'z' || s[i] == 'Z')
			s[i] = s[i] - 26;
	}
}
int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
 */


/* int	main(int ac, char **av)
{
	int i = 0;
	char	c;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{	
				av[1][i] = (av[1][i] - 'a' + 1)% 10 + 1; 
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = (av[1][i] - 'A' + 1)% 10 + 1;
			write(1, &av[1][i], 1);
			i++;
		}	
		write(1, "\n", 1);
		return 0;
	}
} */
