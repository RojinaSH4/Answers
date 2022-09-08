#include <iostream>
using namespace std;

int main()
{

     int n;
     char nexterm;
     char t1 = 0;
     char  t2 =1;
      cout << "Your Number::";
      cin >> n;
    for(int i = 1; i<=n; ++i){
        if(i == 1){
            cout << t1 << " + , ";
            continue;

        }
        if(i == 2){

            cout << t2 << " , + , ";
            continue;

        }

        nexterm = t1 + t2;
        t1 = t2;
        t2 = nexterm;
         cout << nexterm << " , + , ";


}

    return 0;
}










