#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
  
    long long option1 = abs(a - b);
    
   
    long long option2 = a + c - b;
    
   
    long long final_score = max(option1, option2);
    
    cout << final_score << "\n";
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
