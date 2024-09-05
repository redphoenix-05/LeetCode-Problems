#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k){
        string str= to_string(num);   /// to_string = convert values in string
        int c = 0;
        for(int i = 0;i<=str.size()-k;i++) {
            string subStr = str.substr(i, k); /// substr =  create substring of the string [ substr(pointer, size) ]
            int d = stoi(subStr); /// stoi = convert string into value
            if(d!=0 && num%d==0){
                c++;
            }
        }
        return c;
    }
};

int main(){
    Solution s;
    int a = s.divisorSubstrings(240,2);
    int b = s.divisorSubstrings(430043,2);
    cout << a << " " << b << endl;
    return 0;
}
