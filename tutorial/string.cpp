#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    str = "string objecct";
    cout << str << endl;

    str = "";
    if(str.empty())
        cout << "empty.\n";
    else
        cout << "not empty.\n";
    str = "abcd";
    if(str.empty())
        cout << "empty.\n";
    else
        cout << "not empty.\n";

    cout << str.size() << "\n";
    cout << str.length() << "\n";

    str = "hogehoge";
    cout << str << endl;
    str.clear();
    cout << str << endl;

}