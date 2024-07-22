#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
// #define clear()  

int main(){
    int a,b;
    char var;
    while(1){
    printf("Enter the Expression (ex.1+2)(enter q to exit)\n");
    scanf("%d %c%d",&a,&var,&b);
    switch(var){
        case ('+'):printf("%d%c%d=%d",a,var,b,a+b);
        break;
        case ('-'):printf("%d%c%d=%d",a,var,b,a-b);
        break;
        case ('*'):printf("%d%c%d=%d",a,var,b,a*b);
        break;
        case ('/'):printf("%d%c%d=%d",a,var,b,a/b);
        break;
        case ('q'):return 0;
        break;
        default: printf("Invalid expression");
        break;
    }
    getch(); 
    }
}