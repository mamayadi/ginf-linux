#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char *path;
char *home;
path = getenv("PATH");
home= getenv("HOME");
if( path != NULL && home != NULL){
printf("ancien PATH: %s et HOME: %s\n", path, home);
char newPath[200];
sprintf(newPath, "PATH=%s:%s",path,home);
putenv(newPath);
char *nouveaupath;
nouveaupath = getenv("PATH");
printf("Nouveau PATH :\n%s\n",nouveaupath);
}
return 0;
}

