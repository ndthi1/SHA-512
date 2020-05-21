#include <iostream>
#include "header.h"

using std::string;
using std::cout;
using std::endl;

//avoinfd

int main(int argc, char* argv[])
{
    cout << "input password:";
        string input1;
    std::cin >> input1;// nhập pass
    string output1 = sha512(input1);

    string input2 = "thi";//vd pass dc lưu trữ là "Thi"
    string output2 = sha512(input2);

    cout << "sha512('" << input1 << "'):" << output1 << endl;
    cout << "sha512('" << input2 << "'):" << output2 << endl;
    if (output1 == output2)
        cout << "Accept";
    else
        cout << "Deny";
    return 0;
}
