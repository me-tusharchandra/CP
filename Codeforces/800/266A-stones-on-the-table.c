#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n,count = 0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    // printf("%s",arr);
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            count++;
        }
        
    }
    printf("%d",count);
    
    return 0;
}