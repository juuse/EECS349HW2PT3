#include <stdio.h>
int main(void){
    // Your code here!
    int x = 100;
    while(x < 999){
        int i = x / 100;
        int j = ((i * -100) + x) / 10;
        int k = x - 2 * ((x / 10) * 5); 
        if((i * i * i) + (j * j * j) + (k * k * k) == x){
            printf("%d\n", x);
        }
        x++;
    }
}
