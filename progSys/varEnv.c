#include <stdio.h>
#include <stdlib.h>
//extern char **environ;
int main(int argc,char **argv){
char *val;
for(int i=1; i<argc;i++){
val = getenv(argv[i]);
if(val !=NULL)
puts(val);
}
//if(getenv("HOME") != NULL)
//puts(getenv("HOME"));
return 0;
}
