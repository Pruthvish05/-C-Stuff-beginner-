#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("gimme my NUMBER :");
    scanf("%d" , &n);
    int sum = 0;
    int i = 1;
    while(i <= n){
        sum = sum + i;
        i++;
    }
    for(i=n;i>=1;i--){
        printf("%d \n" , i);
    }
    
      printf("sum is %d \n",sum);
    return 0;
}
