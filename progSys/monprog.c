#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void afficheMessage(char *message){
puts(message);
}

int main(){
float x;
int a;
char* s;
printf("Saisissez un entier et un réel: ");
scanf("%d %f",&a,&x);
sprintf(s,"Vous avez tapé: a= %d x=%f",a,x);
afficheMessage(s);
free(s);
return 0;
}
