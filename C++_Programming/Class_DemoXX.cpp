#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;                    //Characteristics

        void fun()
        {
            cout<<"Inside fun\n";   //Behaviour
        }
        

};

int main()
{

    Demo dobj;

    cout<<dobj.i<<"\n";       //8

    dobj.fun();

    return 0;

}