#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char a[100],b[100],c[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    fgets(c,100,stdin);
    printf("%s",a);
    printf("%s",b);
    printf("%s",c);
    return 0;
}