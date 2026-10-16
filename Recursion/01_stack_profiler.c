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
void static_profiler (int n , int depth)
{
    static int total_calls=0;
    static int max_depth =0;
    static int static_var =0;
    int local_var=0;
    if (n>0)
    {
        total_calls ++;
        max_depth =depth ;
        static_profiler (n-1 , depth+1);
        static_var=static_var+1 ;
        local_var=local_var+1 ;
        printf("static var=%d \n local var =%d \nThe diffrence between static and local var is =%d\n",static_var,local_var,static_var-local_var);
        if (depth==1)
        {
             printf("max depth =%d\n",max_depth);
             printf("total calls =%d\n",total_calls);


        }

    }
    
   
}



int main (void)
{
    int n ;
    printf("n=?");

    scanf( "%d," ,&n);
    trace_stack(n,1);
    printf ("First call\n");
    static_profiler (n,1);
    printf ("Second call\n");
    static_profiler (n,1);

}