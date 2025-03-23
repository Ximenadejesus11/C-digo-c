#include <stdio.h>  

int main() {   
    
    
    int w = 9;
    int x = 3;
    int y = 7;
    int z = -2;
    
    printf("x < y And w > z %d\n", ( x < y && w > z));
    printf("x >= w xor z == y %d\n", ( x >= w ^ z == y));
    printf("y <= x or x != w %d\n", ( y <= x || x != w));
    printf("w == 9 xor x== 3 %d\n", ( w == 9 ^ x == 3));
    printf("y > z And z < x %d\n", ( y > z && z < x));
    printf("! w != 9 %d\n", ( ! w != 9));
    
    
    //("pause"); 
    return 0;  
    }