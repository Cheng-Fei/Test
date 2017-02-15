#include<stdio.h>

void star(char *ch,int n);

void star(char *ch,int n)
{
    for(int i = 1;i <= n; i++)
    {
        for(int j = 1;j <= (n - i);j++)
        {
            printf("_");
            for (int j = 1; j <= 2 * i - 1; j++) {
                
                printf("%c",ch);
            }
            printf("\n");
        }
    }
    
}


int main()
{
//    char s[5] = {'+','@','#','*','='};
//    
//    for (int i = 3; i <= 5; i++) {
//        star(s[i-1],i);
//    }
    
    int
    
    
    
    return 0 ;
}


#include <stdio.h>

void move(x,y);
void line(x,y);
void ciecle(r);

int main()
{
    move(0,10);
    line(20,10);
    move(10,0);
    line(10,20);
    move(10,10);
    ciecle(5);
    move(0,0);
    line(20,20);
    move(20,0);
    line(0,20);
    
    return 0;
}











