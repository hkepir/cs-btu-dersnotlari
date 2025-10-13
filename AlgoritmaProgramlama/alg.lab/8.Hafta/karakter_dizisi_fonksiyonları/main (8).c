#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    printf("Lutfen isminizi giriniz\n");
    //gets(name);
    fgets(name,sizeof(name),stdin);
    printf("%s",name);

  //sizeof kullanimi
    char name1[30];
    char name2[30];

    printf("Lutfen isminizi giriniz (sizeof):\n");
    fgets(name1, sizeof(name1), stdin);
    printf("Isminiz: %s", name1);

    printf("Lutfen isminizi giriniz (manuel):\n");
    fgets(name2, 30, stdin);
    printf("Isminiz: %s", name2);

    return 0;
}

}
