#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        char first, second, third;
        cin>>first>>second>>third;
        char x, y;
        cin>>x>>y;
        int countA=0, countB=0;
        if(x==first){
            countA=3;
        }
        else if(x==second){
            countA=2;
        }
        else{
            countA=1;
        }
        if(y==first){
            countB=3;
        }
        else if(y==second){
            countB=2;
        }
        else{
            countB=1;
        }
        if(countA>countB){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
}
