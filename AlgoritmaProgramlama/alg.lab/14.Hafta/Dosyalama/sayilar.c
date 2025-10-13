#include<stdio.h>

//Dosyadaki sayilarin Toplami

int main(){

    FILE *file = fopen("numbers.txt","r");
    int number, sum =0;

    if(file == NULL){
        printf("Dosya Acilmadi!\n");
        return 1;
    }

    //Dosyayi oku ve topla
    while(fscanf(file,"%d",&number) != EOF){//number degiskeninin adresine
        sum += number;
    }
    //YAZMA

    //fputc(karakter,dosya) tek bir karakteri yerleþtirir
    //fputs(metin,dosya) string yazdirir
    //fwrite(deger,sizeof(deger),miktar,dosya)

    //OKUMA

    //fgetc(dosya)
    //fgets(metin,sizeof(metin),dosya)
    //fread(deger,sizeof(deger),miktar,dosya)

    fclose(file);
    printf("Dosyadaki sayilarin toplami: %d\n",sum);
}
