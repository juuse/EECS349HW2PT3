#include <stdio.h>
int main(void){
    // Your code here!
    int arr[] = {12, 15, 221, 3, 432, 54, 16, 67};
    int x = 0;
    int y = 0;
    
    while(y <= 7){
        if(arr[y] > x){
            x = arr[y];
        }
        y++;
    }
    printf("%d", x);
	
	return 0;
}
