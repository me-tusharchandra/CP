#include<stdio.h>
#include<math.h>
#include<string.h>

int algo(int arr[5][5]){
    int a=0, b=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                a=i+1;
                b=j+1;
                // printf("%d %d\n", a, b);
                if(a>=3){
                    a = a-3;
                }
                else if(a<3){
                    a = 3-a;
                }
                if(b>=3){
                    b = b-3;
                }
                else if(b<3){
                    b = 3-b;
                }
                return (a+b);

            }
            
        }
        
    }
    return 0;
    
}

int main(){

    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("%d",algo(arr));
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    
    return 0;
}

