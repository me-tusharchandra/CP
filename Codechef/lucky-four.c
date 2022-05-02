#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char s[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%s",s);
        for (int j = 0; j < strlen(s); j++)
        {
            if(s[j]=='4'){
                count += 1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}