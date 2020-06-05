#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main(void){
int status;
pid_t pid_fils;
switch(pid_fils=fork()){
case -1: perror("Problème dans fork()\n");
exit(errno);
break;
case 0:
puts("---------------");
puts("Je suis le fils");
puts("Je retourne le code 5");
printf("Mon pid est %d\n",getpid());
puts("------------------");
exit(5);
default: puts("Je suis le père");
puts("Je récupère le code de retour");
waitpid(pid_fils, &status,0);
printf("code de sortie du fils %d : %d\n", pid_fils, WEXITSTATUS(status));
break;
}
return 0;
}
