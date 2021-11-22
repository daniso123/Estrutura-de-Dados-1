#include<stdio.h>


int main(){

  int n = 0;
  int soma = 0;
  scanf("%i", &n);

  if(n>=11 && n<=30){
  
        soma = (n-10) + 7;
        }
  if(n>=31 && n<=100){
         soma = (n-(20)) * 2 +7; 
        }
  if(n>=101)
        soma = ((70*2)+((n-100)*5)+ 20  + 7);
  
             
  
                printf ("%i\n", soma);
        
 return 0;
}
