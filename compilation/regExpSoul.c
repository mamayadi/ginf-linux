#include <stdio.h>
#include <string.h>

int checkIDENT(char*);

int main(void){
	char word[20];
	int check;
	printf("Donner une mot:\n");
	scanf("%s",word);
	check = checkIDENT(word);
	if(check==0)
		printf("Le mot ne respecte pas le languge\n");
	else 
		printf("Le mot respect le languge\n");

	return 0;
}

int checkIDENT(char *word){
	int stat=1;
	for(int i=0;i<strlen(word);i++){
		switch(word[i]){
			case 'A' ... 'Z':
				if(stat==1 || stat==2){ 
					stat =2;
					break;
				} else { return 0; }
			case 'a' ... 'z':
				if(stat==1 || stat==2){
					stat=2;
					break;
				} else  { return 0; }
			case '0' ... '9':
				if(stat==2){
					stat=2;
					break;
				} else { return 0; }
			case '_':
				if(stat==1 || stat==2){
					stat=2;
					break;
				} else { return 0;}
			case ' ':
				if(stat==2){
					stat=3;
					break;
				} else { return 0; }
			default:
				printf("Le caractere hors languge\n");
				return 0;
		}
	}
	if(stat==3){
		return 1;
	}
}


