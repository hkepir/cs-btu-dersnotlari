void main(){
    //pointer aritmetiði örneði

    int dizi[]={1,2,3};
    char *p=&dizi[0];
    for(int i=0;i<sizeof(dizi);i++)
        printf("%p: %d\n",p+i,*(p+i));

    int *dizi_ptr=dizi;
	//dizi_ptr'yi bozmadan dizide gezmek
    for(int j=0;j<3;j++)
        printf("dizi[%d]=%d\n",j,*(dizi_ptr+j));

	//dizi_ptr'yi bozarak dizide gezmek //bu dongu sonunda isaretci dizinin sonunda olur
	for(int j=0;j<3;j++,dizi_ptr++)
        printf("dizi[%d]=%d\n",j,*dizi_ptr);

	dizi_ptr-=3; //dizi_ptr=dizi; Isaretci dizinin basina cekilir !!!ONEMLI!!!

    printf("dizi[2]'yi degistirelim: ");
    scanf("%d",dizi+2);
    //scanf("%d",&dizi[2]);

    printf("dizi[2]'nin yeni hali: %d\n",dizi[2]);

    //p+i, dizi_ptr+j, dizi+2 ifadelerindeki
    //i, j ve 2 deðerlerine offset denir.

    printf("dizinin baslangic adresi: %p\n",&dizi[0]);

    printf("dizi_ptr'nin icerigi: %p\n",dizi_ptr);

    printf("dizi_ptr pointerinin adresi: %p",&dizi_ptr);
}


//---------------------------

void main(){
    //iþaretçi zinciri
    int dizi[]={10,20,30,40};
    int *p=dizi;
    int **p2=&p;
    int ***p3=&p2;


    printf("%d",*(**p3+2));
	p3=NULL; //p3 artýk p2'yi göstermesin
}

//-------------

int palindrommu(char *X){
    char *Y=X+strlen(X)-1;
    int s=1; //s=1 ise X metni palindromdur

    while(X<Y){
        if(*X!=*Y){
            s=0;
            break;
        }
        X++;
        Y--;
    }
    return s;
}
int uzunluk(char *X){
    int s=0;

    while(*X!='\0'){
        s++;
        X++;
    }

    return s;
}

void main(){
    char kelime[]="EY EDIP ADANADA PIDE YE";
    int sonuc=palindrommu(kelime);
    printf("Sonuc: %d\n",sonuc);

    sonuc=uzunluk(kelime);
    printf("Uzunluk: %d",sonuc);
}

//------------------

void takas(int *a,int *b){ //CALL-BY-REFERENCE
    int temp=*a;
    *a=*b;
    *b=temp;
}

int dizitopla(int *D,int N){
    int t=0;

    for(int i=0;i<N;i++)
        t+=*(D+i);
    return t;
}

void main(){
    int x=5,y=3;
    takas(&x,&y);
    printf("X: %d, Y:%d\n",x,y);

    int dizi[]={11,12,13,14};
    int toplam=dizitopla(dizi,sizeof(dizi)/sizeof(int));
    printf("Dizinin toplami: %d",toplam);
}

//---------------

int *BuyukBul(int a, int b){
    return (a>b)?&a:&b;
}

int *Enbuyugunadresi(int *D,int N){
    int enbuyuk=*D;  //en büyük ilk eleman ilan ettim
    int *eba=D; //9'un fiziksel adresi en büyüðün adresi (en buyugun adresi)

    for(int i=1;i<N;i++){
        if(enbuyuk<*(D+i)){
            enbuyuk=*(D+i);
            eba=D+i;
        }
    }

    return eba;
}

void main(){
    int *p=BuyukBul(3,6);
    printf("Buyuk olan deger: %d\n",*p);

    int dizi[]={9,4,8,10,-5,7};
    int *eba=Enbuyugunadresi(dizi,6);
    printf("Donen adres: %p\nBu adresteki deger: %d",eba,*eba);
}


//-------------------



void bubble_sort(int *B,int N){
    int temp;
    for(int j=1;j<=N-1;j++)
        for(int i=0;i<=N-1-j;i++)
            if(*(B+i)>*(B+i+1)){
                temp=*(B+i);
                *(B+i)=*(B+i+1);
                *(B+i+1)=temp;
            }
}

void main(){
    int dizi[]={8,-4,16,1,7,7};
    bubble_sort(dizi,6);
    for(int i=0;i<6;i++)
        printf("%d ",*(dizi+i));
}
