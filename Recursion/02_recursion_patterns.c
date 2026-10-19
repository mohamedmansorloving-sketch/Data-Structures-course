#include<stdio.h>
void tail_recursion(int n);
void head_recursion(int n);
void  tail_via_loop(int n);
void tree_recursion(int n,int depth);
int nasted_recursion(int n);

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
    printf("\n");
    tree_recursion(n,1);
    printf("\n");
    printf("%d",nasted_recursion(n));
    printf("\n");

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
void tree_recursion(int n,int depth)
{
    static int total_calls=0;
    static int max_depth =0;
    total_calls++;
    if (depth>max_depth)
    {
        max_depth=depth;
    }

    if (n>0)
    {
        printf("%d",n);
        tree_recursion(n-1,depth+1);
        tree_recursion(n-1,depth+1);
    }
    if (depth==1)
    {
        printf("\nmax depth =%d\n",max_depth);
        printf("total calls =%d\n",total_calls);
    }
}

    int nasted_recursion(int n)
    {
        if (n>100)
        {
            return (n-10);
        }
         else if (n<=100)
        {
        return nasted_recursion(nasted_recursion(n+11));

        }
        
    }

