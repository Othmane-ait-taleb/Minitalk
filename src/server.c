#include "minitalk.h"

static void	ft_convert_to_char(char *bits)
{
	int				power;
	unsigned char	c;
	size_t			len;

	power = 1;
	c = 0;
	len = ft_strlen(bits);
	while (len--)
	{
		c += (bits[len] - '0') * power;
		power *= 2;
	}
	write(1, &c, 1);
}
void	sign_to_bit(int sig)
{
	static char	*bits;
	static int	count;

	count++;
	if (bits == NULL)
	{
		bits = ft_strdup("0");
		count = 1;
	}
	if (sig == SIGUSR1)
		bits = ft_strjoin(bits, "1");
	else if (sig == SIGUSR2)
		bits = ft_strjoin(bits, "0");
	if (count == 8)
	{
		ft_convert_to_char(bits);
		free(bits);
		bits = NULL;
		count = 0;
	}
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR2, sign_to_bit);
	signal(SIGUSR1, sign_to_bit);
	while (1)
	{
		pause();
	}
	return (0);
}