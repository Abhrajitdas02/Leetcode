//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here    
        int n=arr.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i:arr)
        mp[i]++;
        int repeat=-1,missing=-1;
        for(int i=1;i<=n;i++){
            if(mp[i]==2)repeat=i;
            else if(mp[i]==0)missing=i;
            if(repeat!=-1 && missing!=-1) break;
        }
        return {repeat,missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends