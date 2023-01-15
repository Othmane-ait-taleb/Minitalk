#include "minitalk.h"

static void	char_to_sign(char c, int pid)
{
	int		i;
	char	shifted;

	i = 7;
	while (i >= 0)
	{
		shifted = c >> i;
		if (shifted & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(100);
	}
}

int	main(int argc, char const *argv[])
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_printf("wrong arguments\n");
		return (0);
	}
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		char_to_sign(argv[2][i], pid);
		i++;
	}
	char_to_sign('\0', pid);
	return (0);
}
