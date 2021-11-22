#include <stdio.h>

long long int count = 0; 

void hanoi(int n,int orig, int dest, int temp){
  if( n == 1 ){
    count+=1;
  }else{
     hanoi (n-1,orig, temp, dest) ;
    count +=1;
     hanoi (n-1,temp, dest, orig);
     
  }
}

int main(){
  
  long long int n,c=1;

    while(scanf("%lld", &n)==1 && n>0){
        count = 0;
    hanoi(n,0, 2, 1);

    printf("Teste %lld\n%lld\n\n",c++,count);
   
    }

    
    
  return 0;
}
