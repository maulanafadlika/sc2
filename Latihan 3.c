#include <stdio.h>  
    #include <string.h>  
    #include <conio.h>  
    #include <dos.h>  
    #include <ctype.h>  
    #include <stdlib.h>  
   // #include <iostream.h>
   // #include <fstream.h>  
      
    void tanggal();  
    void waktu();  
    void getdate(struct date *ptanggal);  
    void gettime(struct time *pwaktu);  
    void gettime(struct time *pwkt);  
      
    void tanggal(){  
        struct date tanggal;  
        getdate(&tanggal);  
        printf(“\t\t\t   *> Tanggal : %d-%d-%d”, tanggal.da_day, tanggal.da_mon, tanggal.da_year);}  
      
    void main(){  
        char c[10],cc[10];  
        char d[10],dd[10];  
        char key;  
        int pilih;  
        int total;  
        int plat,wrn;  
      
        ofstream file_keluaran;  
        file_keluaran.open(“PARKIR.TXT”,ios::app);  
      
     printf(“\n\n\t\t    =========================================\n”);  
     printf(“\t\t    =         MUHAMMAD FARID RIDWAN        =\n”);
     printf(“\t\t    =========================================\n”);  
     puts(“”);  
     printf(“\t\t- *   *   *   *   *   *   *   *   *   *   *   * -\n”);  
     printf(“\t\t-   #   #   #   #   #   #   #   #   #   #   #   -\n”);  
     printf(“\t\t- *   *   *   *   *   *   *   *   *   *   *   * -\n”);  
     printf(“\t\t-                                               -\n”);  
     printf(“\t\t- |/_/_/_/                                   /| -\n”);  
     printf(“\t\t- |_/_/_/          Created by :             /_| -\n”);  
     printf(“\t\t- |/_/_/                                   /_/| -\n”);  
     printf(“\t\t- |_/_/          Fariez Argonz            /_/_| -\n”);
     printf(“\t\t- |/_/                                   /_/_/| -\n”);  
     printf(“\t\t- |_/                                   /_/_/_| -\n”);  
     printf(“\t\t- |/                                     /_/_/_/| -\n”);  
     printf(“\t\t-                                               -\n”);  
     printf(“\t\t- *   *   *   *   *   *   *   *   *   *   *   * -\n”);  
     printf(“\t\t-   #   #   #   #   #   #   #   #   #   #   #   -\n”);  
     printf(“\t\t- *   *   *   *   *   *   *   *   *   *   *   * -\n”);  
     printf(“\t\t————————————————-\n”);  
     printf(“\n\t\tPlease Press Any Keys …………………….. “);  
     getch();  
     clrscr();  
      
    do{  
        clrscr();  
    gotoxy(21,1);puts(“=====================================\n”);  
    gotoxy(21,3);puts(”    GRAND GALAXY CITY PARK CENTER    \n”);
    gotoxy(21,5);puts(“=====================================\n”);  
      
    plat=atoi(c);  
    wrn=atoi(d);  
    plat=atoi(cc);  
    wrn=atoi(dd);  
      
        gotoxy(23,7);printf(“——————————–“);  
    gotoxy(23,8);printf(“|    << SYSTEM COMMAND >>      |”);
        gotoxy(23,9);printf(“|——————————|”);  
        gotoxy(23,10);printf(“|  1. MOBIL YANG INGIN MASUK   |”);  
        gotoxy(23,11);printf(“|  2. MOBIL YANG INGIN KELUAR  |”);  
        gotoxy(23,12);printf(“|______________________________|”);  
        gotoxy(22,14);printf(“Pilihan menu anda… “);  
        pilih=getch();  
      
        switch(pilih){  
            case ‘1’:  
                clrscr();  
                printf(“\n\n\t::> Masukkan plat nomor mobil yang ingin masuk : “);  
                file_keluaran<< gets(&c[plat]);  
      
                printf(“\t::> Warna mobil : “);  
                file_keluaran<< gets(&d[wrn]);  
      
                printf(“\n\t\t     MOBIL \”%s\” MASUK PARKIR PADA:\n”,c);  
                tanggal();  
      
                puts(“”);  
      
                struct time waktu;  
                    gettime(&waktu);  
                    printf(“\t\t\t   *> Jam     : %2d:%2d:%2d”, waktu.ti_hour, waktu.ti_min, waktu.ti_sec);  
      
                printf(“\n\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=”);  
                gotoxy(36,23);getch();  
                break;  
      
            case ‘2’:  
                clrscr();  
                printf(“\n\n\t::> Masukkan plat nomor mobil yang ingin keluar : “);  
                gets(&cc[plat]);  
      
                printf(“\t::> Warna mobil : “);  
                gets(&dd[wrn]);  
      
                if(cc[plat]!=c[plat]){  
            printf(“\n\n=-=-=-=-=-=-=-= MOBIL \”%s\” MAAF MOBIL BELUM TERDAFTAR DI PARKIR AREA =-=-=-=-=-=-=-=”,cc);
                    gotoxy(36,23);getch();  
                    break;}  
      
                printf(“\n\t\t     MOBIL \”%s\” KELUAR PARKIR PADA:\n”,c);  
                tanggal();  
      
                puts(“”);  
      
                struct time wkt;  
                    gettime(&wkt);  
                    printf(“\t\t\t   *> Jam     : %2d:%2d:%2d”, wkt.ti_hour, wkt.ti_min, wkt.ti_sec);  
      
                    printf(“\n\n\n\t\t:::: Mobil \”%s\” parkir selama %2d menit ::::”,cc,wkt.ti_min-waktu.ti_min);  
      
                if(wkt.ti_min – waktu.ti_min <= 2){  
                    total=2000;  
                    printf(“\n\n\n  >>> Total biaya parkir = %d”,total);}  
                else if(wkt.ti_min – waktu.ti_min > 2){  
                    total=2000+(1000*(wkt.ti_min – waktu.ti_min));  
                    printf(“\n\n\n  >>>> Total biaya parkir = %d”,total);}  
      
                printf(“\n\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=”);  
                gotoxy(36,23);getch();  
      
                break;  
      
            default:  
                printf(“\n\n\n=-=-=-=-=-=-=-=-=-=–=-= ANDA SALAH TEKAN TOMBOL…!!! =-=-=-=-=-=-=-=-=-=-=-=-=”);  
                gotoxy(36,23);getch();  
        }  
      
            gotoxy(36,23);printf(“Apakah anda ingin kembali ke menu (Y/N)??? “);  
            key = getch();  
            key = toupper(key);  
      
    }while(key == ‘Y’);  
    clrscr();
        puts(“\n\n”);
        printf(“\t\t =============================================\n”);
        printf(“\t\t |   _/_/_/_/_/_/ _/\_/         _/_/_/_/       |\n”);
        printf(“\t\t |      _/       _/  \_/       _/   _/         |\n”);
        printf(“\t\t |     _/ _/ _/ _/    \_/     _/_/_/           |\n”);
        printf(“\t\t |    _/       _/ —- \_/   _/_/              |\n”);
        printf(“\t\t |   _/       _/        \_/ _/  _/_/_/         |\n”);
        printf(“\t\t |       _/_/                                 |\n”);
        printf(“\t\t |                                            |\n”);
        printf(“\t\t |      _/ _/    _/_/_/_/                     |\n”);
        printf(“\t\t |      _/ _/    _/     _/                    |\n”);
        printf(“\t\t |      _/ _/    _/      _/                   |\n”);
        printf(“\t\t |      _/ _/    _/     _/                    |\n”);
        printf(“\t\t |      _/ _/    _/_/_/_/                     |\n”);
        printf(“\t\t =============================================\n”);
        gotoxy(24,20);getch();  
    gotoxy(10,20);puts(“———–:: TERIMA KASIH TELAH BERKUNJUNG ::———–“);
      
        gotoxy(10,22);getch();  
        clrscr();  
        puts(“\n\n\n\n\t\t  ==========================================\n”);  
    puts(“\t\t                 M FARID RIDWAN\N”);
    puts(“\t\t                 54412940\n”);
