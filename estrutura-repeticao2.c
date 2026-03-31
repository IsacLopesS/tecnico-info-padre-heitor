#include<stdio.h>

int main(){
//imprimir uma matriz de * 3x3

for(int i=0;i<3; i=i+1){

    for(int j=0;j<3;j=j+1){
       if(j<=i){
            printf("*");
       }

    }
    printf("\n");

}
printf("fim!");



return 0;
}
