#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main() 
{
    int a;
    scanf("%d", &a);
    for(int i = a; i<=pow(10,9); i++){

        if(i==1){
            printf("one\n");
            break;
        }
        else if (i==2)
        {
            printf("two\n");
            break;
        }
        else if(i==3){
            printf("three\n");
            break;
        }
        else if(i==4){
            printf("four\n");
            break;
        }
        else if(i==5){
            printf("five\n");
            break;
        }
        else if(i==6){
            printf("six\n");
            break;
        }
        else if(i==7){
            printf("seven\n");
            break;
        }
        else if(i==8){
            printf("eight\n");
            break;
        }
        else if(i==9){
            printf("nine");
            break;
        }
        else{
            printf("Greater than 9\n");
            break;
        }
    }
    return 0;
}

