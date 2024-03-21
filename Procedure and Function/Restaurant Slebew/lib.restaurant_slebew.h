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
int input;
char ulang;
