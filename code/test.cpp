#include <iostream>
using namespace std;

void mystery1(string a, string &b)
{
    a.erase(0, 1);
    b += a[0];
    b.insert(3, "F00");
}
int main()
{
    string a = "marty";
    string b = "stepp";
    mystery1(a, b);
    cout << a << " " << b << endl;
    return 0;
}