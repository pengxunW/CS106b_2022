#include <iostream>
#include <vector>
using namespace std;
int main()
{   
    cout << "这是一个打印 vector 的程序" << endl;
    cout << "[";
    vector<int> vec = {10, 20, 30, 40};

    for (int i = 0; i < vec.size(); i++)
    {
        if (i > 0)
        {
            cout << ", ";
        }
        cout << vec[i];
    }
    cout << "]" << endl;
}