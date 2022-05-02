#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int c = a*10;
        int d = b*5;
        if(c>d){
            printf("FIRST\n");
        }
        else if(c<d){
            printf("SECOND\n");
        }
        else{
            printf("ANY\n");
        }
    }
    return 0;
}