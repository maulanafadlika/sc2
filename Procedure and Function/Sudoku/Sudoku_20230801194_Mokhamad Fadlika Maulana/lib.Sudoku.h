#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4
typedef int matriksint[MAX_SIZE][MAX_SIZE];

matriksint M1, M2;
int i,j,k=1;
int hasil =1;
int a=4;
char nama[50];

void tentukan(matriksint M1);
void inisiasi(matriksint M2, matriksint M1, int a);
int periksa(matriksint M1, matriksint M2, int a);
void baca(matriksint M1, matriksint M2, int a);
void tulis(matriksint M1, matriksint M2, int a);
