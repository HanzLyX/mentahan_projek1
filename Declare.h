void gotoxy(int x, int y) {
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}


void setClearArea(int x,int y,int lebar, int tinggi) {
    int  o = 0;
    for (int i = y; i <tinggi+y; ++i) {
        gotoxy(x,y+o);
        for (int j = x; j < lebar+x; ++j) {
            printf(" ");
        }
        printf("\n");
        o++;
    }
}

void PrintFile(char file[], int x, int y){
    FILE *Text;
    char Data[200];
    if((Text=fopen(file, "r")) == NULL){
        system("cls");
    }
    while(fgets(Data, 200, Text))
    {
        gotoxy(x, y);
        printf("%s", Data);
        y++;
    }
    fclose(Text);
}

void gotoPrintChar(int x,int y,char decimal) {
    gotoxy(x,y);
    printf("%c",decimal);
}


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

void kursor(){
char key;
    int pilih = 1; // Initially select the first menu option

    do {
        system("cls"); // Clear screen for each iteration

        // Display menu options
        printf("\nSelect Menu:\n");
        printf("%s1. Option 1\n", (pilih == 1 ? " -> " : "    "));
        printf("%s2. Option 2\n", (pilih == 2 ? " -> " : "    "));
        printf("%s3. Option 3\n", (pilih == 3 ? " -> " : "    "));

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

    // Print the selected option
    system("cls");
    printf("You selected Option %d!\n", pilih);

    getch();

    // while(1) {
    //     char key = getch();
    //     printf("%d\n", key);
    // }
}



FILE *Data1, *Data2, *Temp;

int i = 1, n = 1, j, pilihan, pilihan2, pilihan3, pilihan4, idCari;
char cariId[10];

#ifndef DECLARE_H
#define DECLARE_H

#endif //DECLARE_H
