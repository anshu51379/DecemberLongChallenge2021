#include<iostream>
#include<string>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a, b;
        cin>>a>>b;
        string res = "" ;
        if(b==a){
            for(int i=0; i<a+1; i++){
                res=res+"10";
            }
        }
        else if(b>a){
            for(int i=0; i<a+1; i++){
                res=res+"10";
            }
            for(int i=0; i<b-a-1; i++){
                res=res+"110";
            }
            res=res+"1";
        }
        else{
            for(int i=0; i<b; i++){
                res=res+"01";
            }
            for(int i=0; i<a-b; i++){
                res=res+"010";
            }
        }
        cout<<res.size()<<endl<<res<<endl;
    }
}
