int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
{
    // Your code goes here
    sort(arr, arr+N);
    int sum = 0;
    
    int i = N-1;
    while(i >= 0)
    {
        int j = i-1;
        bool flag = false;
        while(j >= 0)
        {
            if((arr[i] - arr[j]) < K)
            {
                flag = true;
                sum += (arr[i] + arr[j]);
                i = j - 1;
                break;
            }
            j--;
        }
        if(!flag)
            i--;
    }
    
    return sum;
}
