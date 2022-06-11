#include <iostream>
using namespace std;

void arrange(int *arr, int n){
	int i, j=0;
	for(i = 1; i<=n; i++){
		if(i%2 != 0){
			arr[j]=i;
			j++;
		}
	}
	
	for(i = n; i>0; i--){
		if(i%2 == 0){
			arr[j]=i;
			j++;
		}
	}
	
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
