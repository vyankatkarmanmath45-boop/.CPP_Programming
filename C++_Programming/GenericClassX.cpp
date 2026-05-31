#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public :
        T No1;
        T No2;

        Arithematic(T A, T B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1 + No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithematic <int> Aobj1(11,10);

    cout<<"Addition is :"<<Aobj1.Addition()<<"\n";
    cout<<"Substraction is :"<<Aobj1.Substraction()<<"\n";

    cout<<"\n";

    Arithematic <float> Aobj2(11.987f,10.654f);

    cout<<"Addition is :"<<Aobj2.Addition()<<"\n";
    cout<<"Substraction is :"<<Aobj2.Substraction()<<"\n";

    cout<<"\n";

    Arithematic <double> Aobj3(11.2345,10.1234);

    cout<<"Addition is :"<<Aobj3.Addition()<<"\n";
    cout<<"Substraction is :"<<Aobj3.Substraction()<<"\n";
    
    return 0;
}