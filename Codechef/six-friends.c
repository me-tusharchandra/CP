#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a*3 == b*2)
        {
            printf("%d\n",a*3);
        }
        else if (a*3 < b*2)
        {
            printf("%d\n",a*3);
        }
        else
        {
            printf("%d\n",b*2);
        }
        a = 0;
        b = 0;
    }
    return 0;
}