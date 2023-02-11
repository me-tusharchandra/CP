#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]*10);
    }
    
    
    return 0;
}