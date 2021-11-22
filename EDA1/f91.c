#include<stdio.h>

int f91(int n){
    int resultado;
if(n>=101){

   n = n - 10; 
   return n;

}
else {

    n = f91(f91(n+11));
    return n;
}

}

int main(){

   unsigned int n;

   while (scanf("%d", &n), n > 0)
       printf("f91(%d) = %d\n", n, f91(n));
   
 return 0;   
}
