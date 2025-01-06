#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Staff.h"
// #include "Declare.h"

main(){
    int pilihan;
    // admin();
    // menuKasir();
    do {
        printf("---<Ingin Login Sebagai?>---");
        printf("\n1. Admin");
        printf("\n2. Kasir");
        printf("\n3. Supir");
        printf("\n4. Owner");
        printf("\nMasukan Pilihan: ");
        scanf("%d",&pilihan);

        switch(pilihan) {
            case 1:
                fflush(stdin);
                admin();
            break;
            case 2:
                kasir();
                // menuKasir();
            break;
        }
    }while (pilihan != 4);
    getch();
}
