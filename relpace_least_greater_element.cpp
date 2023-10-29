/* Replace every element with the least greater element on its right
Given an array arr[] of N integers and replace every element with the least greater element on its right side in the array. If there are no greater elements on the right side, replace it with -1.
 arr[] = {2, 6, 9, 1, 3, 2}
 Output: {3, 9, -1, 2, -1, -1}
 */
vector<int> findLeastGreater(vector<int>& arr, int n) {
    vector<int> res;
    set<int> st;
    for(int i=n-1; i>=0; i--)
    {
        st.insert(arr[i]);
        set<int>::iterator it;
        it = st.upper_bound(arr[i]);
        if(it != st.end())
        {
            res.push_back(*it);
        }
        else
        {
            res.push_back(-1);
        }
    }
    reverse(res.begin(), res.end());
    
    return res;
}
