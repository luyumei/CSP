#include <iostream>

using namespace std;

int main() {
    int firstline = 0;
    cin >> firstline;
    int array[100] = {0};
    int arraymax[100] = {0};
    int subscript = 0;
    int theFirstNumber;
    cin >> theFirstNumber;
    array[subscript] = theFirstNumber;
    arraymax[subscript] = theFirstNumber;
    subscript++;
    int waitForCompare;
    for (int temp = 0; temp < firstline - 1; temp++) {
        cin >> waitForCompare;
        if (waitForCompare > arraymax[subscript - 1]) {
            array[subscript] = waitForCompare;
            arraymax[subscript] = waitForCompare;
            subscript++;
            continue;
        }
        if (waitForCompare = arraymax[subscript - 1]) {
            //min
            array[subscript] = 0;
            //max
            arraymax[subscript] = waitForCompare;
            subscript++;
            continue;
        }
    }
    int min = 0;
    int max = 0;
    subscript = 0;
    for (int count = 0; count < sizeof(array) / sizeof(array[0]); count++) {
        min = min + array[subscript];
        subscript++;
    }
    subscript = 0;
    for (int count = 0; count < sizeof(arraymax) / sizeof(array[0]); count++) {
        max = max + arraymax[subscript];
        subscript++;
    }
    cout << max << endl << min;
    return 0;
}
