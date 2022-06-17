#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        multimap<int, int> s; 
        vector<int> res;
        for(int i = 0; i < n; i++){
            s.insert({arr[i], i});
        }
        for (int i = 0; i <= n - k; i++) {
            for (auto it = s.rbegin(); it != s.rend(); it++) {
                if ((*it).second < (i+k) && (*it).second >= i) {
                    res.push_back((*it).first);
                    break;
                }
            }
        }
        return res;
    }
};



int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
