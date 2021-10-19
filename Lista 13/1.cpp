#include <stdio.h>

#define vet 20

int binSearch(int elem, int v[], int n)
{
    int meio = n / 2;
    
    if(v[meio - 1] > elem) return binSearch(elem, v, meio);
    else if(v[meio - 1] < elem) return binSearch(elem, v, n + 1);
    else return meio;
}

int main()//Posição Real: 1  2  3  4  5  6   7   8   9   10  11  12  13  14  15  16  17  18  19  20
{        //Posição Vetor: 0  1  2  3  4  5   6   7   8   9   10  11  12  13  14  15  16  17  18  19
    int elem, v[vet] = {  2, 4, 5, 7, 9, 10, 15, 20, 21, 26, 36, 40, 45, 46, 49, 50, 65, 78, 89, 100};

    scanf("%d", &elem);

    printf("Posicao de %d: %d", elem, binSearch(elem, v, vet));

    return 0;
}

/*
***********************************************************************
* Implemente o método de pesquisa binária de forma recursiva          *
* (Não descobri um método de fazer a função retornar -1 caso não      *
* encontre nada)                                                      *
***********************************************************************
*/
