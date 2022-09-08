#include<iostream>
using namespace std;

 int main()
 {
     int a, arr[10], ar[10], b, no, arno;


  cout<<"Enter Size of the first array: ";
  cin>>no;
  cout<<"Enter Size of the second array: ";
  cin>>arno;
     cout<<"Enter any "<<no<<" number in array: ";
      for(a=0;a<no;a++)
  {
        cin>>arr[a];
  }

      cout<<"Enter any "<<arno<<" number in array: ";
       for(b=0;b<arno;b++)
  {
   cin>>ar[b];
  }


  cout<<"Your Dublicate Values are: ";
  for(a=0; a<no; a++)
   {
    for(b=0;b<arno;b++)
    {
    if(arr[a]==ar[b])
    {
    cout <<" "<< arr[a];
    }
   }
   }
  return 0;
 }
