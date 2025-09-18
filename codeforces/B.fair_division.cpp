#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ones = 0, twos = 0, sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) ones++;
            else twos++;
        }

        if(sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(ones == 0 && (twos % 2 != 0))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
