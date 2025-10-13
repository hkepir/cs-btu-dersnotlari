#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char ad[21];
    int yas;
    int maas;
} Kayit;

void main(){
    Kayit veri[2]={ {"Ali",50,10000},
                    {"Sevgi",30,8000}};

    /*
    strcpy(veri[0].ad,"Ali");
    veri[0].yas=50;
    veri[0].maas=10000;
    strcpy(veri[1].ad,"Sevgi");
    veri[1].yas=30;
    veri[1].maas=8000;
    */


    FILE *fptr;

    fptr=fopen("personel.dat","wb");
    fwrite(&veri[0],sizeof(veri[0]),2,fptr);
    fclose(fptr);


    fptr=fopen("personel.dat","rb");

    /*
    Kayit okunanlar[2];
    fread(okunanlar,sizeof(Kayit),2,fptr);

    for(int i=0;i<2;i++)
        printf("%s-%d-%d\n",okunanlar[i].ad,
                            okunanlar[i].yas,
                            okunanlar[i].maas);
    */

    Kayit tek_kayit;
    fseek(fptr,1*sizeof(Kayit),SEEK_SET);
    fread(&tek_kayit,sizeof(Kayit),1,fptr);//ikinci kaydin baslangicina goturur
    printf("%s-%d-%d\n",tek_kayit.ad,
                            tek_kayit.yas,
                            tek_kayit.maas);

    /*
    int okunan_bayt_sayisi;
    int sayac=0;
    double toplam=0.0;
    while(1){
        okunan_bayt_sayisi=fread(&tek_kayit,
                                 sizeof(Kayit),
                                 1,
                                 fptr);
        if(okunan_bayt_sayisi==0)
            break;
        printf("%s-%d-%d\n",tek_kayit.ad,
                            tek_kayit.yas,
                            tek_kayit.maas);
        toplam+=tek_kayit.yas;
        sayac++;
    }

    printf("Ortalama yas: %lf",toplam/sayac);

    */
    fclose(fptr);
}
//--------------------------------------------------------------------------------
//fread-fwrite
//--------------------------------------------------------------------------------

#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main() {
    Employee emps[3] = {
        {1, "Ahmet", 4500.50},
        {2, "Mehmet", 5500.75},
        {3, "Ayþe", 6000.00}
    };

    FILE *file = fopen("employees.dat", "wb"); // Dosya ikili yazma modu
    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // Tüm yapýlarý dosyaya yaz
    fwrite(emps, sizeof(Employee), 3, file);
    fclose(file);

    file = fopen("employees.dat", "rb"); // Dosya ikili okuma modu
    if (file == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }

    // Tüm yapýlarý dosyadan oku
    fread(readEmps, sizeof(Employee), 3, file);
    fclose(file);

    // Okunan veriyi ekrana yazdýr

    Employee readEmps[3];
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Ad: %s, Maaþ: %.2f\n", readEmps[i].id, readEmps[i].name, readEmps[i].salary);
    }

    return 0;
}
