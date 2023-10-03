long long maxSubarraySum(int arr[], int n){
        
	  // Your code here
	  long long max = arr[0];
	  long long currMax = arr[0];
	  for(int i=1; i<n; i++)
	  {
	      currMax = (arr[i] > (currMax + arr[i])) ? arr[i] : (currMax + arr[i]);
	      max = (currMax > max) ? currMax : max;
	  }
	  
  	return max;
}
