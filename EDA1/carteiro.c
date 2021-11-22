#include <stdio.h>
#include <stdlib.h>


int buscaBinaria(long *v, long n, long x){

   int e, d,m;

  e = - 1; 
  d = n; 
  while (e<d - 1){
	m = (e+d)/2;                          

      if(v[m]< x) e = m;
	
      else d = m;


}
return d;

}
 

/*int buscaBinaria(int *casas, int tam, int pass)
{

	int cost, baixo, meio;

	cost = tam; baixo = 1;
	while (baixo <= cost)
	{

		meio = (baixo + cost) / 2;

		if (pass < casas[meio])
			cost = meio - 1;
		else if (pass > casas[meio])
			baixo = meio + 1;
		else
			return meio;

	}

	return -1;

}
*/


int main (){
	long  tmp =0;
	long i, x , z =1;
	long num1 , num2, tempo =0;
   
	scanf("%ld %ld", &num1, &num2);
     long casas[num1];
     long cartas[num2];
	for (i = 0; i < num1; i++)
		scanf("%ld", &casas[i]);
    
    
	z = 1;
	tempo = 0;
	for (i = 0; i < num2; i++){

		scanf("%ld", &tmp);
		x = buscaBinaria(casas, num1, tmp);
		tempo += abs(x - z);
		z = x;

	}
    

	printf("%ld\n", tempo);

    
return 0;
}

