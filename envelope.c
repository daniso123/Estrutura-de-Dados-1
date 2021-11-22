#include <stdio.h>
#define MAX 1 << 30
	

	int main(){
	 int envelos[1000];
	 int n, m, tipo, env = MAX;
	 scanf("%d", &n);
	 scanf("%d", &m);

	 for (int i = 0; i <= m; i++) {
		envelos[i] = 0;
	  }

	 for (int i = 0; i < n; i++) {

	  scanf("%d", &tipo);

	  envelos[tipo]++;

	 	}

	 for (int i = 1; i <= m; i++) {
	     if (envelos[i] < env) 
		env = envelos[i]; 

	 	}

	 printf("%d\n", env);

	  

	 return 0;

	}
