#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int arr[n];
	for(int k=0; k <n; k++)
	{
		cin >> arr[k];
	}
	for(int i = 1; i < n; i++)

	{	
		int temp = arr[i];
		for(int j = i; j >= 0; j--)
		{
			arr[j] = arr[j-1];
			if(arr[j]<temp)
			{
				 arr[j]=temp;
				 break;
				
			}
			
			
		}
	}
	for(int k = 0; k< n; k++)
	{
		cout << arr[k] << "\n";
	}
}