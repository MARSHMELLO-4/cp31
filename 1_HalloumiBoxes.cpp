#include <bits/stdc++.h>
using namespace std;


bool sorted(vector<int>&nums){

    if(nums.size() == 1){
        return true;
    }

    for(int i = 0;i<nums.size() - 1;i++){
        if(nums[i + 1] < nums[i]){
            return false;
        }
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i = 0;i<nums.size();i++){
            cin>>nums[i];
        }

        //now 
        if(k == 1){
            //check sorted
            if(sorted(nums)){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        } else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}