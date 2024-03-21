#include "lib.Queue.h"

// Struktur data untuk simpul dalam queue
typedef struct Node 
{
    char nama[50];
    struct Node* next;
} Node;

// Fungsi untuk membuat simpul baru dalam queue
Node* newNode(char* nama) 
{
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->nama, nama);
    node->next = NULL;
    return node;
}

// Struktur data untuk queue (antrian)
typedef struct Queue 
{
    Node *front, *rear;
    int count; // Menyimpan jumlah node/antrian dalam satu loket
} Queue;

// Inisialisasi queue baru
Queue* createQueue() 
{
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = queue->rear = NULL;
    queue->count = 0;
    return queue;
}

// Fungsi untuk menambah antrian
void enqueue(Queue* queue, char* nama) 
{
    Node* node = newNode(nama);

    if (queue->rear == NULL) 
	{
        queue->front = queue->rear = node;
    } 
	else 
	{
        queue->rear->next = node;
        queue->rear = node;
    }
    
    queue->count++; // Menambah jumlah antrian dalam loket
}

// Fungsi untuk menghapus antrian
void dequeue(Queue* queue) 
{
    if (queue->front == NULL) return;

    Node* temp = queue->front;
    queue->front = queue->front->next;

    if (queue->front == NULL) 
	{
        queue->rear = NULL;
    }

    free(temp);
    queue->count--; // Mengurangi jumlah antrian dalam loket
}

// Fungsi untuk menampilkan antrian pada loket tertentu
void displayQueue(Queue* queue, int loket) 
{
    printf("LOKET [%d] : ", loket);
    if (queue->front == NULL) 
	{
        printf("Tidak Ada antrian\n");
        return;
    }

    Node* temp = queue->front;
    while (temp != NULL) 
	{
        printf("%s, ", temp->nama);
        temp = temp->next;
    }
    printf("\nBanyaknya Antrian di Loket : %d\n", queue->count);
}

// Fungsi
