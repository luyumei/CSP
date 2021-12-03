//
// Created by RuoHao Li on 12/3/21.
//

#include "iostream"
#include "cmath"
#include "algorithm"

using namespace std;

int main()
{
    int n;
    cin>>n;//检测点总数
    int X,Y;
    cin>>X>>Y;//人的位置

    double distance[200]={0};//距离每一个检测点的远近
    double distance_alias[200]={0};

    int eachx,eachy;
    for(int i=0;i<n;i++)
    {
        cin>>eachx>>eachy;//每一个检测点的坐标
        distance[i]=pow((X-eachx),2)+pow((Y-eachy),2);
        distance_alias[i]=distance[i];
    }

    sort(distance_alias,distance_alias+n);//从近及远

    //find loc of distance_alias[0] in distance
    for(int count=0;count<3;count++)
    {
        for (int j = 0; j < n; j++)
        {
            if (distance_alias[count] == distance[j])
            {
                cout << j + 1 << endl;
                distance[j] = -1;
                break;
            }
        }
    }

    return 0;
}