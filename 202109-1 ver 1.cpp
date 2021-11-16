#include <iostream>
using namespace std;
int main() {
    int firstline=0;
    cin>>firstline;
    int array[100]={0};
    int subscript=0;
    cin>>array[subscript];
    subscript++;
    int waitForCompare;
    for(int temp=0;temp<firstline-1;temp++)
    {
        cin>>waitForCompare;
        if(waitForCompare>array[subscript-1])
        {
            array[subscript]=waitForCompare;
            subscript++;
            continue;
        }
        if(waitForCompare=array[subscript-1])
        {
            array[subscript]=0;
            subscript++;
            continue;
        }
    }
    int sum;
    subscript=0;
    for(int count=0;count<size(array);count++)
    {
        sum=sum+array[subscript];
        subscript++;
    }
    cout<<sum;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
