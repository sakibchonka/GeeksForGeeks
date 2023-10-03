int getPairsCount(int arr[], int n, int k) {
  map<int, int> mp;
  int count = 0;
  
  for(int i=0; i<n; i++)
  {
    mp[arr[i]]++;
  }
  
  for(int i=0; i<n; i++)
  {
    if(mp[k - arr[i]])
    {
      mp[arr[i]]--;
      count += mp[abs(k - arr[i])];
    }
  }
  
  return count;
}	
