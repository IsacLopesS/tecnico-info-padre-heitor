#include <stdio.h>


    void ImprimeVet (int Tam, int Vet[5])
    {
        int i;

    }

    void AlteraValor (int Tam, int Vet[5])
    {
        int i;
        for (i=0; i< Tam; i++)
        {
         Vet[i] = 15;
        }
        Tam = 22;
    }

    int main()
    {
      int Notas[] = {4,8,12,16,20};

        int Tam = 5;
         printf("\n\n-------------ANTES DE CHAMAR A FUNÇÃO-------------\n");
        for (int i=0; i< Tam; i++)
        {
          printf("\n%d", Notas[i]);
        }
        printf("Tam: %d",Tam);

        AlteraValor(Tam, Notas);

        printf("\n\n-------------DEPOIS DE CHAMAR A FUNÇÃO-------------\n");

        for (int i=0; i< 15; i++)
        {
          printf("\n%d", Notas[i]);
        }
        printf("Tam: %d",Tam);
        return 0;

    }

