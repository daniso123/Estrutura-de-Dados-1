#include <stdio.h>


void imprime (char *v, int n) {
 char *c;
 for (c = v; c < v + n; c++)

  printf ("%c\n", *c);
}



int main(){

char a[5]={1,2,3,4,5};
int s = 5;

imprime (a, s);


return 0;
}
