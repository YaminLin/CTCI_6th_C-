int TripleSteps_BottomUp(int n) 
{
    //bottom-up
    int *memo = (int*)calloc(n,n*sizeof(int*));
    
    memo[0]=1;
    memo[1]=1;
    
    for(int i = 2; i <= n; i++)
    {
        memo[i]= memo[i-1]+memo[i-2]+memo[i-3];
    }
        
    return memo[n];
}