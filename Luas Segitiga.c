#include<stdio.h>

int main(){
	printf("MENGHITUNG SEGITIGA DAN MENENTUKAN JENISNYA\n");
	printf("=============================================\n");
	printf("nama : ahmad mudzakir amin\n");
	printf("nim  : 20230801149\n");
	printf("=============================================\n");
	system("PAUSE");
	system("CLS");


    float alas, tinggi;
    printf("Masukkan panjang alas segitiga: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    float luas = 0.5 * alas * tinggi;

    if (alas == tinggi) {
        printf("Segitiga ini adalah segitiga sama sisi\n");
    } else if (alas == 0 || tinggi == 0) {
        printf("Segitiga ini adalah segitiga datar\n");
    } else if (alas < tinggi) {
        printf("Segitiga ini adalah segitiga lancip\n");
    } else if (alas > tinggi) {
        printf("Segitiga ini adalah segitiga tumpul\n");
    } else {
        printf("Segitiga ini adalah segitiga siku-siku\n");
    }

    printf("Luas segitiga adalah: %.2f\n", luas);

    return 0;


}
