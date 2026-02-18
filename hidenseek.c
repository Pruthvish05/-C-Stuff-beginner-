#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    char comp,you;
    printf("Enter your selection paper(p) stone(s) scizzor(z):");
    scanf("%s",&you);
    n=rand()%100;
    if(n<33){
        comp='s';
        printf("Comp chooses :s\n");
    }
    else if(n>33 && n<66){
        comp='p';
        printf("Comp chooses :p\n");
    }
    else{
        comp='z';
        printf("Comp chooses :z\n");
    }
    if(you==comp){
        printf("Draw match.");
    }
    else if(you=='p' && comp =='s'){
        printf("You won");
    }
    else if(you=='s' && comp=='p'){
        printf("You loose");
    }
    else if(you=='z' && comp=='s'){
        printf("You loose");
    }
    else if(you=='s' && comp=='z'){
        printf("You win");
    }else if(you=='p' && comp=='z'){
        printf("You loose");
    }else{
        printf("You loose");
    }     
}
