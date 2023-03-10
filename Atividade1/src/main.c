#include <stdio.h>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "funcoesAux.h"

int main(int argc, char const *argv[])
{   

    for (int i = 10; i < 10001; i *= 10){

        printf("3 Algoritimos de Ordenação de Vetoroes com %d Elementos: \n", i);
        printf("\n");
        printf("Bubble Sort: %f segundos.\n", calcularTempoExecucaoBubble(i));
        printf("Quick Sort:  %f segundos.\n", calcularTempoExecucaoQuick(i));
        printf("Merge Sort:  %f segundos.\n", calcularTempoExecucaoMerge(i));
        printf("\n");
    }

    return 0;
}
