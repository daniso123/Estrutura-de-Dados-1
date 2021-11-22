#include<stdio.h>




int main (){

 
  
   
   printf("%p  %d\n", imprime (*v, 2)) ;
return 0;
}

void imprime (char *v, int n) {

char *c;

for (c = v; c < v + n; c++)

printf ("%c", *c);

}
