#include <iostream>
using namespace std;

int main()

{
	int n, i; 
	double sum = 0; 
	double average = 0;
	int count = 0;

	cout << "Please enter 0 to stop the program. " << endl; 
	cout << "Please enter your numbers to get an average: " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
		
		{
				cout << "Please enter your numbers to get an average: " << endl;
				cin >> n; 
				sum += n;  
				count = i++; 
				if (n == 0) 
				{
					break;
				}	
				average = sum / count; 
		}
		
		cout << "The average of these numbers are : " << average << endl;

	return 0; 
}