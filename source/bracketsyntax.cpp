#include <iostream>
#include "stack.h"
#include <string>
#include <fstream>

using namespace cs273;

int main()
{

    //ask the user to enter the file to scan, then search file for unpaired brackets

    std::cout << "Select a file to scan for unpaired brackets:" << std::endl;
    std::cout << "1.stack.h" << std::endl;
    std::cout << "2.stack.cpp" << std::endl;
    int input;
    std::cin >> input;
    std::string file;
    switch (input)
    {
    case 1:
        file = "stackh.txt";
        break;
    case 2:
        file = "stackcpp.txt";
        break;
        break;
    }
    cs273::stack<char> a;
    std::ifstream fio(file); // Open the chosen file for input
    char s;
    int flag = 0;
    while (!fio.eof())
    {
        //code assisted by https://www.includehelp.com/data-structure-tutorial/check-for-balanced-parentheses-by-using-stacks-cpp-program.aspx
        fio.get(s);
        if (s == '{' || s == '[' || s == '(')
        {
            //push function to enter terms in a stack
            a.push(s);
            flag = 1;
        }
        if (!a.empty())
        {

            if (s == '}')
            {
                if (a.top() == '{')
                // top of the stack
                {
                    a.pop();
                    //pop function to delete terms from the top of array
                    continue;
                }
            }
            if (s == ']')
            {
                if (a.top() == '[')
                {
                    a.pop();
                    continue;
                }
            }
            if (s == ')')
            {
                if (a.top() == '(')
                {
                    a.pop();
                    continue;
                }
            }
        }
    }
    std::cout << "Do all of the brackets have a buddy?" << std::endl;
    if ((a.empty()) && (flag == 1))
        std::cout << "YES, all open brackets meet a closed bracket" << std::endl;
    else
        std::cout << "NO, and the offending bracket is " << a.top() << std::endl;
    fio.clear();
    fio.close();

    return 0;
}