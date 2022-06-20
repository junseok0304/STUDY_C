#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main(){
    
    int i, freq[SIZE] = {0};
    
    for (i=0; i < 10000; i++)
        ++freq[rand() % 6];
    
    printf("====================\n");
    printf(" 면     빈도\n");
    printf("====================\n");
    
    for ( i=0; i < SIZE; i++)
        printf("%3d   %5d\n",i+1,freq[i]);
    
    return 0;
    
}
