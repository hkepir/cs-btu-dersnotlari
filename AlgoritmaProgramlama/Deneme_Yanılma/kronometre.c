#include <stdio.h> <time.h>
int main(){
    for(int dakika =0;dakika<60;dakika++){
        for(int saniye=0;saniye<60;saniye++){
            printf("%2.d:%2.d\r",dakika,saniye);
            sleep(1);
    }
  }
}
