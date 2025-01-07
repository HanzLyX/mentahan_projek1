#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Declare.h"
#include "Design.h"
#include "Staff.h"

main(){
    int pilihan;
    fullscreen();
    _sleep(200);
    // DashboardAdmin();
    // admin();
    // menuKasir();
            // HalDashboard();

    do {
        // printf("---<Ingin Login Sebagai?>---");
        HalLogin();
        gotoxy(38,17);
        printf("1. A D M I N");
        gotoxy(38,19);
        printf("2. K A S I R");
        gotoxy(38,21);
        printf("3. S U P I R");
        gotoxy(38,23);
        printf("4. O W N E R");
        gotoxy(38,25);
        printf("5. E X I T");
        gotoxy(44,27);
        printf("{ }");
        gotoxy(45,27);
        scanf("%d",&pilihan);
        fflush(stdin);

        switch(pilihan) {
            case 1:
                admin();
            break;
            case 2:
                kasir();
            break;
        }
    }while (pilihan != 5);
    getch();
}
