#include <stdio.h>
#include <stdlib.h>

typedef int matriksint[4][4];

void tentukan(matriksint M1){
	M1[0][0]=1;	M1[0][1]=4;	M1[0][2]=2;	M1[0][3]=3;
	M1[1][0]=2;	M1[1][1]=3;	M1[1][2]=4;	M1[1][3]=1;
	M1[2][0]=4;	M1[2][1]=1;	M1[2][2]=3;	M1[2][3]=2;
	M1[3][0]=3;	M1[3][1]=2;	M1[3][2]=1;	M1[3][3]=4;
}

void inisiasi (matriksint M2,matriksint M1, int a){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(i==j && i!=2){
				M2[i][j]=M1[i][j];
			}else if(i==j+2){
				M2[i][j]=M1[i][j];
			}else{
				M2[i][j]=0;
			}
		}
	}
}

int periksa(matriksint M1, matriksint M2, int a){
	int i,j,k=1;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(M1[i][j] != M2[i][j]){
				k=1;
				i=a+1;
				j=a+1;
			}else{
				k=2;
			}
		}
	}
	return k;
}

void baca(matriksint M1, matriksint M2, int a){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(i==j && i!=2){
				printf("%d ",M1[i][j]);
			}else if(i==j+2){
				printf("%d ",M1[i][j]);
			}else{
				if(M1[i][j]==M2[i][j]){
					printf("%d",M1[i][j]);
				}else{
					printf("* ");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

void tulis(matriksint M1, matriksint M2, int a){
	int i,j;
	printf("Silahkan Menjawab.\n");
	printf("__________________\n\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(M1[i][j]!=M2[i][j]){
				printf("Masukan Angka Baris %d kolom %d :",i+1,j+1);
				scanf("%d",&M2[i][j]);
			}
		}
	}
}

int main(){
	matriksint M1, M2;
	int hasil =1;
	int k=0,a=4;
	system("CLS");
	printf("Sudoku Game\n");
	printf("____________________\n\n");
	printf("Permainan Sudoku Ini Berbasis Matrik Ber-ordo 4x4,\n");
	printf("Dimana Jawaban telah ditentukan didalamnya,\n");
	printf("Selamat Barmain :)\n");
	tentukan(M1);
	inisiasi(M2,M1,a);
	system("pause");
	
	do{
		system("CLS");
		printf("Sudoku Game\n");
		printf("____________________\n\n");
		baca(M1,M2,a);
		hasil=periksa(M1,M2,a);
		if(hasil==1){
			tulis(M1,M2,a);
			k=k+1;
		}else if(hasil == 2){
			printf("Anda Telah Mencoba Menjawab Sebanyak	: %d\n",k);
			printf("______________________________________________\n");
			printf("Dan Selamat Anda.....\n");
			printf("Anda Telah Berhasil Menjawab Semuanya\n\n");
		}
	}while(hasil==1);
	system("pause");
}

