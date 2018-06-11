int TripleStep_TopDown(int n)
{
	int *memo = (int*)calloc(n, n * sizeof(int*));
	return TripleStep_TopDown(n, memo);
}

int TripleStep_TopDown(int n, int memo[])
{
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else
	{
		if (memo[n] == 0)
		{
			memo[n] = (TripleStep_TopDown(n - 1,memo) + TripleStep_TopDown(n - 2,memo) + TripleStep_TopDown(n - 3, memo));
		}
		return memo[n];
	}
}