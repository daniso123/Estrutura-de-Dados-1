#include<stdio.h>

void troca(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int BuscaBinaria(int array[], int l, int r, int x) 
{ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 

		if (array[m] == x) 
			return m; 

		if (array[m] < x) 
			l = m + 1; 

		else
			r = m - 1; 
	} 
	return -1; 
} 


int separacao(int array[], int baixo, int cima) 
{ 
	int pivot = array[cima]; 
	int i = (baixo - 1);  

	for (int j = baixo; j <= cima- 1; j++) 
	{ 
		if (array[j] < pivot) 
		{ 
			i++;  
			troca(&array[i], &array[j]); 
		} 
	} 
	troca(&array[i + 1], &array[cima]); 
	return (i + 1); 
} 

void quickSort(int array[], int baixo, int cima) 
{ 
	if (baixo < cima) 
	{ 
		int pi = separacao(array, baixo, cima); 
        quickSort(array, baixo, pi - 1); 
		quickSort(array, pi + 1, cima); 
	} 
} 

void ImprimirVet(int array[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", array[i]); 
	printf("n"); 
}

int main() { 
    int num = 0;
    scanf("%d",&num);

	int array[num];

    for(int j = 0 ; j < num ; j++){
        scanf("%d",&array[j]);
    }

	int n = sizeof(array)/sizeof(array[0]); 
	quickSort(array, 0, n-1);

    int num_ver;

    while(scanf("%d", &num_ver) != EOF){

	int nn = sizeof(array) / sizeof(array[0]); 
	int resultado = BuscaBinaria(array, 0, nn - 1, num_ver); 
    	(resultado == -1) ? printf("nao\n") 
				: printf("sim\n"); 
    }

	return 0; 
} 