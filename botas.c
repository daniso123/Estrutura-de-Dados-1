#include <stdio.h>
#include<stdlib.h>


int main (){


   	int *D = calloc(61,sizeof(int)), *E= calloc(61,sizeof(int)), i=0,N=0,M=0,n;
	char L = '0';
 
	
		while(scanf("%d %c", &M, &L)!=EOF){
		
			if(L=='E') {
                            E[M]++;
                        } else {
                    	    D[M]++;
                        }
			if(E[M] && D[M]){
			    E[M]--; D[M]--;
			    n++;
			}
		}
		printf("%d\n", n);
	
 
	return 0;
}
