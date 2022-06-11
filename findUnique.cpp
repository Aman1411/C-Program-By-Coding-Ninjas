#include <iostream>
#include "solution.h

int findUnique(int *arr, int size)
{
    for(int i=0;i<size;++i)
    {
        int b=0;
        for(int j=0;j<size;++j)
        {
            if(i==j)
                continue;
            else
            {
                if(arr[i]==arr[j])
                {
                    b=1;
                    break;
                }
                else
                    b=0;                    
            }
        }
        if(b==0)
        {
            return arr[i];
        }
    }
    //Write your code here
}"
using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}
