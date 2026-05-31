#include<iostream>
using namespace std;

class Arithematic
{
    public :
        int No1;
        int No2;

        Arithematic(int A, int B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        int Addition()
        {
            int Ans;
            Ans = No1 + No2;
            return Ans;
        }

        int Substraction()
        {
            int Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithematic Aobj(11 , 10);

    cout<<Aobj.Addition()<<"\n";
    cout<<Aobj.Substraction()<<"\n";
    
    return 0;
}