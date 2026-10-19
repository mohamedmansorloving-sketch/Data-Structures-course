#include<stdio.h>
void tail_recursion(int n);
void head_recursion(int n);
void  tail_via_loop(int n);

int main (void)
{
    int n ;
    printf("n=?");

    scanf( "%d," ,&n);
    tail_recursion(n);
    printf("\n");
    head_recursion(n);
    printf("\n");
    tail_via_loop(n);
    return 0;
}


void tail_recursion(int n)
{
    if (n>0)
    {
        printf("%d",n);
        tail_recursion(n-1);
    }
}

void head_recursion(int n)
{
    if (n>0)
    {
        head_recursion(n-1);
        printf("%d",n);
    }
}       
    
void  tail_via_loop(int n)
{
    while (n>0)
    {
        printf("%d",n);
        n--;
    }
    printf("\n");
}