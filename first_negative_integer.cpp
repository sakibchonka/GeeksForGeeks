bool isNeg(long long n)
{
    return (n < 0) ? true : false;
}
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
           
    queue<long long> q;
    vector<long long> res;
    for(long long i=0; i<K-1; i++)
    {
        if(isNeg(A[i]))
            q.push(A[i]);
    }
    
    for(long long i=K-1; i<N; i++)
    {
        if(isNeg(A[i]))
            q.push(A[i]);
            
        if(!q.empty())
            res.push_back(q.front());
        else
            res.push_back(0);
        
        if(q.front() == A[i-K+1])
            q.pop();
    }

    return res;
    
 }
