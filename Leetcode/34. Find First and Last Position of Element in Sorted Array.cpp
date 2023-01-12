#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
int firstOccurence(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(nums[mid] == target){
            ans = mid;
            e = mid - 1; //continue search in left 
        }
        if(target < nums[mid]){
            e = mid -1;
        }
        if(target > nums[mid]){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
    
int lastOccurence(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(nums[mid] == target){
            ans = mid;
            s = mid + 1; //continue search in right 
        }
        if(target < nums[mid]){
            e = mid -1;
        }
        if(target > nums[mid]){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector <int> v;
        v.push_back(firstOccurence(nums,target));
        v.push_back(lastOccurence(nums,target));
        return v;
    }
};