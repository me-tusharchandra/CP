#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    
    for (int j = n; j>=1; j--){
        for (int k = n; k > j; k--){
            printf("%d ", k);
        }
        
        for (int i = 1; i < j; i++){
            printf("%d ", j);
        }
        printf("%d ", j);
        for (int i = 1; i < j; i++){
            printf("%d ", j);
        }
        
        for (int k = j+1; k<=n; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    
    for (int j = 2; j<=n; j++){
        for (int k = n; k > j; k--){
            printf("%d ", k);
        }
        
        for (int i = 1; i < j; i++){
            printf("%d ", j);
        }
        printf("%d ", j);
        for (int i = 1; i < j; i++){
            printf("%d ", j);
        }
        
        for (int k = j+1; k<=n; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}