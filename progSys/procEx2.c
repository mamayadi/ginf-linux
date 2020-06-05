#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
/*pid_t pid1,pid2;
pid1 = fork();
if(pid1 == -1){
printf("Erreur\n");
exit(errno);
} else if(pid1 == 0){
printf("Je suis le 1er fils mon pid: %d\n", getpid());
exit(5);
} else {
printf("Je suis le père \n");
pid2 = fork();
if(pid2 ==-1){
printf("Erreur\n");
exit(errno);
} if(pid2==0){
printf("Je suis le 2eme fils mon pid %d\n", getpid());
} 
}*/
for(int i=0; i<5;i++){
pid_t pid = fork();
if(pid == -1){
printf("Erreur\n");
exit(errno);
} else if(pid == 0){
printf("Je suis le fils %d mon pid: %d\n",i+1,getpid());
break;
} else {
if(i==0)
printf("Je suis le père\n");
}
}
return 0;
}
