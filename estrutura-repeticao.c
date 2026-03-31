#include<stdio.h>

int main(){

//entendendo estrutura de repeticao for
//for(int i=10; i>0;i=i+1){

//        printf("\nvalor de i: %d",i);
//}

int j=0;
while(j>10){
    printf("\nvalor de j: %d",j);
    j=j+1;
}
printf("\nfim do j");


int k=0;
do{
    printf("\nvalor de k: %d",k);
    k=k+1;
}while(k>10);
printf("\nfim do k");



return 0;
}
