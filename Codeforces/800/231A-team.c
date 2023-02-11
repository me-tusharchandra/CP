#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n, count1 = 0;
    scanf("%d",&n);
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > 1)
        {
            count1++;
        }
        
        
    }
    printf("%d",count1);
    return 0;
}