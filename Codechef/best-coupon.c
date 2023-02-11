#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d",&temp);
        if(temp < 100){
            printf("100");
        }
        else
        {
            printf("%d",temp/10);
        }
        
    }
    return 0;
}