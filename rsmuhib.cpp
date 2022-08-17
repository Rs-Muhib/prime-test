
#include <bits/stdc++.h>
using namespace std;
 void solve(){

        cin>>n;
        if(n==0 || n==1){
                cout<<"Not Prime";
                return;
            }
        rep(i,2,n){
            if(n%(i*i)==0){
                cout<<"Not Prime";
                return;
            }
        }
        cout<<"Prime";
    }
int main()
{
    #ifndef ONLINE_JUDGE
  input; output;
#endif
   int q=1;
   while(q--)
    solve();
    return 0;
}
