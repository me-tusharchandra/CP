#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    puts(a);
    fgets(a, sizeof(a), stdin);
    puts(a);
    fgets(a, sizeof(a), stdin);
    puts(a);
    return 0;
}