#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char arr[100], new[100], j=0, temp = 0, count = -1, tmp = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%c",&arr[i]);
        count++;
        if (arr[i] == '\n')
        {
            break;
        }
    }
    if (count == 1)
    {
        printf("%c",arr[0]);
    }
    
    else {
        for (int i = 0; i < 100; i++)
        {
            if (arr[i] != '+')
            {
                new[j] = arr[i];
                j++;
            }
            if (arr[i] == '\n')
            {
                break;
            }
            
        }
        for (int i = 0; new[i] != '\n'; i++) {     
            for (int j = i+1; new[j] != '\n'; j++) {     
            if(new[i] > new[j]) {    
                temp = new[i];    
                new[i] = new[j];    
                new[j] = temp;    
            }     
            }     
        }    
        for (int i = 1; new[i] != '\n'; i++)
        {
            printf("%c+",new[i-1]);
        }
        tmp = count/2;
        printf("%c",new[tmp]);
    }
    return 0;
}