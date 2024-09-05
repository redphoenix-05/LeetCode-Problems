#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size(),sum = 0,d,left,sub,extra,mod;
        m = n + m;
        for(int i: rolls){
            sum = sum + i;
        }
        left = ((mean * m) - sum);
        d = left/n;
        extra = 6*n;
        vector<int>v1;
        if(d>6 || left > extra || d<1){
            return v1;
        }
        mod = left - (d*n);
        for(int i=0;i<n;i++){
            if(mod!=0){
                v1.push_back(d+1);
                mod--;
            }
            else{
                v1.push_back(d);
            }
        }
        return v1;
    }
};

int main(){
    vector<int> v1 = {3,2,4,3}, v2={1,5,6}, v3 = {1,2,3,4},v4 = {4,5,6,2,3,6,5,4,6,4,5,1,6,3,1,4,5,5,3,2,3,5,3,2,1,5,4,3,5,1,5};
    Solution s;
    vector<int> a,b,c;
    a = s.missingRolls(v1,4,2);
    b = s.missingRolls(v2,3,4);
    c = s.missingRolls(v4,4,40);
    cout << "a = ";
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;

    cout << "b = ";
    for(int i:b){
        cout << i << " ";
    }
    cout << endl;

    cout << "c = ";
    for(int i:c){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}