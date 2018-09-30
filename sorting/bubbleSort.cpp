
#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int array[], int length)
{
  for (int k = 0; k < length-1; k++)
  {
    for (int l = 0; l < length-1-k; l++)
    {
      if (array[l+1] < array[l])
      swap(array[l], array[l+1]);
    }
  }
}


int main()
{
  int length;
  cout<<"\nEnter the length of your array : ";
  cin>>length;

  // Taking the elements of the array as input.
  int arr[length];
  cout<<"\nEnter  the numbers you want to insert into your array:\n";
  for(int i=0; i < length; i++)
  {
  	cin>>arr[i];
  }

  bubbleSort(arr, length);

  cout<<"\nSorting Operation Completed!\nThe sorted array is : \n";
  for(int i = 0; i < length; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << "\n";


  return 0;
}
