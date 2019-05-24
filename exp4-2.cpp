//Create a C++ functional program that sorts n number of elements using either selection or bubble sort.  
 
//Selection Sorting… Enter the array size: 5 Enter the 5 elements: 
 
//100 50 22 101 200 
 
//Your data: 100 50 22 101 200 
 
//After using selection or bubble sort… 
 
//Sorted data: 22 50 100 101 200 

#include<iostream>
using namespace std;

int main()
{
	int size, arr[5], i, j, k;
	cout << "Enter array size: "; cin >> size; cout << "\n";
	cout << "  Selection sorting .... Enter the " << size << " elements : \n";
	for(i = 0; i < size; i++)
	{
		cin >> arr[i];
	} 
	cout << "Your data: ";
	for(int i = 0; i < size; i++)
        {
            cout << arr[i] <<", ";
       }
	
	for (i =0; i < size; i++)
	{
		for(j = i + 1; j < size ; j++)
		{
			if(arr[i] > arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	}
	cout << "\nAfter using selection sort\n";
	cout << " sorted data is : \n";
	for(i = 0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
 
