#include "lib.bank.h"

// Menambahkan prototipe fungsi rekursif
void displayTransferHistory(TransferTransaction transaksiTransfer[], int jumlahTransaksi, int index);

// Mendeklarasikan variabel global saldo dan array transaksiTransfer
int saldo = 50000;
TransferTransaction transaksiTransfer[100];
int jumlahTransaksi = 0;

void sumpah()
{
    system("cls");
    printf("Dengan nama Allah, saya <Mokhamad Fadlika Maulana> bersumpah bahwa saya tidak melakukan\n");
    printf("kecurangan (mencontek ataupun memberikan contekan) Selama UAS Algoritma dan\n");
    printf("Pemrograman ini berlangsung, jika pengawas menemukan saya melakukan kecurangan\n");
    printf("Maka saya siap mendapatkan nilai 0 pada UAS, dan apabila kecurangan saya tidak\n");
    printf("diketahui oleh pengawas maka saya siap mendapatkan azab dari Allah baik didunia\n");
    printf("maupun di Akhirat kelak.\n");
}

void transfer()
{
    long int noRekeningTujuan;
    long int nominal;

    system("cls");
    printf("Masukkan no rekening tujuan: ");
    scanf("%ld", &noRekeningTujuan);

    printf("Masukkan nominal transfer: ");
    scanf("%ld", &nominal);

    if (saldo - nominal >= 0)
    {
        saldo -= nominal;

        // Menyimpan informasi transaksi transfer ke dalam array
        transaksiTransfer[jumlahTransaksi].noRekeningTujuan = noRekeningTujuan;
        transaksiTransfer[jumlahTransaksi].nominal = nominal;
        jumlahTransaksi++;

        printf("Transfer berhasil. Sisa saldo: %d\n", saldo);
    }
    else
    {
        printf("Saldo tidak mencukupi untuk transfer.\n");
    }
}

void nabung()
{
    system("cls");
    int nominalNabung;

    printf("Masukkan nominal yang ingin ditabung: ");
    scanf("%d", &nominalNabung);

    saldo += nominalNabung;
    printf("Nabung berhasil. Saldo baru: %d\n", saldo);
}

void tarikTunai()
{
    system("cls");
    int nominalTarikTunai;

    printf("Masukkan nominal uang yang ingin ditarik: ");
    scanf("%d", &nominalTarikTunai);

    if (nominalTarikTunai >= 50000 && saldo - nominalTarikTunai >= 0)
    {
        saldo -= nominalTarikTunai;
        printf("Penarikan tunai berhasil. Sisa saldo: %d\n", saldo);
    }
    else
    {
        printf("Penarikan tunai gagal. Pastikan nominal minimal 50000 dan saldo mencukupi.\n");
    }
}

void liatSaldo()
{
    system("cls");
    printf("Saldo Anda saat ini: %d\n", saldo);
}

void transaksiTransferMenu()
{
    system("cls");
    printf("======== RIWAYAT TRANSAKSI TRANSFER ========\n");
    displayTransferHistory(transaksiTransfer, jumlahTransaksi, 0);
}

// Implementasi fungsi rekursif untuk menampilkan riwayat transaksi transfer
void displayTransferHistory(TransferTransaction transaksiTransfer[], int jumlahTransaksi, int index)
{
    if (index == jumlahTransaksi)
    {
        printf("==========================================\n");
        return;
    }

    printf("No Rekening Tujuan : %ld, Nominal Transfer: %d\n", transaksiTransfer[index].noRekeningTujuan, transaksiTransfer[index].nominal);

    // Pemanggilan rekursif untuk menampilkan transaksi selanjutnya
    displayTransferHistory(transaksiTransfer, jumlahTransaksi, index + 1);
}

void exitProgram()
{
    system("cls");
    printf("Have a Nice Day :* \n");
    exit(0);
}

