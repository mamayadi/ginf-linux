#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/*int main(void) {
int val = fork();
if(val ==-1)
return -1;
else if(val ==0)
printf("Hello fils\n");
else
printf("Hello pere\n");
return 0;
}*/

int main(void){
pid_t pid_fils;
printf("Nous sommes dans le programme principale ayant pour pid %d\n",getpid());

pid_fils = fork();
if(pid_fils ==-1){
puts("Erreur de création du nouveau processus");
exit(1);
}
if(pid_fils ==0){
printf("Nous sommes dans le fils \n");
printf("Le PID du fils est \%d\n", getpid());
printf("Le PID de mon père (PPID) est \%d\n", getppid());
} else {
printf("Nous sommes dans le père\n");
printf("Le PID du fils est \%d\n", pid_fils);
printf("Le PID du père est \%d\n", getpid());
printf("PID du grand-père: \%d\n", getppid());
}
return 0;
}
