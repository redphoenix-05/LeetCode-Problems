#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if(i > m) {
                return false;
            }
            m = max(m,i + nums[i]);
            if(m >= n - 1) {
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int>v1 = {2,3,1,1,4},v2 = {3,2,1,0,4};
    int a = s.canJump(v1), b = s.canJump(v2);
    cout << "a = " << a << " & b = " << b << endl;
    return 0;
}
