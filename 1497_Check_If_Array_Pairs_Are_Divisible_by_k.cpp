#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainder(k,0);
        for(int n : arr){
            int r = ((n % k) + k) % k;
            remainder[r]++;
        }
        if(remainder[0] % 2 !=0){
            return false;
        }

        for(int i = 1;i<k;i++){
            if(remainder[i]!=remainder[k-i]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    vector<int> v1 = {1,2,3,4,5,10,6,7,8,9}, v2 = {1,2,3,4,5,6}, v3 = {1,2,3,4,5,6};
    Solution s;
    bool a;
    a = s.canArrange(v1,5);
    cout << a << endl;
    a = s.canArrange(v2,7);
    cout << a << endl;
    a = s.canArrange(v1,10);
    cout << a << endl;
    cout << "True " << true << endl;
    cout << "False " << false << endl;

}