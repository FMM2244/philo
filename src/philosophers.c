
#include "philo.h"

void	print_error(int flag)
{
	if (flag == 1)
		write(2, "Too much or too few arguments\n", 31);
	else if (flag == 2)
		write(2, "\n", 31);
}

void	setter(t_sim *simulation, char **av)
{
	simulation->no_philos = ft_atoi(av[0]);
	simulation->death_time = ft_atoi(av[1]);
	simulation->eating_time = ft_atoi(av[2]);
	simulation->sleeping_time = ft_atoi(av[3]);
	if (av[4])
		simulation->eating_repetitions = ft_atoi(av[4]);
}

void	start_simulation(t_sim *simulation)
{

}

int main(int ac, char **av)
{
	t_sim	simulation;

	if (ac == 5 || ac == 6)
	{
		setter(&simulation, av + 1);
		start_simulation(&simulation);
	}
	else
		print_error(1);
	return (0);
}