#include <stdio.h>

void layout () {
    printf("=================Kalkulator==================\n");
    printf("| ----- Verifikasi Rangkaian Elektrik ----- |\n");
    printf("| 1. Kalkulator Hukum Ohm (V = I * R)       |\n");
    printf("| 2. Kalkulator Daya Listrik (P = V * I)    |\n");
    printf("| 3. Kalkulator Resistor Seri               |\n");
    printf("| 4. Kalkulator Resistor Paralel            |\n");
    printf("| -------- Utilitas Sistem Digital -------- |\n");
    printf("| 5. Desimal -> Biner / Oktal / Heksadesimal|\n");
    printf("| 6. Biner -> Desimal                       |\n");
    printf("| 7. Oktal -> Desimal                       |\n");
    printf("| 8. Heksadesimal -> Desimal                |\n");
    printf("|                                           |\n");
    printf("| 9. Keluar                                 |\n");
    printf("=============================================\n");
    
}

void kalkulatorhukumohm (){
    float resistorohm;
    float arusohm;
    float tegangan;
    char pilihan;
    
    printf("---Kalkulator Hukum Ohm----\n");
    printf("Anda ingin menghitung apa (V/I/R)? ");
    scanf(" %c", &pilihan);
    if (pilihan == 'V'|| pilihan == 'v') {
        printf("Masukkan jumlah arus: ");
        scanf("%f", &arusohm);
        printf("Masukkan nilai resistor: ");
        scanf("%f", &resistorohm);
        tegangan = arusohm * resistorohm;
        printf("Tegangan = %.2fV\n", tegangan);
        
    }
    if (pilihan == 'I'|| pilihan == 'i') {
        printf("Masukkan jumlah tegangan: ");
        scanf("%f", &tegangan);
        printf("Masukkan nilai resistor: ");
        scanf("%f", &resistorohm);
        arusohm = tegangan / resistorohm;
        printf("Arus = %.2fV\n", arusohm);
    }
    if (pilihan == 'R'|| pilihan == 'r') {
        printf("Masukkan jumlah tegangan: ");
        scanf("%f", &tegangan);
        printf("Masukkan nilai arus: ");
        scanf("%f", &arusohm);
        resistorohm = tegangan / arusohm;
        printf("Resistor = %.2fV\n", resistorohm);
    }
}

void kalkulatordayalistrik () {
    float tegangan;
    float arusohm;
    double daya;
    
    printf("---Kalkulator Daya Listrik---\n");
    printf("Masukkan tegangan: ");
    scanf("%f", &tegangan);
    printf("Masukkan arus: ");
    scanf("%f", &arusohm);
    daya = tegangan * arusohm;
    printf("Daya = %.2fW\n", daya);
}

void kalkulatorresistorseri (){
    int jumlahresistor;
    float totalseri = 0;
    float resistorohm;
    printf("---Kalkulator Resistor Seri---\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &jumlahresistor);
    for (int i = 0; i < jumlahresistor; i++){
        printf("Masukkan resistor %d: ", i + 1);
        scanf("%f", &resistorohm);
        totalseri = totalseri + resistorohm;
                    
    }
    printf("Total Hambatan Seri adalah %.2f Ohm\n", totalseri);
}

void kalkulatorresistorparalel (){
    int jumlahresistor;
    float totalparalel = 0;
    float totalkebalikan = 0;
    double resistorohm;
    printf("---Kalkulator Resistor Paralel---\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &jumlahresistor);
    for (int i = 0; i < jumlahresistor; i++){
        printf("Masukkan resistor %d: ", i + 1);
        scanf("%lf", &resistorohm);
        totalkebalikan = totalkebalikan + 1/resistorohm;
        totalparalel = 1/totalkebalikan;
    }
    printf("Total Hambatan Paralel adalah %.2f Ohm\n", totalparalel);
}

void konversikebiner (int desimal) {
    int i = 0, j;
    int biner[100];
    while (desimal > 0) {
        biner[i] = desimal % 2;
        desimal = desimal / 2;
        i++;
    }
    printf("- Biner : ");
    for (j = i - 1; j >= 0; j--){
        printf("%d", biner[j]);
        
    }
    printf("\n");
}

void konversikeoktal(int desimal) {
    int k = 0, l;
    int oktal[100];
    while (desimal > 0) {
        oktal[k] = desimal % 8;
        desimal = desimal / 8;
        k++;
    }
    printf("- Oktal : ");
    for (l = k - 1; l >= 0; l--){
        printf("%d", oktal[l]);
        
    }
    printf("\n");
}

void konversikeheksa (int desimal) {
    int m = 0, n;
    char heksa[100];
    while (desimal > 0) {
        int sisa = desimal % 16;
        if (sisa < 10){
            heksa[m] = sisa + '0';
        } else {
            heksa[m] = sisa - 10 + 'A';
        }
        m++;
        desimal = desimal / 16;
    }
    printf ("- Heksa : ");
    for (n = m - 1; n >= 0; n--) {
        printf("%c", heksa[n]);
    }
    printf("\n");
}

void konversibinerkedesimal () {
    int biner;
    int desimal = 0;
    int i = 1;
    int digit;
    
    printf("---Konversi Biner ke desimal---\n");
    printf("Masukkan bilangan biner : ");
    scanf("%d", &biner);
    printf("Hasil konversi dari biner ke desimal adalah");
    while (biner > 0) {
        digit = biner % 10;
        desimal = desimal + (digit*i);
        i = i*2;
        biner = biner / 10;
    }
    printf(" %d\n", desimal);
}

void konversioktalkedesimal() {
    int oktal;
    printf("---Konversi Oktal ke desimal---\n");
    printf("Masukkan bilangan oktal : ");
    scanf("%o", &oktal);
    printf("Hasil konversi dari oktal ke desimal adalah %d\n", oktal);
}

void konversiheksakedesimal () {
    char heksa[100];
    int desimal;
    printf("---Konversi Heksadesimal ke desimal---\n");
    printf("Masukkan heksadesimal : ");
    scanf(" %s", heksa);
    sscanf(heksa, "%x", &desimal);
    printf("Hasil konversi heksadesimal ke desimal adalah %d\n", desimal);
}

int main() {
    
    while (1){
        layout();
        int option;
        
        printf("Masukkan Pilihan Anda (Angka Saja): ");
        scanf("%d", &option);
        
        int desimal;
        
        if(option == 1){
            kalkulatorhukumohm();
        } else if (option == 2) {
            kalkulatordayalistrik();
        } else if (option == 3) {
            kalkulatorresistorseri();
        } else if (option == 4) {
            kalkulatorresistorparalel();
        } else if (option == 5) {
            printf("---Konversi dari Desimal---\n");
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);
            if (desimal == 0) {
                printf("- Biner : 0\n- Oktal : 0\n- Heksa : 0\n");
            } else {
                konversikebiner(desimal);
                konversikeoktal(desimal);
                konversikeheksa(desimal);
            }
        } else if (option == 6){
            konversibinerkedesimal();
        } else if (option == 7) {
            konversioktalkedesimal();
        } else if (option == 8) {
            konversiheksakedesimal();
        } else if (option == 9) {
            printf("Terima kasih telah menggunakan kalkulator buatan kelompok 10 ^_^\n");
            break;
        }
        printf("\nTekan ENTER untuk melanjutkan");
        getchar(); getchar();
        printf("\n");
    }
    return 0;
}
