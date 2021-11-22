
#include <stdio.h>

int main()
{
    int i,j,cont;
    char frase[100], palavnova[100], palavatual[100];
    gets(frase); 
    scanf("%s%*c", palavatual);
    scanf("%s%*c", palavnova);
    for(i=0; frase[i]!='\0' ; i++){
          if(frase[i]==palavatual[i]){
             frase[i]=palavnova[i];
		
	}	
    }
    printf("%s\n", frase);
    return 0;
}
