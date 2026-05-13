#include<stdio.h>

void lerMatriz(int tamanho, int M[tamanho][tamanho]){
    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            printf("\nInsira o valor para a posição M[%d][%d]: ", i,j);
            scanf("%d", &M[i][j]);
        }
    }

}

int qtdValoresMaioresQDez(int tamanho, int M[tamanho][tamanho]){
    int qtd=0;
    for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho;j++){
                if(M[i][j]>10){
                    qtd++;
                }
            }
    }
    return qtd;



}

int main(){

    int M[4][4];
    //Ler matriz 4x4
    lerMatriz(4, M[4][4]);
    int resultado = qtdValoresMaioresQDez(4, M[4][4]);
    if(resultado!=0){
        printf("Existem %d valores maiores que 10 ",resultado);
    }else{
            printf("Nao existe nenhum valor menor que 10");

    }


return 0;
}
