#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; 
    string in,two,three,res;
    cin >> n;
    cin >> in;
    cin >> m;
    cin >> two;
    cin >> three;
    for(int i=0;i<m;i++)
    {
        if(three.at(i)=='D')
        in.push_back(two.at(i));
        else 
        in=two.at(i)+in;
    }
    cout<< in ;
}