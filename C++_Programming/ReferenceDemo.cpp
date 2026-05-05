#include <iostream>
using namespace std;

int main()
{
    int no =11;
    int &x = no;

    cout << "value of no : "<<no<<"\n";     //11
    cout << "value of x : "<<x<<"\n";       //11

    cout << "Address of no : "<<&no<<"\n";    //100
    cout << "Address of x : "<<&x<<"\n";        //100

    cout << "Size of no : "<<sizeof(no)<<"\n";   //4
    cout << "Size of x : "<<sizeof(x)<<"\n";     //4


    return 0;
}