#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	int neg=0,pos=0,sum;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	if(n%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i=i+2)
        {
            if(a[i]!=a[i+1])
            {
                sum=0;
                continue;
            }
          else  if(a[i]>0 && a[i+1]>0)
            {
                pos++;
            }
            else if(a[i]<0 &&a[i+1]<0)
            {
                neg++;
            }
        }
    }
    if(abs(pos-neg)%2==0 && sum==0)
        cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		solve();

	}
	return 0;
}

