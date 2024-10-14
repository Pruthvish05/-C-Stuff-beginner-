#include<stdio.h>
#include<math.h>
int main(){
    int n;
    do{
        printf("gimme a ODD number :");
        scanf("%d" , &n);
        if( n % 2 != 0){
            break;
        }
    }while(1);
    printf("Thanks you");
    return 0;
}
