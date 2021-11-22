#include <stdio.h>
#define TRUE 1
#define false 0 
#define MAX 100100
unsigned  vet[MAX];

int territorio(int ter, int tam){

    int tam1, tam2, tam3;

    tam2 = 0;
   tam1 = tam - 1;

    while (tam1 > tam2){
        tam3 = tam2 + ((tam1 - tam2) / 2);
        if (vet[tam3] < ter)
            tam2 = tam3 + 1;
        else
            tam1 = tam3;
    }

    return tam2;

}

   int  main (){

     int territorio(int, int);
     unsigned n, i, esp, cont;
     scanf("%u", &n);

     int soma;
     soma = cont = 0;
     scanf("%u", &vet[0]);
     cont += vet[0];
     for (i = 1; i < n; ++i){

        scanf("%u", &esp);
        vet[i] += vet[i - 1] + esp;
        cont += esp;

    }

    printf("%u\n", territorio(cont / 2, n) + 1);

return 0;

}
