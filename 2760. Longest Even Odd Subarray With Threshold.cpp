#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size(),ans=0,c;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
                c=1;
                for(int j = i+1;j<n;j++){
                    if(nums[j] % 2 != nums[j - 1] % 2 && nums[j]<=threshold){
                        c++;
                    }
                    else{
                        break;
                    }
                }
                ans = max(c,ans);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int>v1={3,2,5,4},v2={1,2},v3={2,3,4,5};
    Solution s;
    int a,b,c;
    a = s.longestAlternatingSubarray(v1,5);
    b = s.longestAlternatingSubarray(v2,2);
    c = s.longestAlternatingSubarray(v3,4);

    cout << a << " " << b << " " << c << endl;

    return 0;
}
