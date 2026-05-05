#include <iostream>
using namespace std;

int main()
{
    //We can create one referene to one variable
    int no = 11;
    int &x = no;

    //We can create multiple references for single variable
    int &y = no;

    //We can create Reference to reference
    int &z = y;

    //we can create reference to pointer
    int *p = &no;
    int *(&q) = p;
    
    return 0;
}