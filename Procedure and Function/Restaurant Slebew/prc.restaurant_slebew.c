#include "lib.restaurant_slebew.h"

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
    scanf(" %[^\t\n]", target);

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
        printf("Menu ' %[^\t\n]' found with price %.2f\n", menu[mid].name, menu[mid].price);
    } 
	else 
	{
        printf("Menu %s not found.\n", target);
    }
}

