#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        set<int> s;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums2[j] < nums1[i]){
                j++;
            }
            else{
                s.insert(nums1[i]);
                i++;
                j++;
            }
            
        }
        vector<int> ans;
        for(auto i : s) ans.push_back(i);
        
        return ans;
    }
};