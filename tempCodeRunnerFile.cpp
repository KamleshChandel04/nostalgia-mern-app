#include<iostream>
using namespace std;

  void sorttwo(int arr[],int size)
 {
  for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-1;j++)
    {
       if(arr[j]>arr[j+1])
       {
           int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }
}

int main(){
  int size;
  cout<<"enter the size of array:";
  cin>>size;
  
  int arr[size];
  cout<<"enter the elements of array:"<<endl;
  for(int i=0;i<size;i++)
    cin>>arr[i];

    sorttwo(arr,size);
  cout<<"the sorted array are\n"<<endl;
  for(int i=0 ;i<size ;i++)
    cout<<arr[i]<<" ";

}