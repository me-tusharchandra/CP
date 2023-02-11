#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    char str[100];
    scanf("%d\n",&n);
    for (int i = 0; i < n; i++)
    {   int count = 0;
        // fgets(str, sizeof(str), stdin);
        scanf("%s", str);
        for (int i = 0; i < 1000; i++)
        {
            if (str[i] == '\0')
            {
                break;
            }
            else{
                count++;
            }
        }
        if (count <= 10)
            {
                for (int i = 0; i < count; i++)
                {
                    printf("%c",str[i]);
                }
                printf("\n");
            }
        else{
            printf("%c%d%c\n",str[0],(count-2),str[count-1]);
        }
        
    }
    
    return 0;
}