#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
#define MAX_QUEUE_SIZE 10
#define SERVICE_PRICE 12000
    
    
// Struktur antrian
struct Antrian 
{
    char nama[MAX_QUEUE_SIZE][50];
    int belakang, depan;
};

// Struktur profit
struct Keuntungan 
{
    char nama[3][10];
    int pendapatan[3];
};

// Variabel antrian dan profit
struct Antrian antrian = {{}, -1, -1};
struct Keuntungan keuntungan = {{"Anti", "Bella", "Citra"}, {0, 0, 0}};
char *penyedia_jasa[] = {"Anti", "Bella", "Citra"};
