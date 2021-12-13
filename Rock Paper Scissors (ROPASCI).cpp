#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tc; cin>>tc;
	while(tc--) {
        int n; string str;
		cin>>n;
		cin>>str;
        stack<int> s, p, r ;
        if(str[n-1]=='P')
            p.push(n-1);
        else if(str[n-1]=='S')
            s.push(n-1);
        else
            r.push(n-1);
        vector<char> res(n);
        res[n-1]=str[n-1];
        for(int i=n-2; i>=0; i--){
            if(str[i]=='P' and str[i+1]=='R'){
                if(s.empty())
                    res[i]=str[i];
                else
                    res[i]=res[s.top()];
            }
            else if(str[i]=='S' and str[i+1]=='P'){
                if(r.empty())
                    res[i]=str[i];
                else
                    res[i]=res[r.top()];
            }
            else if(str[i]=='R' and str[i+1]=='S'){
                if(p.empty())
                    res[i]=str[i];
                else
                    res[i]=res[p.top()];
            }
            else
                res[i]=res[i+1];

            if(str[i]=='P')
                p.push(i);
            else if(str[i]=='S')
                s.push(i);
            else
                r.push(i);
        }
        for(int i=0; i<n; i++)
            cout<<res[i];
        cout<<endl;
    }

}
