#define ENTER 13
#define BACKSPACE 8
#define SPACE 32
#define TAB 9
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

void admin();
void kasir();
void menuKasir();
void nambahTbiasa();
void hpsTbiasa();
void updateTbiasa();
void detailTbiasa();
void nambahTpaket();
void hpsTpaket();
void updateTpaket();
void detailTpaket();
void inputPassword(char *password, int maxLength);      //password *
void nambahAdmin();
void hpsAdmin();
void detailAdmin();
void updateAdmin();
void detailKasir();
void hpsKasir();
void nambahKasir();
void arrowatasbawah();
void loginPassword(char password[]);
void loginUsername(char username[]);


void pemilik() {
    printf("Selamat Datang Sebagai Owner");
}


//FULL MENU ADMIN
void admin() {
    // printf("Masukan Username: ");
    //kotak username dan password
    gotoxy(125, 25);
    printf("Username: ");
    gotoxy(135, 26);
    printf("%c", 192);      //kiri bawah
    gotoxy(135, 24);
    printf("%c", 218);      //kiri atas
    gotoxy(161, 24);
    printf("%c", 191);      //kanan atas
    gotoxy(161, 26);
    printf("%c", 217);      //kanan bawah
    gotoxy(135, 25);
    printf("%c", 179);  //kiri tengah
    gotoxy(161, 25);
    printf("%c", 179);  //kanan tengah
    for (x = 136;x <= 160; x++) {    //atas
        gotoxy(x,24);
        printf("%c", 196);
    }
    for (x = 136;x <= 160; x++) {    //bawah
        gotoxy(x,26);
        printf("%c", 196);
    }

    gotoxy(125, 28);
    printf("Password: ");
    gotoxy(135, 29);
    printf("%c", 192);      //kiri bawah
    gotoxy(135, 27);
    printf("%c", 218);      //kiri atas
    gotoxy(161, 27);
    printf("%c", 191);      //kanan atas
    gotoxy(161, 29);
    printf("%c", 217);      //kanan bawah
    gotoxy(135, 28);
    printf("%c", 179);  //kiri tengah
    gotoxy(161, 28);
    printf("%c", 179);  //kanan tengah
    for (x = 136;x <= 160; x++) {    //atas
        gotoxy(x,27);
        printf("%c", 196);
    }
    for (x = 136;x <= 160; x++) {    //bawah
        gotoxy(x,29);
        printf("%c", 196);
    }
    gotoxy(136, 25);
    loginUsername(adm.username);
    gotoxy(136, 28);
    // printf("\nMasukan Password: ");
    loginPassword(adm.password);

        if((strcmp(adm.username, "Admin")== 0) && (strcmp(adm.password, "Admin") == 0)) {
            MessageBox(NULL, "Selamat Datang Sebagai Admin :D", "Login Admin", MB_OK | MB_ICONINFORMATION | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(136,25,8,1);
            setClearArea(136,28,8,1);
            system("cls");
            DashboardAdmin();
            do {
                gotoxy(22, 22);
                printf("1. C R U D  K A R Y A W A N");
                gotoxy(22, 24);
                printf("2. C R U D  T I K E T  B I A S A");
                gotoxy(22, 26);
                printf("3. C R U D  P A K E T  T R I P");
                gotoxy(22, 28);
                printf("4. C R U D  M E N U  M A K A N A N");
                gotoxy(25, 30);
                printf("& M I N U M A N");
                gotoxy(23, 32);
                printf("5. Exit");
                gotoxy(22, 34);
                printf("Masukan Pilihan:");
                gotoxy(38, 34);
                scanf("%d",&pilihan);
                fflush(stdin);
                setClearArea(38,34,1,1);

                switch(pilihan) {
                    case 1:
                        PrintFile("..//Tampilan/crudkaryawan.txt", 106, 1);
                        printf("\n1. A D M I N");
                        printf("\n2. K A S I R");
                        printf("\n3. S U P I R");
                        printf("\n4. E X I T");
                        printf("\nMasukan Pilihan : ");
                        scanf("%d",&pilihan2);
                        fflush(stdin);
                        if(pilihan2 == 1) {
                            do {
                                printf("\n1. Menambah Admin");
                                printf("\n2. Menghapus Admin");
                                printf("\n3. Mengupdate Admin");
                                printf("\n4. Melihat Data Admin");
                                printf("\n5. Kembali");
                                printf("\nSilahkan Masukan Pilihan: ");
                                scanf("%d",&pilihan3);
                                fflush(stdin);
                                if(pilihan3 == 1) {
                                    nambahAdmin();
                                }
                                if(pilihan3 == 2) {
                                    hpsAdmin();
                                }
                                if(pilihan3 == 3) {
                                    // updateAdmin();
                                }
                                if(pilihan3 == 4) {
                                    detailAdmin();
                                }
                            }while (pilihan3 != 4);
                        }
                        else if(pilihan2 == 2) {
                            printf("\n1. M E N A M B A H  K A S I R");
                            printf("\n2. ME N G H A P U S  K A S I R");
                            printf("\n3. M E N G U P D A T E  K A S I R");
                            printf("\n4. M E L I H A T  D A T A  K A S I R");
                            printf("\n5. E X I T");
                            printf("\nSilahkan Masukan Pilihan: ");
                            scanf("%d",&pilihan3);
                            fflush(stdin);
                            do {
                                if(pilihan3 == 1) {
                                    nambahKasir();
                                }
                                else if(pilihan3 == 2) {
                                    hpsKasir();
                                }
                                else if(pilihan3 == 3) {

                                }
                                else if(pilihan3 == 4) {
                                    detailKasir();
                                }
                            }while (pilihan3 != 5);
                        }
                    setClearArea(106,1,78,5);
                    break;
                    case 2:
                        PrintFile("..//Tampilan/crudtiketbiasa.txt", 120, 1);
                        printf("\n1. M E N A M B A H  T I K E T  B I A S A ");
                    printf("\n2. M E N G H A P U S  T I K E T  B I A S A ");
                    printf("\n3. M E N G U P D A T E  T I K E T  B I A S A ");
                    printf("\n4. M E L I H A T  T I K E T  B I A S A ");
                    printf("\n5. E X I T");
                    printf("\nSilahkan Masukan Pilihan: ");
                    scanf("%d",&pilihan2);
                    fflush(stdin);
                        if(pilihan2 == 1) {
                            nambahTbiasa();
                        }
                        else if(pilihan2 == 2) {
                            hpsTbiasa();
                        }
                        else if (pilihan2 == 3) {
                            updateTbiasa();
                        }
                        else if (pilihan2 == 4) {
                            detailTbiasa();
                        }
                    break;
                    case 3:
                        setClearArea(22,22,20,20);
                        PrintFile("..//Tampilan/crudtiketpaket.txt", 115, 1);
                    do {
                        setClearArea(115,10,50,35);
                        gotoxy(20,22);
                        printf("1. M E N A M B A H  T I K E T  P A K E T ");
                        gotoxy(20,24);
                        printf("2. M E N G H A P U S  T I K E T  P A K E T ");
                        gotoxy(20,26);
                        printf("3. M E N G U P D A T E  T I K E T  P A K E T ");
                        gotoxy(20,28);
                        printf("4. M E L I H A T  T I K E T  P A K E T ");
                        gotoxy(20,30);
                        printf("5. E X I T");
                        gotoxy(20,32);
                        printf("Silahkan Masukan Pilihan: ");
                        gotoxy(45,32);
                        scanf("%d",&pilihan2);
                        fflush(stdin);
                        setClearArea(45,32,1,1);
                        if(pilihan2 == 1) {
                            nambahTpaket();
                            MessageBox(NULL, "Menambah Tiket Paket Sukses!", "Menambah Tiket Paket", MB_OK | MB_ICONINFORMATION | MB_DEFAULT_DESKTOP_ONLY);
                        }
                        else if(pilihan2 == 2) {
                            hpsTpaket();
                        }
                        else if (pilihan2 == 3) {
                            updateTpaket();
                        }
                        else if (pilihan2 == 4) {
                            detailTpaket();
                        }
                    }while (pilihan2 != 5);
                    setClearArea(20,22,45,30);
                    setClearArea(115,1,60,5);
                    break;
                }
            }while (pilihan!=5);
        }
        else {
            MessageBox(NULL, "Masukan Username Dan Password Dengan Benar!!!", "Login Admin Tidak Valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(136,25,8,1);
            setClearArea(136,28,8,1);
        }
    system("cls");
}


//CRUD Tiket Biasa
void nambahTbiasa() {
    Data1 = fopen("TiketBiasa.dat", "ab");
    printf("\n1. Masukan ID Tiket: ");
    gets(Tbiasa.idTbiasa);
    fflush(stdin);
    printf("\n2. Masukan Nama Destinasi Awal Dan Akhir: ");
    gets(Tbiasa.namatmpt);
    fflush(stdin);
    printf("\n3. Masukan Hari Keberangkatan: ");
    gets(Tbiasa.jdwl);
    fflush(stdin);
    printf("\n4. Masukan Jam Keberangkatan: ");
    gets(Tbiasa.jam);
    fflush(stdin);
    printf("\n5. Masukan Jumlah Harga: ");
    scanf("%f", &Tbiasa.hrgbiasa);
    fflush(stdin);
    printf("\n6. Masukan Jumlah Tiket: ");
    scanf("%f", &Tbiasa.jmlh);
    fflush(stdin);
    fwrite(&Tbiasa, sizeof(Tbiasa), 1, Data1);
    fclose(Data1);
}

void hpsTbiasa() {
    Data1 = fopen("TiketBiasa.dat", "rb");
    Temp = fopen("Temp.dat", "wb");
    printf("\nMasukan ID Tiket Yang Dicari: ");
    gets(&cariId);
    while(fread(&Tbiasa, sizeof(Tbiasa), 1, Data1)) {
        if(strcmp(Tbiasa.idTbiasa, cariId) != 0) {
            fwrite(&Tbiasa, sizeof(Tbiasa), 1, Temp);
        }
    }
    if(strcmp(Tbiasa.idTbiasa,cariId)==0) {
        printf("Tiket Biasa Berhasil Dihapus!!!");
    }
    else {
        printf("Id Tiket Tidak Valid!!! \nHarap Masukan Id Tiket Yang Ada:D");
    }
    fclose(Data1);
    fclose(Temp);

    Data1 = fopen("TiketBiasa.dat", "wb");
    Temp = fopen("Temp.dat", "rb");
    while(fread(&Tbiasa,sizeof(Tbiasa),1,Temp)) {
        fwrite(&Tbiasa,sizeof(Tbiasa),1,Data1);
    }
    fclose(Data1);
    fclose(Temp);
}

void updateTbiasa() {
    printf("\n1. Update Keberangkatan - Tujuan");
    printf("\n2. Update Harga Tiket Biasa");
    printf("\n3. Update Jumlah Tiket");
    printf("\nMasukan Pilihan: ");
    scanf("%d",&pilihan3);
    fflush(stdin);
    if (pilihan3 == 1) {
        Data1 = fopen("TiketBiasa.dat", "rb");
        Temp = fopen("Temp.dat", "wb");
        printf("\nMasukkan ID Tiket Yang Dicari: ");
        gets(&cariId);
        while(fread(&Tbiasa,sizeof(Tbiasa),1,Data1)) {
            if(strcmp(Tbiasa.idTbiasa,cariId)==0) {
                printf("Masukkan Keberangkatan - Tujuan Baru : ");
                scanf(" %[^\n]%*c",&Tbiasa.namatmpt);
                fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
                printf("\nTempat Tujuan Baru Berhasil Diupdate!!!");
            }
            else {
                fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
            }
        }

        fclose(Data1);
        fclose(Temp);

        Data1 = fopen("TiketBiasa.dat", "wb");
        Temp = fopen("Temp.dat", "rb");
        while(fread(&Tbiasa,sizeof(Tbiasa),1,Temp)) {
            fwrite(&Tbiasa,sizeof(Tbiasa),1,Data1);
        }
        fclose(Data1);
        fclose(Temp);
    }
    else if (pilihan3 == 2) {
        Data1 = fopen("TiketBiasa.dat", "rb");
        Temp = fopen("Temp.dat", "wb");
        printf("\nMasukkan ID Tiket Yang Dicari: ");
        gets(&cariId);
        while(fread(&Tbiasa,sizeof(Tbiasa),1,Data1)) {
            if(strcmp(Tbiasa.idTbiasa,cariId)==0) {
                printf("Masukkan Harga Tiket Baru : ");
                scanf(" %f",&Tbiasa.hrgbiasa);
                fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
                printf("\nHarga Baru Berhasil Diupdate!!!");
            }
            else {
                fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
            }
        }

        fclose(Data1);
        fclose(Temp);

        Data1 = fopen("TiketBiasa.dat", "wb");
        Temp = fopen("Temp.dat", "rb");
        while(fread(&Tbiasa,sizeof(Tbiasa),1,Temp)) {
            fwrite(&Tbiasa,sizeof(Tbiasa),1,Data1);
        }
        fclose(Data1);
        fclose(Temp);
    }
    else if (pilihan3 == 3) {
        Data1 = fopen("TiketBiasa.dat", "rb");
        Temp = fopen("Temp.dat", "wb");
        printf("\nMasukkan ID Tiket Yang Dicari: ");
        gets(&cariId);
        while(fread(&Tbiasa,sizeof(Tbiasa),1,Data1)) {
            if(strcmp(Tbiasa.idTbiasa,cariId)==0) {
                printf("Masukkan Jumlah Tiket Yang Ingin Diperbarui : ");
                scanf(" %f",&Tbiasa.jmlh);
                fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
                printf("\nJumlah Tiket Berhasil Diupdate!!!");
            }
            else {
                fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
            }
        }

        fclose(Data1);
        fclose(Temp);

        Data1 = fopen("TiketBiasa.dat", "wb");
        Temp = fopen("Temp.dat", "rb");
        while(fread(&Tbiasa,sizeof(Tbiasa),1,Temp)) {
            fwrite(&Tbiasa,sizeof(Tbiasa),1,Data1);
        }
        fclose(Data1);
        fclose(Temp);
    }
}

void detailTbiasa() {
    Data1 = fopen("TiketBiasa.dat", "rb");
    while(fread(&Tbiasa, sizeof(Tbiasa), 1, Data1)) {
        printf("\nID Tiket: %s", Tbiasa.idTbiasa);
        printf("\nHari Keberangkatan: %s", Tbiasa.jdwl);
        printf("\nJam Keberangkatan: %s", Tbiasa.jam);
        printf("\n Destinasi: %s", Tbiasa.namatmpt);
        printf("\n Jumlah Harga: %.2f", Tbiasa.hrgbiasa);
        printf("\n Jumlah Tiket: %.0f", Tbiasa.jmlh);
    }
    fclose(Data1);
}
//Akhir CRUD Tiket Biasa


//CRUD Tiket Paket
void nambahTpaket() {
    Data1 = fopen("TiketPaket.dat", "ab");
    gotoxy(115, 22);
    printf("1. MASUKAN ID TIKET: ");
    gotoxy(135, 22);
    gets(Tpaket.idTbiasa);
    fflush(stdin);
    gotoxy(115, 24);
    printf("2. MASUKAN NAMA RUTE KEBERANGKATAN - AKHIR:");
    gotoxy(158, 24);
    gets(Tpaket.namatmpt);
    fflush(stdin);
    gotoxy(115, 26);
    printf("3. MASUKAN TANGGAL KEBERANGKATAN: ");
    gotoxy(148, 26);
    gets(Tpaket.jdwl);
    fflush(stdin);
    gotoxy(115, 28);
    printf("4. MASUKAN JAM KEBERANGKATAN: ");
    gotoxy(144, 28);
    gets(Tpaket.jam);
    fflush(stdin);
    gotoxy(115, 30);
    printf("5. Masukan Jumlah Harga: ");
    gotoxy(139, 30);
    scanf("%f", &Tpaket.hrgbiasa);
    fflush(stdin);
    gotoxy(115, 32);
    printf("6. Masukan Jumlah Tiket: ");
    gotoxy(139, 32);
    scanf("%f", &Tpaket.jmlh);
    fflush(stdin);
    getch();
    fwrite(&Tpaket, sizeof(Tpaket), 1, Data1);
    fclose(Data1);
    setClearArea(115, 22, 60,20);
}

void hpsTpaket() {
    Data1 = fopen("TiketPaket.dat", "rb");
    Temp = fopen("Temp.dat", "wb");
    gotoxy(115, 22);
    printf("Masukan ID Tiket Yang Dicari: ");
    gotoxy(144, 22);
    gets(&cariId);

    while(fread(&Tpaket, sizeof(Tpaket), 1, Data1)) {
        if(strcmp(Tpaket.idTbiasa, cariId) != 0) {
            fwrite(&Tpaket, sizeof(Tpaket), 1, Temp);
        }
    }

    if(strcmp(Tpaket.idTbiasa,cariId)==0) {
        MessageBox(NULL, "Menghapus Tiket Paket Sukses!", "Menghapus Tiket Paket", MB_OK | MB_ICONINFORMATION | MB_DEFAULT_DESKTOP_ONLY);
    }
    else {
        MessageBox(NULL, "Masukan ID Tiket Yang Sesuai!!", "Menghapus Tiket Paket", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
    }
    setClearArea(115,22,40,1);
    fclose(Data1);
    fclose(Temp);

    Data1 = fopen("TiketPaket.dat", "wb");
    Temp = fopen("Temp.dat", "rb");
    while(fread(&Tpaket,sizeof(Tpaket),1,Temp)) {
        fwrite(&Tpaket,sizeof(Tpaket),1,Data1);
    }
    fclose(Data1);
    fclose(Temp);
}

void updateTpaket() {
    setClearArea(20,22,50,26);
    gotoxy(22, 22);
    printf("1. Update Keberangkatan - Tujuan");
    gotoxy(22, 24);
    printf("2. Update Harga Tiket Biasa");
    gotoxy(22, 26);
    printf("3. Update Jumlah Tiket");
    gotoxy(22, 28);
    printf("4. Kembali");
    gotoxy(22, 30);
    printf("Masukan Pilihan: ");
    gotoxy(38, 30);
    scanf("%d",&pilihan3);
    fflush(stdin);
    setClearArea(47, 30,1,1);
    do {
        if (pilihan3 == 1) {
            Data1 = fopen("TiketPaket.dat", "rb");
            Temp = fopen("Temp.dat", "wb");
            gotoxy(115, 15);
                printf("Masukkan ID Tiket Yang Dicari: ");
            gotoxy(130, 10);
                printf("(ketik 0 keluar): ");
                gotoxy(145, 15);
                gets(&cariId);
                if(strcmp(cariId, "0")==0) {
                    break;
                }
                while(fread(&Tpaket,sizeof(Tpaket),1,Data1)) {
                    gotoxy(115, 20);
                    printf("ID Tiket: %s", Tpaket.idTbiasa);
                    gotoxy(115, 22);
                    printf("Hari Keberangkatan: %s", Tpaket.jdwl);
                    gotoxy(115, 24);
                    printf("Jam Keberangkatan: %s", Tpaket.jam);
                    gotoxy(115, 26);
                    printf("Destinasi: %s", Tpaket.namatmpt);
                    gotoxy(115, 28);
                    printf("Jumlah Harga: %.2f", Tpaket.hrgbiasa);
                    gotoxy(115, 30);
                    printf("Jumlah Tiket: %.0f", Tpaket.jmlh);
                    if(strcmp(Tpaket.idTbiasa,cariId)==0) {
                        gotoxy(115, 30);
                        printf("Masukkan Keberangkatan - Tujuan Baru : ");
                        scanf(" %[^\n]%*c",&Tpaket.namatmpt);
                        fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                        MessageBox(NULL, "Mengupdate Tiket Paket Sukses!", "Mengupdate Tiket Paket", MB_OK | MB_ICONINFORMATION | MB_DEFAULT_DESKTOP_ONLY);
                    }
                    else {
                        MessageBox(NULL, "Masukan ID Tiket Paket Yang Sesuai!!", "Mengupdate Tiket Paket", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    }
                    setClearArea(115,15,40,30);
                }


            fclose(Data1);
            fclose(Temp);

            Data1 = fopen("TiketPaket.dat", "wb");
            Temp = fopen("Temp.dat", "rb");
            while(fread(&Tpaket,sizeof(Tpaket),1,Temp)) {
                fwrite(&Tpaket,sizeof(Tpaket),1,Data1);
            }
            fclose(Data1);
            fclose(Temp);
        }
        else if (pilihan3 == 2) {
            Data1 = fopen("TiketPaket.dat", "rb");
            Temp = fopen("Temp.dat", "wb");
            printf("\nMasukkan ID Tiket Yang Dicari: ");
            gets(&cariId);
            if(strcmp(cariId, "0")==0) {
                break;
            }
            while(fread(&Tpaket,sizeof(Tpaket),1,Data1)) {
                if(strcmp(Tpaket.idTbiasa,cariId)==0) {
                    printf("Masukkan Harga Tiket Baru : ");
                    scanf(" %f",&Tpaket.hrgbiasa);
                    fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                    printf("\nHarga Baru Berhasil Diupdate!!!");
                }
                else {
                    fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                }
            }

            fclose(Data1);
            fclose(Temp);

            Data1 = fopen("TiketPaket.dat", "wb");
            Temp = fopen("Temp.dat", "rb");
            while(fread(&Tpaket,sizeof(Tpaket),1,Temp)) {
                fwrite(&Tpaket,sizeof(Tpaket),1,Data1);
            }
            fclose(Data1);
            fclose(Temp);
        }
        else if (pilihan3 == 3) {
            Data1 = fopen("TiketPaket.dat", "rb");
            Temp = fopen("Temp.dat", "wb");
            printf("\nMasukkan ID Tiket Yang Dicari: ");
            gets(&cariId);
            while(fread(&Tpaket,sizeof(Tpaket),1,Data1)) {
                if(strcmp(Tpaket.idTbiasa,cariId)==0) {
                    printf("Masukkan Jumlah Tiket Yang Ingin Diperbarui : ");
                    scanf(" %f",&Tpaket.jmlh);
                    fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                    printf("\nJumlah Tiket Berhasil Diupdate!!!");
                }
                else {
                    fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                }
            }

            fclose(Data1);
            fclose(Temp);

            Data1 = fopen("TiketPaket.dat", "wb");
            Temp = fopen("Temp.dat", "rb");
            while(fread(&Tpaket,sizeof(Tpaket),1,Temp)) {
                fwrite(&Tpaket,sizeof(Tpaket),1,Data1);
            }
            fclose(Data1);
            fclose(Temp);
        }
    }while (pilihan3 != 4);
    setClearArea(22,22,20,20);
}

void detailTpaket() {
    Data1 = fopen("TiketPaket.dat", "rb");
    while(fread(&Tpaket, sizeof(Tpaket), 1, Data1)) {
        gotoxy(115,20);
        printf("\nID Tiket: %s", Tpaket.idTbiasa);
        gotoxy(115,22);
        printf("\nHari Keberangkatan: %s", Tpaket.jdwl);
        gotoxy(115,24);
        printf("\nJam Keberangkatan: %s", Tpaket.jam);
        gotoxy(115,26);
        printf("\n Destinasi: %s", Tpaket.namatmpt);
        gotoxy(115,28);
        printf("\n Jumlah Harga: %.2f", Tpaket.hrgbiasa);
        gotoxy(115,30);
        printf("\n Jumlah Tiket: %.0f", Tpaket.jmlh);
    }
    fclose(Data1);
    setClearArea(115, 20,40,15);
}
//Akhir CRUD Tiket Paket


//CRUD ADMIN
void nambahAdmin() {
    Data1 = fopen("Admin.dat", "ab");
    printf("\nID Karyawan: ");
    gets(adm.id_karyawan);
    printf("\n1. Masukan Nama Admin Baru: ");
    gets(adm.nama);
    printf("\n2. Masukan Alamat: ");
    gets(adm.alamat);
    printf("\n3. Masukan Jenis Kelamin: ");
    gets(adm.jenisKlmn);
    printf("\n4. Masukan Tanggal Lahir: ");
    gets(adm.thnLhr);
    printf("\n5. Masukan Nomor Telepon: ");
    gets(adm.NoTelp);
    printf("\n6. Masukan Email: ");
    gets(adm.email);
    fwrite(&adm, sizeof(adm), 1, Data1);
    fclose(Data1);
}

void hpsAdmin() {
    Data1 = fopen("Admin.dat", "rb");
    Temp = fopen("Temp.dat", "wb");
    printf("\nMasukan ID Admin Yang Dicari: ");
    gets(&cariId);
    while(fread(&adm, sizeof(adm), 1, Data1)) {
        if(strcmp(adm.id_karyawan, cariId) != 0) {
            fwrite(&adm, sizeof(adm), 1, Temp);
        }
    }
    if(strcmp(adm.id_karyawan,cariId)==0) {
        printf("Admin Berhasil Dihapus!!!");
    }
    else {
        printf("Id Admin Tidak Valid!!! \nHarap Masukan Id Admin Yang Ada:D");
    }
    fclose(Data1);
    fclose(Temp);

    Data1 = fopen("Admin.dat", "wb");
    Temp = fopen("Temp.dat", "rb");
    while(fread(&adm,sizeof(adm),1,Temp)) {
        fwrite(&adm,sizeof(adm),1,Data1);
    }
    fclose(Data1);
    fclose(Temp);
}

// void updateAdmin() {
//     printf("\n1. Update Nama");
//     printf("\n2. Update Alamat");
//     printf("\n3. Update Jenis Kelamin");
//     printf("\n4. Update Tanggal Lahir");
//     printf("\n5. Update Nomor Telepon");
//     printf("\n6. Update Email");
//     printf("\nMasukan Pilihan: ");
//     scanf("%d",&pilihan4);
//     fflush(stdin);
//     if (pilihan4 == 1) {
//         Data1 = fopen("Admin.dat", "rb");
//         Temp = fopen("Temp.dat", "wb");
//         printf("\nMasukkan ID Admin Yang Dicari: ");
//         fflush(stdin);
//         // gets(&cariId);
//         scanf("%d", &idCari);
//         while(fread(&adm,sizeof(adm),1,Data1)) {
//             if(strcmp(adm.id_karyawan,cariId)==0) {
//                 printf("Masukkan Nama Baru: ");
//                 scanf(" %[^\n]%*c",&adm.nama);
//                 fwrite(&adm,sizeof(adm),1,Temp);
//                 printf("\nNama Baru Berhasil Diupdate!!!");
//             }
//             else {
//                 fwrite(&adm,sizeof(adm),1,Temp);
//             }
//         }
//
//         fclose(Data1);
//         fclose(Temp);
//
//         Data1 = fopen("Admin.dat", "wb");
//         Temp = fopen("Temp.dat", "rb");
//         while(fread(&adm,sizeof(adm),1,Temp)) {
//             fwrite(&adm,sizeof(adm),1,Data1);
//         }
//         fclose(Data1);
//         fclose(Temp);
//     }
//     else if (pilihan3 == 2) {
//         Data1 = fopen("TiketBiasa.dat", "rb");
//         Temp = fopen("Temp.dat", "wb");
//         printf("\nMasukkan ID Tiket Yang Dicari: ");
//         gets(&cariId);
//         while(fread(&Tbiasa,sizeof(Tbiasa),1,Data1)) {
//             if(strcmp(Tbiasa.idTbiasa,cariId)==0) {
//                 printf("Masukkan Harga Tiket Baru : ");
//                 scanf(" %f",&Tbiasa.hrgbiasa);
//                 fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
//                 printf("\nHarga Baru Berhasil Diupdate!!!");
//             }
//             else {
//                 fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
//             }
//         }
//
//         fclose(Data1);
//         fclose(Temp);
//
//         Data1 = fopen("TiketBiasa.dat", "wb");
//         Temp = fopen("Temp.dat", "rb");
//         while(fread(&Tbiasa,sizeof(Tbiasa),1,Temp)) {
//             fwrite(&Tbiasa,sizeof(Tbiasa),1,Data1);
//         }
//         fclose(Data1);
//         fclose(Temp);
//     }
//     else if (pilihan3 == 3) {
//         Data1 = fopen("TiketBiasa.dat", "rb");
//         Temp = fopen("Temp.dat", "wb");
//         printf("\nMasukkan ID Tiket Yang Dicari: ");
//         gets(&cariId);
//         while(fread(&Tbiasa,sizeof(Tbiasa),1,Data1)) {
//             if(strcmp(Tbiasa.idTbiasa,cariId)==0) {
//                 printf("Masukkan Jumlah Tiket Yang Ingin Diperbarui : ");
//                 scanf(" %f",&Tbiasa.jmlh);
//                 fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
//                 printf("\nJumlah Tiket Berhasil Diupdate!!!");
//             }
//             else {
//                 fwrite(&Tbiasa,sizeof(Tbiasa),1,Temp);
//             }
//         }
//
//         fclose(Data1);
//         fclose(Temp);
//
//         Data1 = fopen("TiketBiasa.dat", "wb");
//         Temp = fopen("Temp.dat", "rb");
//         while(fread(&Tbiasa,sizeof(Tbiasa),1,Temp)) {
//             fwrite(&Tbiasa,sizeof(Tbiasa),1,Data1);
//         }
//         fclose(Data1);
//         fclose(Temp);
//     }
// }

void detailAdmin() {
    Data1 = fopen("Admin.dat", "rb");
    while(fread(&adm, sizeof(adm), 1, Data1)) {
        printf("\nID Karyawan: %s", adm.id_karyawan);
        printf("\n1. Nama Admin : %s ", adm.nama);
        printf("\n2. Alamat: %s", adm.alamat);
        printf("\n3. Jenis Kelamin: %s", adm.jenisKlmn);
        printf("\n4. Tanggal Lahir: %s", adm.thnLhr);
        printf("\n5. Nomor Telepon: %s", adm.NoTelp);
        printf("\n6. Masukan Email: %s\n", adm.email);
    }
    fclose(Data1);
}
//AKHIR CRUD ADMIN



//CRUD KASIR
void nambahKasir() {
    Data1 = fopen("Kasir.dat", "ab");
    printf("\nID Karyawan: ");
    gets(ksr.id_karyawan);
    printf("\n1. Masukan Nama Kasir Baru: ");
    gets(ksr.nama);
    printf("\n2. Masukan Alamat: ");
    gets(ksr.alamat);
    printf("\n3. Masukan Jenis Kelamin: ");
    gets(ksr.jenisKlmn);
    printf("\n4. Masukan Tanggal Lahir: ");
    gets(ksr.thnLhr);
    printf("\n5. Masukan Nomor Telepon: ");
    gets(ksr.NoTelp);
    printf("\n6. Masukan Email: ");
    gets(ksr.email);
    fwrite(&ksr, sizeof(ksr), 1, Data1);
    fclose(Data1);
}

void hpsKasir() {
    Data1 = fopen("Kasir.dat", "rb");
    Temp = fopen("Temp.dat", "wb");
    printf("\nMasukan ID Kasir Yang Dicari: ");
    gets(&cariId);
    while(fread(&ksr, sizeof(ksr), 1, Data1)) {
        if(strcmp(ksr.id_karyawan, cariId) != 0) {
            fwrite(&ksr, sizeof(ksr), 1, Temp);
        }
    }
    if(strcmp(ksr.id_karyawan,cariId)==0) {
        printf("Kasir Berhasil Dihapus!!!");
    }
    else {
        printf("Id Kasir Tidak Valid!!! \nHarap Masukan Id Kasir Yang Ada:D");
    }
    fclose(Data1);
    fclose(Temp);

    Data1 = fopen("Admin.dat", "wb");
    Temp = fopen("Temp.dat", "rb");
    while(fread(&ksr,sizeof(ksr),1,Temp)) {
        fwrite(&ksr,sizeof(ksr),1,Data1);
    }
    fclose(Data1);
    fclose(Temp);
}

void detailKasir() {
    Data1 = fopen("Kasir.dat", "rb");
    while(fread(&ksr, sizeof(ksr), 1, Data1)) {
        printf("\nID Karyawan: %s", ksr.id_karyawan);
        printf("\n1. Nama Admin : %s ", ksr.nama);
        printf("\n2. Alamat: %s", ksr.alamat);
        printf("\n3. Jenis Kelamin: %s", ksr.jenisKlmn);
        printf("\n4. Tanggal Lahir: %s", ksr.thnLhr);
        printf("\n5. Nomor Telepon: %s", ksr.NoTelp);
        printf("\n6. Masukan Email: %s\n", ksr.email);
    }
    fclose(Data1);
}

//AKHIR CRUD KASIR



//CRUD SUPIR
void nambahSupir() {
    Data1 = fopen("Supir.dat", "ab");
    printf("\nID Karyawan: ");
    gets(spr.id_karyawan);
    printf("\n1. Masukan Nama Kasir Baru: ");
    gets(spr.nama);
    printf("\n2. Masukan Alamat: ");
    gets(spr.alamat);
    printf("\n3. Masukan Jenis Kelamin: ");
    gets(spr.jenisKlmn);
    printf("\n4. Masukan Tanggal Lahir: ");
    gets(spr.thnLhr);
    printf("\n5. Masukan Nomor Telepon: ");
    gets(spr.NoTelp);
    printf("\n6. Masukan Email: ");
    gets(spr.email);
    fwrite(&spr, sizeof(spr), 1, Data1);
    fclose(Data1);
}

void hpsSupir() {
    Data1 = fopen("Supir.dat", "rb");
    Temp = fopen("Temp.dat", "wb");
    printf("\nMasukan ID Kasir Yang Dicari: ");
    gets(&cariId);
    while(fread(&spr, sizeof(spr), 1, Data1)) {
        if(strcmp(spr.id_karyawan, cariId) != 0) {
            fwrite(&spr, sizeof(spr), 1, Temp);
        }
    }
    if(strcmp(spr.id_karyawan,cariId)==0) {
        printf("Supir Berhasil Dihapus!!!");
    }
    else {
        printf("Id Supir Tidak Valid!!! \nHarap Masukan Id Supir Yang Ada:D");
    }
    fclose(Data1);
    fclose(Temp);

    Data1 = fopen("Supir.dat", "wb");
    Temp = fopen("Temp.dat", "rb");
    while(fread(&spr,sizeof(spr),1,Temp)) {
        fwrite(&spr,sizeof(spr),1,Data1);
    }
    fclose(Data1);
    fclose(Temp);
}

void detailSupir() {
    Data1 = fopen("Supir.dat", "rb");
    while(fread(&spr, sizeof(spr), 1, Data1)) {
        printf("\nID Karyawan: %s", spr.id_karyawan);
        printf("\n1. Nama Admin : %s ", spr.nama);
        printf("\n2. Alamat: %s", spr.alamat);
        printf("\n3. Jenis Kelamin: %s", spr.jenisKlmn);
        printf("\n4. Tanggal Lahir: %s", spr.thnLhr);
        printf("\n5. Nomor Telepon: %s", spr.NoTelp);
        printf("\n6. Masukan Email: %s\n", spr.email);
    }
    fclose(Data1);
}

//AKHIR CRUD SUPIR


//FULL MENU KASIR
void kasir() {
    fflush(stdin);
    printf("Masukan Username: ");
    gets(ksr.username);
    printf("Masukan Password: ");
    inputPassword(ksr.password, sizeof(ksr.password));
    if((strcmp(ksr.username, "Kasir")== 0) && (strcmp(ksr.password, "Kasir") == 0)) {
        printf("Selamat Datang Sebagai Kasir");
        menuKasir();
    }
    else {
        printf("\n\nMasukan Username Dan Password Dengan Benar!!!");
    }
}


void menuKasir() {
    printf("\n\nSilahkan Memilih Menu");
    printf("\n1. Pembelian Tiket Pelanggan");
    printf("\n2. Pembatalan Tiket Pelanggan");
    printf("\n3. Pembelian Menu Makanan/Minuman");
    printf("\nMasukan Pilihan: ");
    scanf("%d",&pilihan);

    switch(pilihan) {
        case 1:
            printf("\n1. Tiket Biasa");
        printf("\n2. Tiket Paket Trip");
        printf("\nMasukan Pilihan: ");
        scanf("%d",&pilihan2);
        fflush(stdin);
        if (pilihan2 == 1) {
            Data1 = fopen("TiketBiasa.dat", "rb");
            Data1 = fopen("Kasir.dat", "rb");
            while(fread(&Tbiasa, sizeof(Tbiasa), 1, Data1)) {
                printf("\nID Tiket: %s", Tbiasa.idTbiasa);
                printf("\nHari Keberangkatan: %s", Tbiasa.jdwl);
                printf("\nJam Keberangkatan: %s", Tbiasa.jam);
                printf("\n Destinasi: %s", Tbiasa.namatmpt);
                printf("\n Jumlah Harga: %.2f", Tbiasa.hrgbiasa);
                printf("\n Jumlah Tiket: %.0f", Tbiasa.jmlh);
            }
            // fclose(Data1);
            fclose(Data1);
        }
        else if (pilihan2 == 2) {
            Data1 = fopen("TiketPaket.dat", "rb");
            while(fread(&Tpaket, sizeof(Tpaket), 1, Data1)) {
                printf("\nID Tiket: %s", Tpaket.idTbiasa);
                printf("\nHari Keberangkatan: %s", Tpaket.jdwl);
                printf("\nJam Keberangkatan: %s", Tpaket.jam);
                printf("\n Destinasi: %s", Tpaket.namatmpt);
                printf("\n Jumlah Harga: %.2f", Tpaket.hrgbiasa);
                printf("\n Jumlah Tiket: %.0f", Tpaket.jmlh);
            }
                fclose(Data1);

                Data1 = fopen("TiketPaket.dat", "rb");
                Temp = fopen("Temp.dat", "wb");
                printf("\nMasukkan ID Tiket Yang Ingin Dibeli: ");
                gets(&cariId);
                while(fread(&Tpaket,sizeof(Tpaket),1,Data1)) {
                    if(strcmp(Tpaket.idTbiasa,cariId)==0) {
                        printf("\nMasukan Jumlah Tiket Yang Ingin Dibeli: ");
                        scanf("%f",&Tpaket.jmlhBeli);
                        Tpaket.total = Tpaket.jmlhBeli * Tpaket.hrgbiasa;
                        Tpaket.jmlh = Tpaket.jmlh - Tpaket.jmlhBeli;
                        printf("\nTotal Tiket Yang Dibeli: %.0f", Tpaket.jmlhBeli);
                        printf("\nDengan Harga: %.2f", Tpaket.total);
                        printf("\nSisa Tiket: %.0f\n\n", Tpaket.jmlh);
                        fwrite(&Tpaket,sizeof(Tpaket),1,Temp);

                    }
                    else {
                    fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                    }
                }
                    fclose(Temp);
                    fclose(Data1);

                    Data1 = fopen("TiketPaket.dat", "wb");
                    Temp = fopen("Temp.dat", "rb");
                    while(fread(&Tpaket,sizeof(Tpaket),1,Temp)) {
                     fwrite(&Tpaket,sizeof(Tpaket),1,Data1);
                    }
                    fclose(Data1);
                    fclose(Temp);
            }
            break;
            case 2:
                printf("\n1. Masukan Jumlah Harga");
        }

}

// Password Bintang
void inputPassword(char *password, int maxLength) {
    char ch;
    int i = 0;

    while (1) {
        ch = getch(); // Read a single character without echo
        if (ch == '\r') { // Enter key
            password[i] = '\0';
            break;
        }
        else if (ch == '\b') { // Backspace key
            if (i > 0) {
                i--;
                printf("\b \b"); // Move back, erase, and move back again
            }
        }
        else if (i < maxLength - 1) { // Ensure we don't exceed the maximum length
            password[i++] = ch;
            printf("*"); // Print asterisk instead of the character
        }
    }
    printf("\n");
}

//-----Input username beserta validasinya-----
void loginUsername(char username[]){
    fflush(stdin);
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            break;
        }
        else if (i < 8 && ch != SPACE && ch != TAB && (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')){
            username[i] = ch;
            printf("%c", username[i]);
            i++;
        }
    }
    username[i] = '\0';
}

//-----Input password beserta validasinya-----
void loginPassword(char password[]){
    fflush(stdin);
    int i = 0;
    char ch;
    while(1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if(ch == BACKSPACE){
            if(i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if(ch == ENTER){
            break;
        }
        else if(i < 8 && ch != SPACE && ch != TAB && (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')){
            password[i] = ch;
            printf("*");
            i++;
        }
    }
    password[i] = '\0';
    // printf("%s", password);
}

void arrowatasbawah() {
    char key;
    int pilih = 1; // Initially select the first menu option

    do {
        system("cls"); // Clear screen for each iteration

        // Display menu options
        // printf("\nSelect Menu:\n");
        // printf("%s1. Option 1\n", (pilih == 1 ? " -> " : "    "));
        // printf("%s2. Option 2\n", (pilih == 2 ? " -> " : "    "));
        // printf("%s3. Option 3\n", (pilih == 3 ? " -> " : "    "));

        // Capture user input
        key = getch();

        // Handle key press (assuming W/S for navigation)
        if (key == 72) { // Move up
            if(pilih > 1) {
                pilih--;
            }
        } else if (key == 80) { // Move down
            if (pilih < 3) {
                pilih++;
            }
        }

    } while (key != 13); // Continue until Enter key (ASCII 13) is pressed
}






#ifndef STAFF_H
#define STAFF_H

#endif //STAFF_H
