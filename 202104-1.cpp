//
// Created by RuoHao Li on 12/3/21.
//

#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int totalElementCount=n*m;

    int L;
    cin>>L;
    int h[L];
    //erase array
    //h[L]={0};
    for(int k=0;k<L;k++)
    {
        h[k]=0;
    }

    //input matrix A
    int eachElement;
    for(int i=0;i<totalElementCount;i++)
    {
        cin>>eachElement;
        h[eachElement]++;
    }

    //output array h
    for(int j=0;j<L-1;j++)
    {
        cout<<h[j]<<' ';
    }
    cout<<h[L-1];

    return 0;
}