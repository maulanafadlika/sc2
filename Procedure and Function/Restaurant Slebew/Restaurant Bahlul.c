#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MENU_ITEMS 10

struct MenuItem 
{
    char name[50];
    float price;
};

struct MenuItem menu[MAX_MENU_ITEMS];
int menuCount = 0;

void bubSort();
void scSort();
void binSearch();

void addItem() 
{
    if (menuCount < MAX_MENU_ITEMS) 
	{
        struct MenuItem newItem;

        printf("Enter the name of the item: ");
        fflush(stdin); // Clear input buffer
        fgets(newItem.name, sizeof(newItem.name), stdin);
        newItem.name[strcspn(newItem.name, "\n")] = '\0'; // Remove trailing newline

        printf("Enter the price of the item: ");
        scanf("%f", &newItem.price);

        menu[menuCount] = newItem;
        menuCount++;
		system("cls");
        printf("Item added successfully!\n");
    } 
	else 
	{
        printf("Cannot add more items. List is full.\n");
    }
}


void bubSort() 
{
    struct MenuItem temp;
    for (int i = 0; i < menuCount - 1; i++) 
	{
        for (int j = 0; j < menuCount - i - 1; j++) 
		{
            if (strcmp(menu[j].name, menu[j + 1].name) > 0) 
			{
                temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
    printf("Menu successfully sorted by name.\n");
}

void scSort() 
{
    struct MenuItem temp;
    int min_idx;
    for (int i = 0; i < menuCount - 1; i++) 
	{
        min_idx = i;
        for (int j = i + 1; j < menuCount; j++) 
		{
            if (menu[j].price < menu[min_idx].price) 
			{
                min_idx = j;
            }
        }
        temp = menu[min_idx];
        menu[min_idx] = menu[i];
        menu[i] = temp;
    }
    printf("Menu successfully sorted by price.\n");
}

void binSearch() 
{
	// Implementasi Binary Search untuk mencari data by Wordname
    if (menuCount == 0) 
	{
        printf("Menu is empty, cannot perform search.\n");
        return;
    }

    char target[50];
    printf("Enter the name of the menu item to search: ");
    scanf("%s", target);

    scSort(); // Ensure menu is sorted before searching

    int left = 0, right = menuCount - 1, mid;
    int found = 0;

    while (left <= right) 
	{
        mid = (left + right) / 2;
        if (strcmp(menu[mid].name, target) == 0) 
		{
            found = 1;
            break;
        } else if (strcmp(menu[mid].name, target) < 0) 
		{
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) 
	{
        printf("Menu '%s' found with price %.2f\n", menu[mid].name, menu[mid].price);
    } 
	else 
	{
        printf("Menu '%s' not found.\n", target);
    }
}

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
    printf("\n");
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

