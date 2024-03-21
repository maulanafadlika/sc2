#include "prc.Queue.c"

int main() 
{
    Queue* loket[5];
    for (int i = 0; i < 5; ++i) 
	{
        loket[i] = createQueue();
    }

    do 
	{
        // Tampilkan status antrian pada setiap loket
        for (int i = 0; i < 5; ++i) 
		{
            displayQueue(loket[i], i + 1);
        }

        printf("\nMenu:\n");
        printf("1. Tambah Antrian\n");
        printf("2. Hapus Antrian\n");
        printf("3. Keluar Program\n");
        printf("Pilih aksi: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1: 
			{
            	system("cls");
                printf("Masukkan nomor loket : ");
                scanf("%d", &nomorLoket);
                if (nomorLoket < 1 || nomorLoket > 5) 
				{
                    printf("Nomor loket tidak valid.\n");
                    break;
                }
			
                char nama[50];
                printf("Masukkan nama: ");
                getchar(); // Membersihkan newline character sebelum membaca string
                fgets(nama, sizeof(nama), stdin); // Menggunakan fgets untuk membaca string
                nama[strcspn(nama, "\n")] = '\0'; // Menghilangkan newline character jika ada

                enqueue(loket[nomorLoket - 1], nama);
                system("cls");
                break;
            }
            case 2: 
			{
            	system("cls");
                printf("Masukkan nomor loket : ");
                scanf("%d", &nomorLoket);
                if (nomorLoket < 1 || nomorLoket > 5) 
				{
                    printf("Nomor loket tidak valid.\n");
                    break;
                }

                dequeue(loket[nomorLoket - 1]);
                system("cls");
                break;
                
            }
            case 3:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (choice != 3);

    return 0;
}

