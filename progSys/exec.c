#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int spawn(char* program, char** arg_list)
{
	pid_t child_pid;int status;

	child_pid=fork();
	if(child_pid != 0)
	{
	wait(&status);
	return child_pid;
	} else {
	execvp(program, arg_list);
	fprintf(stderr, "une erreur dans l'exécution de execvp\n");
	abort();
	}
}

int main(void){
	char* arg_list[] ={
	"ls",
	"-l",
	"/",
	NULL
	};
	spawn("ls", arg_list);
	return 0;
}
