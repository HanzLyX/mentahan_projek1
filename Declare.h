typedef struct {
    char nama[25];
    char id_karyawan[20];
    char alamat[40];
    char thnLhr[40];
    char NoTelp[25];
    char jenisKlmn[15];
    char email[30];
    char username[30];
    char password[30];
} Admin ;
Admin adm;

typedef struct {
    char namatmpt[50];
    float hrgbiasa;
    float jmlh;
    char idTbiasa[10];
    char jdwl[20];
    char jam[20];
} TiketB;
TiketB Tbiasa;

typedef struct {
    char namatmpt[50];
    float hrgbiasa;
    float jmlh;
    float jmlhBeli;
    float total;
    char idTbiasa[10];
    char jdwl[20];
    char jam[20];
} TiketP;
TiketP Tpaket;

typedef struct {
    char username[25];
    char password[25];
} owner;
owner own;

typedef struct {
    char nama[25];
    char id_karyawan[20];
    char alamat[40];
    char thnLhr[40];
    char NoTelp[25];
    char jenisKlmn[15];
    char email[30];
    char username[30];
    char password[30];
    float jmlhBeli;
    float sisa;
    float total;
} Kasir ;
Kasir ksr;

typedef struct {
    char nama[25];
    char id_karyawan[20];
    char alamat[40];
    char thnLhr[40];
    char NoTelp[25];
    char jenisKlmn[15];
    char email[30];
    char username[30];
    char password[30];
} Supir ;
Supir spr;

typedef struct {
    char namaBrg[50];
    char jmlhBrg[50];
    float hargaBrg;
} MknMnm;
MknMnm Menu;


FILE *Data1, *Data2, *Temp;

int i = 1, n = 1, j, pilihan, pilihan2, pilihan3, pilihan4, idCari;
char cariId[10];

#ifndef DECLARE_H
#define DECLARE_H

#endif //DECLARE_H
