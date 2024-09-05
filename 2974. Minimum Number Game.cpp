#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = nums.size(),temp;
        for(int i=0;i<s;i+=2){
            temp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = temp;
        }
        return nums;
    }
};

int main(){
    vector<int>v1={5,4,2,3},v2={2,5};
    Solution s;
    v1 = s.numberGame(v1);
    for(int a:v1){
        cout << a << " ";
    }
    cout << endl;
    v2 = s.numberGame(v2);
    for(int a:v2){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
