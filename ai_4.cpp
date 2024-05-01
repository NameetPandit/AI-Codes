#include<iostream>
#include<cmath>
using namespace std;

void bubble_sort(int arr[], int size)
{
	int i,j;
	
	
	for(i = 0;i < size - 1; i++)
	{
		for(j = 0; j < size - i - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"The bubble sorted array is:"<<"\n";
	for(i = 0; i < size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

void selection_sort(int arr[] , int size)
{

    int i, j, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
    	cout<<"The selectively sorted array is:"<<"\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
		
	}
	cout<<endl;

}
		
int main()
{
	int arr[] = {28,56,42,14};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i;
	int choice;
	cout<<"1. Bubble sort"<<"\n";
	cout<<"2. Selection Sort"<<"\n";
	cout<<"3. Exit"<<"\n";
	do
	{
		cout<<"Enter your choice:"<<"\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				bubble_sort(arr , size);
				break;
			}
			case 2:
			{
				selection_sort(arr , size);
				break;
			}
			case 3:
			{
				cout<<"Thanks!"<<"\n";
				break;
			}
		}
	}while(choice != 3);
					
	return 0;
}
	
	
