#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    for ( i = 0; i < 26; i++)
    {
        if(i % 3 == 0){
            printf("%d\n",i);
        }
    }
    
    int count = 26;
    while(count <= 50){
        if(count % 3 == 0){
            printf("%d\n",count);
        }
        count++;
    }
}
