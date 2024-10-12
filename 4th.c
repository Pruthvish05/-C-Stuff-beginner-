#include<stdio.h>
#include<math.h>
int main(){
     char ch;
     printf("Enter a charcter :");
     scanf("%c",&ch);
     if(ch >= 'a' && ch <= 'z'){
        printf("It's in UpperCase");
     }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("It's UpperCase");
    }
    else {
        printf("Invalid Letter of English");
    }
    return 0;
}
