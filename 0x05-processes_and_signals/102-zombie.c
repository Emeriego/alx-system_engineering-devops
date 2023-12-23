#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/**
 * infinite_while - a function that runs forever and returns nothing
 * Return: 0 in the end
*/
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - the entry pt.
 * Return: returns 0
*/
int main(void)
{
	int offsprings = 0;
	pid_t pid;

	while (offsprings < 5)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", (int)pid);
		offsprings++;
	}
	if (pid != 0)
		infinite_while();
	return (0);
}
