int MAX(int a, int b) 
	return (a > b)?a:b; 
int knapSack(int W, int wt[], int val[], int n)
{
 
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return MAX(val[n - 1]+ knapSack(W - wt[n - 1],wt, val, n - 1),knapSack(W, wt, val, n - 1));
}
 
int main()
{
    int val[] = { 45, 48, 35 };
    int wt[] = { 5,8,3 };
    int W = 10;
    int n = 3;
    cout << knapSack(W, wt, val, n);
    return 0;
}
