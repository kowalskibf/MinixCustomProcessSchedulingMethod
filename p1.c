#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <lib.h>
#include <minix/type.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	int pid = getpid();
	int priority = 1;
	message msg;
	msg.m1_i1 = pid;
	msg.m1_i2 = priority;
	_syscall(MM, SET_PROCESS_PRIORITY, &msg);
	printf("[Started] PID: %d Priority: %d\n", pid, priority);
	while (1)
	{
	}
	return 0;
}
