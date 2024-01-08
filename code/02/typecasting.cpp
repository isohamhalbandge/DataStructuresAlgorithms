#include<iostream>
using namespace std;
int main()
{
    // typecasting -> change the type of one datatype to another datatype
    // there is possible case of data loss that might happen in typecasting
    // if the datatypes are of same size or from lower size to higher size datatype then there will no chance of data loss
    // but if the datatype is of higher size and we are going to store in lower datatype size then there are high chances of having data loss

    int a = 10;
    char c = 'b';

    // assigning the value of c to a
    a = c;

    // since 'c' is char and 'a' is int so the value of 'c' that will be stored in 'a' will be of int type because of its ASCII value
    cout << a << endl;
}