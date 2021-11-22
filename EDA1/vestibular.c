#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char gab[100], res[100];
  int soma=0, num, i, j;
  
    scanf("%d", &num); 
    scanf("%s", gab);

    scanf("%s", res);
    
    
    
    for(int i = 0;i<num; i++){
        	
	  
       	     if(gab[i]==res[i]){	
			soma++;
	     			
			}
	}

		printf("%d\n", soma++);
            
return 0;
}


        




