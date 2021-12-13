#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> x(n);
        for(int&i : x){
            cin>>i;
        }
        map<int, int> frq;
        for(int i : x){
            frq[i]++;
        }
        int maxFrq=-1;
        for(auto pii : frq){
            maxFrq=max(maxFrq,pii.second);
        }
        int res=-10;
        if(n==1 || maxFrq==n){
            res=0;
        }
        else if(maxFrq==1){
            res=-1;
        }
        else{
            res=(n-maxFrq)+1;
        }
        cout<<res<<endl;
    }
}
