#include <iostream>
#include "header.h"

using std::string;
using std::cout;
using std::endl;

//avoinfds

int main(int argc, char* argv[])
{
    cout << "input password:";
        string input1;
    std::cin >> input1;
    string output2 = sha512(input1);
    string input2 = "thi";S
    
    string output1 = sha512(input2);

    cout << "sha512('" << input2 << "'):" << output1 << endl;
    if (output1 == output2)
        cout << "Accept";
    else
        cout << "Deny";
    return 0;
}
