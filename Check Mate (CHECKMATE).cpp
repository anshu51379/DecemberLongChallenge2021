#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tc; cin>>tc;
	while(tc--){
		int xk, yk; 
		cin>>xk>>yk;
        int x1, y1; 
		cin>>x1>>y1;
        int x2, y2; 
		cin>>x2>>y2;
        if((xk==1 || xk==8) and (abs(x1-xk)==1 || abs(x2-xk)==1) and abs(y1-yk)!=1 and abs(y2-yk)!=1 and y1!=y2) {
            cout<<"YES"<<endl;
        }
        else if((yk==1 || yk==8 )and (abs(y1-yk)==1 || abs(y2-yk)==1) and abs(x1-xk)!=1 and abs(x2-xk)!=1 and x1!=x2) {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
	}

}
