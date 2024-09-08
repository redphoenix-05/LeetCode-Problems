#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        int m = s.size(),sum=0,a,f;
        for(int i=0;i<m;i++){
            a = s[i]-96;
            if(a>=10){
                while(a!=0){
                    sum = sum + (a%10);
                    a/=10;
                }
            }
            else{
                sum = sum + a;
            }
        }
        if(k==1){
            return sum;
        }
        else{
            while(k>=1){
                f = sum;
                sum = 0;
                if(k==1){
                    return f;
                }
                else{
                    while(f!=0){
                        sum = sum + (f%10);
                        f/=10;
                    }
                    k--;
                }
            }
        }
        return 0;
    }
};

int main(){
    string s; int k,res;
    cout << "Please input String & Key : ";
    cin >> s >> k;
    Solution sl;
    res = sl.getLucky(s,k);
    cout << "Result " << res << endl;
    return 0;
}