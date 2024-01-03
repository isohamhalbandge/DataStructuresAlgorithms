/*

datatypes
1. int -> 4 bytes
int name = 10;
where `name` is variable

4 bytes = 32 bits
00000000000000000000000000001010

2. char -> single alphabet -> 1 byte
represented with single quotation marks
for e.g. char c = 'a';

1 byte = 8 bit
a => 97 (from ASCII table)
97 will be stored in binary 
011000001

3. float -> 4 bytes
e.g. 12.2,2.6,8.423 etc.. 

4. double -> 8 bytes
e.g. 12.12312423423423,12312.31231231 etc..

5. boolean -> 1 byte 
can be also stored with true, false
it can have only 2 values 0,1

*/

#include<iostream>
using namespace std;
int main()
{
    // variable declaration
    int x;

    // assigning the value to variable
    x = 10;
    cout << x << endl;

    // sum of two numbers
    int num1 = 20;
    cout << "num1 = " << num1 << endl;
    int num2 = 30;
    cout << "num2 = " << num2 << endl;
    cout << "Sum of two numbers = " << num1 + num2 << endl;

    // char
    char c = 'a';
    cout << "char c = " << c << endl;

    // float
    float f = 2.31;
    cout << "float f = " << f << endl;

    // double
    double d = 3.1231;
    cout << "double d = " << d << endl;

    // boolean
    bool b = 0;
    cout << b << endl;

    bool b1 = true;
    cout << b1 << endl;

    bool b2 = false;
    cout << b2 << endl;

}