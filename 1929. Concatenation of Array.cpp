#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int s = nums.size(),j=0;
        for(int i=0;i<s*2;i++){
            ans.push_back(nums[j]);
            j++;
            if(j<s){
                continue;
            }
            else{
                j=0;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>v1,v2;
    int n;
    cin >> n;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        v1.push_back(a);
    }
    v2 = s.getConcatenation(v1);
}
