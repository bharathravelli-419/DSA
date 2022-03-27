#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int mina=arr[0];
        int maxa=arr[n-1];
        int res= maxa-mina;
        for(int i=1;i<n;i++)
        {
            maxa=max(arr[n-1]-k, arr[i-1]+k);
            mina=min(arr[i]-k, arr[0]+k);
            if(mina<0)
            continue;
            res= min(res, maxa-mina);
            
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends