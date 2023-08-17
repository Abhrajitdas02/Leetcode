//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
    private:
     bool isGreater(vector<int>& arr, int num[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] < num[i]) return false;
        if(arr[i] > num[i]) return true;
    }
    return false;
}
public:
 vector<int> generateNextPalindrome(int num[], int n) {
    vector<int> ans(n);
    int l = 0, r = n-1;
    while(r > l) {
        ans[r] = ans[l] = num[l];
        l++;
        r--;
    }
    ans[r] = num[r];
    if(isGreater(ans , num , n))    return ans;
    int carry = 1;
    if(n % 2 == 1) {
        ans[r]++;
        if(ans[r] < 10) return ans;
        ans[r] = 0;
        carry = 1;
        r--;
        l++;
    }
    while(r >= 0) {
        ans[r] += carry;
        ans[l] += carry;
        if(ans[r] < 10) return ans;
        ans[r] = ans[l] = 0;
        carry = 1;
        r--;
        l++;
    }
    if(carry == 1) {
        ans.insert(ans.begin() , 1);
        // can handle cases like 9999 , 999 to give 10001 , 1001
        ans[ans.size() - 1] = 1;
    }
    return ans;
}



};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends