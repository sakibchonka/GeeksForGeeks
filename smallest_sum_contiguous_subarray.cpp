int smallestSumSubarray(vector<int>& a)
{
  //Code here
  int currMin = a[0];
  int mini = a[0];
  
  for(int i=1; i<a.size(); i++)
  {
      currMin = (a[i] < (a[i] + currMin)) ? a[i] : (a[i] + currMin);
      mini = min(mini, currMin);
  }
  
  return mini;
}
