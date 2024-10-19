#include<stdio.h>
int main(){
    float products[3];
    printf("1st product :");
    scanf("%f",&products[0]);
    printf("2nd product :");
    scanf("%f",&products[1]);
    printf("3rd product :");
    scanf("%f",&products[2]);
    printf("1st product:%f \n",products[0]+(products[0]*0.18));
     printf("2nd product:%f \n",products[1]+(products[1]*0.18));
      printf("3rd product:%f \n",products[2]+(products[2]*0.18));
}
