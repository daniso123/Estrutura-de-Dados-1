#include <stdio.h>
#include<ctype.h>

int main(){

      
	int n, cond,j;
	char orden[42];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
	    scanf("%s", orden);
	    cond = 0;
	    for(int j = 0; j < 42; j++){
	        if(orden[j+1] == '\0') break;
	        if(tolower(orden[j]) >= tolower(orden[j+1])){
	            cond = 1;
	            break;
	        
	    }

}
	          if(cond == 0) 
		     printf("%s: O\n", orden);
		   if(cond == 1) 
		    printf("%s: N\n", orden);
 
}	    
	


	return 0;
}

