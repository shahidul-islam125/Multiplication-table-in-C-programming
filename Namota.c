#include<stdio.h>
int main(){
    int n, i, result;
    
    printf("Enter any positive number :");
    scanf("%d", &n);
    
    for(i=1; i<=10; i++){
        
        result = n * i;
        printf("%d * %d = %d\n", n, i, result);
    }
    
    
  return 0;  
}