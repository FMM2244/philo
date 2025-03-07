
#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct s_sim
{
	int	no_philos;
	int	death_time;
	int	eating_time;
	int	sleeping_time;
	int	eating_repetitions;
	int	no_forks;
}	t_sim;

typedef struct s_philo
{
	int		id;
	t_sim	sim;
}	t_philo;

int	ft_atoi(const char *nptr);

#endif