#include <iostream>

using namespace std;

int main()
{
   int A [] = {6,5,2,9,11,15,17};
   int B [] = {20,3,7,13,2,8,10,9};
   int a,b;

   float size_A = sizeof (A)/sizeof (A[0]);
   float size_B = sizeof (B)/sizeof (B[0]);
  for(a = 0; a <= size_A; a++){
  for(b = 0; b <= size_B; b++){
      if (A[a]==B[b]){

       cout << "Duplication No::" << A[a] << endl;


      }
  }

  }
    return 0;
}
