#include <unistd.h>
#include <signal.h>

int	g_handled = 0;

void	sig_handler(int sig)
{
	if (sig == SIGALRM)
		g_handled = 1;
}

int		alarm_test(void)
{
	signal(SIGALRM, sig_handler);
	alarm(1);
	while (g_handled == 0)
	{
		usleep(1000);
	}

	return (0);
}
