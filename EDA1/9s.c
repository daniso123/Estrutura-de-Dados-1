#include <stdio.h>

int grau_9(int num){
	int soma;
    if(num % 9 == 0) return 0;
	else
	soma = (num % 9) + grau_9(num / 9);
	if (soma == 9)

	 
	return soma;

}

int main(){
    
	int n[1000], i;
	while(scanf("%d", &n[1000]), n[0]!= '0'){
	int grau = grau_9(n[i]);

	if(grau == -1)
		printf("%d is not a multiple of 9.\n", n[i]);
	else
		printf("%d is a multiple of 9 and has 9-degree %d\n", n[i], grau);
	}

	return 0;
}