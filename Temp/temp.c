#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int a = 10;
    int *b = &a;
    int *p = b;
    printf("%u\n", *p++);
    printf("%u\n", *p);
    return 0;
}