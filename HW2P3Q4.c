#include <stdio.h>

int proc1(int* a, int b, int c){
    return 50;
}

int main(void){
    // Your code here!
    int w = 7;
    int x = 0;
    int y = 100;
    int z[100];
    while(x < y){
        z[x] = x + 1;
        x++;
    }
    
    printf("%d\n", proc1(z, y, w));
    
    return 0;
}
