#include "Declare.h"

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


void pemilik() {
    printf("Selamat Datang Sebagai Owner");

}


//FULL MENU ADMIN
void admin() {
    printf("Masukan Username: ");
    gets(adm.username);
    printf("Masukan Password: ");
    inputPassword(adm.password, sizeof(adm.password));

        if((strcmp(adm.username, "Admin")== 0) && (strcmp(adm.password, "Admin") == 0)) {
            printf("Selamat Datang Sebagai Admin :D");
            do {
                printf("\n\n1. CRUD Karyawan");
                printf("\n2. CRUD Tiket Biasa");
                printf("\n3. CRUD Paket Trip");
                printf("\n4. CRUD Menu Makanan");
                printf("\n5. Exit");
                printf("\nMasukan Pilihan:");
                scanf("%d",&pilihan);
                fflush(stdin);

                switch(pilihan) {
                    case 1:
                        printf("---{Menu CRUD Karyawan}---");
                        printf("\n1. Admin");
                        printf("\n2. Kasir");
                        printf("\n3. Supir");
                        printf("\nMasukan Pilihan : ");
                        scanf("%d",&pilihan2);
                        fflush(stdin);
                        if(pilihan2 == 1) {
                            printf("\n1. Menambah Admin");
                            printf("\n2. Menghapus Admin");
                            printf("\n3. Mengupdate Admin");
                            printf("\n4. Melihat Data Admin");
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
                        }
                        else if(pilihan2 == 2) {
                            printf("\n1. Menambah Kasir");
                            printf("\n2. Menghapus Kasir");
                            printf("\n3. Mengupdate Kasir");
                            printf("\n4. Melihat Data Kasir");
                            printf("\nSilahkan Masukan Pilihan: ");
                            scanf("%d",&pilihan3);
                            fflush(stdin);
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
                        }
                    break;
                    case 2:
                        printf("\n1. Menambah Tiket Biasa ");
                    printf("\n2. Menghapus Tiket Biasa ");
                    printf("\n3. Mengupdate Tiket Biasa ");
                    printf("\n4. Melihat Tiket Biasa ");
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
                        printf("\n1. Menambah Tiket Paket ");
                    printf("\n2. Menghapus Tiket Paket ");
                    printf("\n3. Mengupdate Tiket Paket ");
                    printf("\n4. Melihat Tiket Paket ");
                    printf("\nSilahkan Masukan Pilihan: ");
                    scanf("%d",&pilihan2);
                    fflush(stdin);
                    if(pilihan2 == 1) {
                        nambahTpaket();
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
                    break;
                }
            }while (pilihan!=5);
        }
        else {
            printf("Masukan Username Dan Password Dengan Benar!!!\n");
        }
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
    printf("\n1. Masukan ID Tiket: ");
    gets(Tpaket.idTbiasa);
    fflush(stdin);
    printf("\n2. Masukan Nama Destinasi Awal Dan Akhir: ");
    gets(Tpaket.namatmpt);
    fflush(stdin);
    printf("\n3. Masukan Hari Keberangkatan: ");
    gets(Tpaket.jdwl);
    fflush(stdin);
    printf("\n4. Masukan Jam Keberangkatan: ");
    gets(Tpaket.jam);
    fflush(stdin);
    printf("\n5. Masukan Jumlah Harga: ");
    scanf("%f", &Tpaket.hrgbiasa);
    fflush(stdin);
    printf("\n6. Masukan Jumlah Tiket: ");
    scanf("%f", &Tpaket.jmlh);
    fflush(stdin);
    fwrite(&Tpaket, sizeof(Tpaket), 1, Data1);
    fclose(Data1);
}

void hpsTpaket() {
    Data1 = fopen("TiketPaket.dat", "rb");
    Temp = fopen("Temp.dat", "wb");
    printf("\nMasukan ID Tiket Yang Dicari: ");
    gets(&cariId);
    while(fread(&Tpaket, sizeof(Tpaket), 1, Data1)) {
        if(strcmp(Tpaket.idTbiasa, cariId) != 0) {
            fwrite(&Tpaket, sizeof(Tpaket), 1, Temp);
        }
    }
    if(strcmp(Tpaket.idTbiasa,cariId)==0) {
        printf("Tiket Biasa Berhasil Dihapus!!!");
    }
    else {
        printf("Id Tiket Tidak Valid!!! \nHarap Masukan Id Tiket Yang Ada:D");
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

void updateTpaket() {
    printf("\n1. Update Keberangkatan - Tujuan");
    printf("\n2. Update Harga Tiket Biasa");
    printf("\n3. Update Jumlah Tiket");
    printf("\nMasukan Pilihan: ");
    scanf("%d",&pilihan3);
    fflush(stdin);
    if (pilihan3 == 1) {
        Data1 = fopen("TiketPaket.dat", "rb");
        Temp = fopen("Temp.dat", "wb");
        printf("\nMasukkan ID Tiket Yang Dicari: ");
        gets(&cariId);
        while(fread(&Tpaket,sizeof(Tpaket),1,Data1)) {
            if(strcmp(Tpaket.idTbiasa,cariId)==0) {
                printf("Masukkan Keberangkatan - Tujuan Baru : ");
                scanf(" %[^\n]%*c",&Tpaket.namatmpt);
                fwrite(&Tpaket,sizeof(Tpaket),1,Temp);
                printf("\nTempat Tujuan Baru Berhasil Diupdate!!!");
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
    else if (pilihan3 == 2) {
        Data1 = fopen("TiketPaket.dat", "rb");
        Temp = fopen("Temp.dat", "wb");
        printf("\nMasukkan ID Tiket Yang Dicari: ");
        gets(&cariId);
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
}

void detailTpaket() {
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







#ifndef STAFF_H
#define STAFF_H

#endif //STAFF_H
