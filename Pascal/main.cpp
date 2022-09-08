#include<iostream>
using namespace std;


int form(int no)
{
    int res=1;
    if(no==1||no==0)
    {
        return 1;
    }
    else
    {
        res=no*form(no-1);
        return res;
    }
}


int comb(int no,int row)
{
    int num=form(no);

    int den=form(no-row)*form(row);

    int result=num/den;


    return result;


}


void pascal(int linea,int nolines)
{
    if(linea==nolines)
        return;



    int k=linea+1;

        for(int j=1;j<=k;j++)
        {
            int dig=comb(linea,j-1);

            cout<<dig;
        }
        cout << endl;

 pascal(linea+1,nolines);

}
int main()
{
    int nolines;
    cout << "The Number Of The Row::";
    cin>>nolines;

     cout<<"1"<<endl;

      pascal(1,nolines);

}
