#include"prc.bank.c"

int main()
{
    int pilihan;
    char ulang;
    
    system("CLS");
    printf("UJIAN AKHIR SEMESTER ALGORITMA DAN PEMROGRAMAN\n");
    printf("=====================================================\n");
    printf("Nama  : Mokhamad Fadlika Maulana \n");
    printf("Nim   : 20230801194 \n");
    printf("Email : mfadlika@rockemail.com \n");
    printf("=====================================================\n");
    printf("\n");
    printf("Welcome,  ");
    system("PAUSE");

    do
    {
    	system("CLS");
        printf("==========================================\n");
        printf("===========PROGRAM SIMULASI BANK==========\n");
        printf("==========================================\n");

        printf("PILIH MENU : \n");
        printf("1. Sumpah \n");
        printf("2. Transfer \n");
        printf("3. Nabung\n");
        printf("4. Tarik Tunai \n");
        printf("5. Liat Saldo\n");
        printf("6. Transaksi Transfer\n");
        printf("7. EXIT\n");

        printf("Pilihan :  ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        default:
            printf("Pilihan Tidak Valid! \n");
            break;

        case 1:
            sumpah();
            break;

        case 2:
            transfer();
            break;

        case 3:
            nabung();
            break;

        case 4:
            tarikTunai();
            break;

        case 5:
            liatSaldo();
            break;

        case 6:
            transaksiTransferMenu();
            break;

        case 7:
            exitProgram();
            break;
        }

        printf("\nIngin Melakukan Sekali Lagi? (Y/N): ");
        scanf(" %c", &ulang);
    } while (ulang == 'Y' || ulang == 'y' || ulang == 'N' || ulang == 'n');

    return 0;
}


