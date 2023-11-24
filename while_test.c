#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int count = 0;
    while(count < 10){
        if(count % 2 == 0){
            printf("%d\n",count);
        }
        count++;
    }
}
