#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer start, int len){
    for(int i=0;i<len;++i){
        printf("%.2x",start[i]);
    }
}

int main(){
    int val=0x87654321;
    byte_pointer valp=(byte_pointer) &val;
    show_byte(valp,3);
    return 0;
}