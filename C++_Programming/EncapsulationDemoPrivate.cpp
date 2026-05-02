
#include <iostream>
using namespace std;

//Encapsulation
class Marvellous
{

    //Access Specifier(by Default Private)

    int No1, No2;               //characteristics

    void fun()                  //Behaviour
    {
        cout<<"Inside Fun\n";
    }

    void gun()                  //Behaviour
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{
    //Object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";      //8

    cout<<mobj1.No1<<"\n";          //Error

    mobj1.fun();                    //Error
    mobj2.fun();                    //Error

    mobj1.gun();                    //Error

    return 0;
}