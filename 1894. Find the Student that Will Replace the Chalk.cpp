#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size(),left,solve;
        long int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + chalk[i];
        }
        left = k%sum;
        if(left==0){
            solve = 0;
        }
        else{
            int i;
            for(i=0;i<n;i++){
                if(left < chalk[i] ){
                    solve = i;
                    break;
                }
                left = left - chalk[i];
            }
        }
        return solve;
    }
};

int main(){
    Solution s;
    vector<int> v1={5,1,5},v2= {3,4,1,2}, v3 = {30,76,46,74,34,12,1,82,25,28,63,29,60,76,98,20,40,32,76,26,71};
    int a,b,c;
    a = s.chalkReplacer(v1,22);
    b = s.chalkReplacer(v2,25);
    c = s.chalkReplacer(v3,346237330);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}
