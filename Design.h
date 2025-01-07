void gotoxy(int x,int y);
void PrintFile(char file[], int x, int y);
void fullscreen();
int i, x, y;

void fullscreen(){
    keybd_event(VK_MENU,0x39,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x39,KEYEVENTF_KEYUP,0);

    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}

void HalDashboard(){
    system("color 71");
    _sleep(300);
PrintFile("..//Tampilan//Dashboard.txt", 72, 16);
PrintFile("..//Tampilan//bis.txt", 72, 22);
gotoxy(0, 0);
printf("%c", 177);      //kiri atas
gotoxy(208, 0);
printf("%c", 177);      //kanan atas
gotoxy(208, 55);
printf("%c", 177);      //kanan bawah
gotoxy(0, 55);
printf("%c", 177);      //kiri bawah

for (x = 1;x <= 207; x++) {           //atas tengah
    gotoxy(x,0);
    printf("%c", 177);
}
    for (x = 1;x <= 207; x++) {           //atas tengah
        gotoxy(x,1);
        printf("%c", 177);
    }
for (y = 1;y <= 54; y++) {            //kiri tengah
    gotoxy(0,y);
    printf("%c", 177);
}
for (y = 1;y <= 54; y++) {            //kiri tengah
    gotoxy(1,y);
    printf("%c", 177);
}
for (y = 1;y <= 54; y++) {            //kanan tengah
    gotoxy(208,y);
    printf("%c", 177);
}
for (y = 1;y <= 54; y++) {            //kanan tengah
    gotoxy(207,y);
    printf("%c", 177);
}
for (x = 1;x <= 207; x++) {           //bawah tengah
    gotoxy(x,55);
    printf("%c", 177);
}
    for (x = 1;x <= 207; x++) {           //bawah tengah
        gotoxy(x,54);
        printf("%c", 177);
    }

    gotoxy(95, 35);
    printf("L O A D I N G . . . ");         //Loading

    for (x = 83; x <= 120; x++) {           //atas
        gotoxy(x, 37);
        printf("%c", 196);
    }
    for (x = 83; x <= 120; x++) {           //bawah
        gotoxy(x, 39);
        printf("%c", 196);
    }
    for (x = 83; x <= 120; x++) {           //isi
        _sleep(50);
        gotoxy(x, 38);
        printf("%c", 219);
    }
    gotoxy(89, 41);
    system("pause");
    system("cls");

}

void HalLogin() {
    system("color 71");

    // _sleep(200);

    PrintFile("..//Tampilan//validasilogin.txt", 3, 10);
    PrintFile("..//Tampilan//login kanan.txt", 113, 5);
    PrintFile("..//Tampilan//login kiri.txt", 6, 5);
    PrintFile("..//Tampilan//mobil.txt", 140, 45);
    gotoxy(32, 25);


    gotoxy(0, 0);
    printf("%c", 177);      //kiri atas
    gotoxy(208, 0);
    printf("%c", 177);      //kanan atas
    gotoxy(208, 55);
    printf("%c", 177);      //kanan bawah
    gotoxy(0, 55);
    printf("%c", 177);      //kiri bawah

    for (x = 1;x <= 207; x++) {           //atas tengah
        gotoxy(x,0);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(0,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(1,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kanan tengah
        gotoxy(208,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kanan tengah
        gotoxy(207,y);
        printf("%c", 177);
    }
    for (x = 1;x <= 207; x++) {           //bawah tengah
        gotoxy(x,55);
        printf("%c", 177);
    }

}

void DashboardAdmin() {
    system("color 71");
    PrintFile("..//Tampilan//Admin.txt", 22, 1);
    gotoxy(0, 0);
    printf("%c", 177);      //kiri atas
    gotoxy(208, 0);
    printf("%c", 177);      //kanan atas
    gotoxy(208, 55);
    printf("%c", 177);      //kanan bawah
    gotoxy(0, 55);
    printf("%c", 177);      //kiri bawah

    for (x = 1;x <= 207; x++) {           //atas tengah
        gotoxy(x,0);
        printf("%c", 177);
    }
    for (x = 4;x <= 207; x++) {           //atas tengah bawah admin
        gotoxy(x,7);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(0,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(1,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(2,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(3,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kanan tengah
        gotoxy(208,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kanan tengah
        gotoxy(207,y);
        printf("%c", 177);
    }
    for (x = 1;x <= 207; x++) {           //bawah tengah
        gotoxy(x,55);
        printf("%c", 177);
    }

    for (y = 1;y <= 54; y++) {            //pembatas
        gotoxy(75,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(76,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(77,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(78,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(79,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(80,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(81,y);
        printf("%c", 177);
    }
}

#ifndef DESIGN_H
#define DESIGN_H

#endif //DESIGN_H
