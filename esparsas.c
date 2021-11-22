#include <stdio.h>
#include<stdlib.h>


typedef struct  no {
   int coluna;
   int valor;
   struct no *prox;
   
}no;

typedef struct matriz{
    int colunas;
    int linhas;
    no **valores;

}matriz;

typedef struct vetor{
    int elem;
    no *valor;
}vetor;

void  inicializa(int linhas, int colunas, matriz *m){
    
    m -> linhas = linhas;
    m -> colunas = colunas;
    m -> valores = malloc (linhas * sizeof(no*));
    for(int i =0; i< linhas; i++){

        m -> valores[i]= malloc (sizeof(no));
        m -> valores[i] -> prox = NULL;
    }
    
}



void inserir (int linha, int coluna, int valor, vetor *p){

    no *novo = malloc (sizeof(no));
    novo -> coluna = coluna;
    novo -> valor = valor;
    novo -> prox = p[linha].valor;
    no *aux = p[linha].valor;

   
        p[linha].valor = novo;
    

}



void produto(int lin, int col, vetor* m, int *v){

        int res;
    for (int i = 0; i < lin; i++){
        
        if(m[i].valor !=NULL){
            res = 0;
            for(no *aux = m[i].valor; aux != NULL; aux = aux -> prox){

                res+= aux-> valor * v[aux->coluna];

         
            }
            printf("%d\n", res);
        }
    }
    

}



int main(){

    int linha,coluna;
    matriz * valores;
    int valor;
        
    scanf("%d%d", &linha, &coluna);
    int vetores[coluna];
    vetor *vet = malloc(linha * sizeof (vetor));

    for(int k = 0; k< linha; k++){
            vet[k].elem = 0;
            vet[k].valor = NULL;
    }
    for(int i =0; i<coluna; i++){

        scanf("%d", &vetores[i]);
    }
    int lin, col;
    while (scanf("%d %d %d", &lin, &col, &valor)!= EOF){
    
        inserir(lin, col,valor, vet);
        
    }
    produto(linha, coluna, vet, vetores);
    

    return 0;
}


