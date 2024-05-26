#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>index,ans;
        for(int i=0;i < nums.size();i++){
            if(nums[i] == key){
                index.push_back(i);
            }
        }
        for(int i=0;i < nums.size();i++){
            for(int j=0;j < index.size();j++){
                if( abs( i - index[j]) <= k){
                    ans.push_back(i);
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};

int main(){
    Solution K;
    vector<int> k,r;
    k.push_back(3);
    k.push_back(4);
    k.push_back(9);
    k.push_back(1);
    k.push_back(3);
    k.push_back(9);
    k.push_back(5);
    r = K.findKDistantIndices(k,9,1);
    int j=0;
    for(auto c:r) cout << c << " ";
    return 0;
}
