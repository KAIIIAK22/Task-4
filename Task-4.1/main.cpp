#include <iostream>

using namespace std;
int counting (int a)
{
    if (a/10!=0)
        return a%10+counting(a/10);
    else
        return a%10;
}

int main()
{

    int start;
    cin >> start;
    cout <<counting(start);
}
