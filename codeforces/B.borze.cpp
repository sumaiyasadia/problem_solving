
#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    string ch;
    cin>>ch;
   int  l=ch.length();
   for(int i=0;i<l;i++)
    {
        if(ch[i]=='.')
        {
            cout<<0;
        }
        else if(ch[i]=='-'&&ch[i+1]=='.')
        {
            cout<<1;
            i=i+1;
            continue;
        }
        else if(ch[i]=='-'&&ch[i+1]=='-')
        {
            cout<<2;
            i=i+1;
            continue;
        }
    }
}
