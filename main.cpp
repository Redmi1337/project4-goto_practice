#include <iostream>
using namespace std;

int main()
{
    string input = "";
    cout << "Enter your phrase(no spaces, still didnt figure it out ;( ";
    cin >> input;
    if (input == "PLEASE")
    {
        goto PLEASE_SPEED_I_NEED_THIS;
    }
    else
    {
        cout << "Try writing \"PLEASE\"" << endl;
        system("pause");
        return 0;
    }
PLEASE_SPEED_I_NEED_THIS:
    cout << "PLEASE SPEED I NEED THIS (0-0)" << endl;
    system("pause");
    return 0;
}