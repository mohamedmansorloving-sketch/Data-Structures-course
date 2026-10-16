#include<stdio.h>



void trace_stack(int n ,int depth)
{
    if (n>0)
    {
        
        for (int i=0;i < depth;i++)
        {
            printf(" ");
        }
        printf ("[calling phase] Enter frame n=%d\n",n);
        trace_stack(n-1,depth+1);
        for (int i=0;i < depth;i++)
        {
            printf(" ");
        }
        printf ("[Returning phase] Exit frame n=%d\n",n);

    }


}



int main (void)
{
    int n ;
    printf("n=?");

    scanf( "%d," ,&n);
    trace_stack(n,1);
}