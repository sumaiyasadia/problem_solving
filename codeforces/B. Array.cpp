#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
        {
            int less = 0, greater = 0;

            for(int j = i + 1; j < n; j++)
            {
                if(a[j] < a[i]) less++;
                else if(a[j] > a[i]) greater++;
            }

            cout << max(less, greater) << " ";
        }

        cout << "\n";
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {

       solve();
    }

    return 0;
}
