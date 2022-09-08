#include <iostream>
using namespace std;

void swap(int *a, int *b)
{ int swapno;
    swapno = *a;
    *a = *b;
    *b = swapno; }

   int main() {
       int a, b;

       cout<<"Enter Your first number ::";
       cin>>a;

       cout<<"Enter Your Second number ::";
       cin>>b;

       swap(&a, &b);

       cout<<"Your Swapped Numbers Are::" << endl;
       cout<<"First number :: "<< a << endl;
       cout<<"Second number:: "<<b << endl;

       return 0;
   }
