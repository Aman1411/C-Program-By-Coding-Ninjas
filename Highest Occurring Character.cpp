#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char str[])
{
    int count=0,i,d;
    int arr[256]={0};
    char e;
    for(i=0;i<l;i++)
    {
        int c=str[i];
        arr[c]++;
    }
    for(i=0;i<l;i++)
    {
        d=str[i];
        if(arr[d]>count)
        {
            count=arr[d];
            e=str[i];
        }
    }
    return e;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
