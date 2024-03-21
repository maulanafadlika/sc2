#include "prc.restaurant_slebew.c"

int main() 
{
    int input;
    char ulang;
   
    system ("CLS");
	printf("Tugas Algoritma & Pemrograman Pertemuan 10 \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("PAUSE");
	system("cls");
	

Awal:
	printf("========================================================\n");
    printf("\t\tRESTAURANT SLEBEW\n");
    printf("========================================================\n");
    printf("No\tNama Barang\t\tHarga\n");
    printf("========================================================\n");

    for (int i = 0; i < menuCount; i++) 
	{
        printf("%d.\t %s \t \t Rp%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
    
    printf("========================================================\n");
    printf("\n");
    printf("1. Add New Menu\n");
    printf("2. Sort Menu by Name (Bubble Sort)\n");
    printf("3. Sort Menu by Price (Selection Sort)\n");
    printf("4. Search Menu (Binary Search)\n");
    printf("5. Exit\n");
    printf("\n");
    printf("Enter Your Choice: ");
    scanf("%d", &input);

    switch (input) 
	{
        case 1:
            system("CLS");
            addItem();
            break;
        case 2:
            system("CLS");
            bubSort();
            break;
        case 3:
            system("CLS");
            scSort();
            break;
        case 4:
            system("CLS");
            binSearch();
            break;
        case 5:
            system("CLS");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
            system("pause");
            system("cls");
            goto Awal;
    }
	goto Awal; 	
    return 0;
}
