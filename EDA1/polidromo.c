#include <stdio.h>
#include<stdlib.h>
#include <string.h>


void inveteStr(char srt[], int i){
	if(srt[i] == '\0') return;
	else {

	inveteStr(srt, i+1);

  
	printf("%c", srt[i]);
  
}
	}


int palindrome (char *str){
  
  int palind, i, ultimo, meio;
  
  ultimo = strlen (str) - 1;
  
  meio = strlen (str) / 2;
  
  palind = 1;
  i = 0;
  while (palind && i<= meio){
    
  palind = (str [i] == str [ ultimo -i ] );i ++;}
        return palind ;
}
void inveteStr(char srt[], int i);

int main(){



int i ;
char texto[50];

    scanf("%d", &i);
  for(i = 0;texto[i];  i++){
    scanf("%s", &texto [i]);
    

  
    if(palindrome (texto)){

    
    printf("1\n");
}
    else{
    printf("0\n");
}
  }
  return 0;
}
