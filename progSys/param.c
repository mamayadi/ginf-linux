#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
printf("Vous avez entré %d mots\n",argc-1);
printf("Leur longueurs sont:\n");
for(int i=1; i<argc;i++){
printf("%s : %ld\n", argv[i],strlen(argv[i]));
}
}
