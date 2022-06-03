#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int a=0,even = 0,odd=0;
        scanf("%d",&a);
        int arr[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d",&arr[j]);
        }
        for (int k = 0; k < a; k++)
        {
            if (arr[k]%2 == 0)
            {
                even++;
            }
            else
                odd++;
            
        }
        if (even > odd)
        {
            printf("%d\n",odd);
        }
        else{
            printf("%d\n",even);
        }
        
        
    }
    
    return 0;
} 