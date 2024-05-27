#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countGoodSubstrings(string s){
        int c=0;
        if(s.size()<3)
            return c;
        for(int i=0;i<=s.size()-3;i++){
            string st = s.substr(i,3);
            set<char> ch(st.begin(), st.end());
            if (ch.size()==3){
                c++;
            }
        }
        return c;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    int result = sol.countGoodSubstrings(s);
    cout << result << endl;
    return 0;
}
