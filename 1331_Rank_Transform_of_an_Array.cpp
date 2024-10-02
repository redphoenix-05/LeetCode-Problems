#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>arr2;
        arr2 = arr;
        unordered_map<int, int> rank;
        sort(arr2.begin(),arr2.end());
        int r = 1;
        for(auto i : arr2){
            if(rank[i] == 0){
                rank[i] = r;
                r++;
            }

        }
        for(int i = 0; i < n;i++){
            arr[i] = rank[arr[i]];
        }
        return arr;
    }
};

int main(){
    vector<int> v1 = {37,12,28,9,100,56,80,5,12};
    Solution s;
    vector<int> v2;
    v2 = s.arrayRankTransform(v1);
    for(int a:v2){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}