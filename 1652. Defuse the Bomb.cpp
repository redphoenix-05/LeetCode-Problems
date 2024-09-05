#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        if(k==0){
            for(int i=0;i<n;i++){
                code[i]=0;
            }
            return code;
        }
        else if(k>0){
            vector<int>v;
            for(int i=0;i<n;i++){
                int a = k,sum = 0,j;
                if(i+1==n){
                    j = 0;
                }
                else{
                    j = i+1;
                }
                for(;j<n;j++){
                    sum = sum + code[j];
                    if(j+1==n){
                        j = -1;
                    }
                    a--;
                    if(a==0){
                        break;
                    }
                }
                v.push_back(sum);
            }
            return v;
        }
        else{
            vector<int>v;
            for(int i=0;i<n;i++){
                int a = abs(k),sum = 0,j;
                if(i==0){
                    j = n-1;
                }
                else{
                    j = i-1;
                }
                for(;j>=0;j--){
                    sum = sum + code[j];
                    if(j==0){
                        j = n;
                    }
                    a--;
                    if(a==0){
                        break;
                    }
                }
                v.push_back(sum);
            }
            return v;
        }
    }
};

int main(){
    vector<int>v1={5,7,1,4},v2={1,2,3,4},v3={2,4,9,3};
    Solution s;
    v1 = s.decrypt(v1,3);
    v2 = s.decrypt(v2,0);
    v3 = s.decrypt(v3,-2);

    cout << "v1 = " ;

    for(int i : v1){
        cout << i << " ";
    }
    cout << endl;

    cout << "v2 = ";

    for(int i : v2){
        cout << i << " ";
    }
    cout << endl;

    cout << "v3 = " ;

    for(int i : v3){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
