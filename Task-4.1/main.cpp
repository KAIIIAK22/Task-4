#include <iostream>

using namespace std;

int counting(int maxim)
{
    char ch;
    cin.get(ch);
    if (ch>='0' && ch<='9') counting(maxim+(int)ch - (int)'0');
    else return  maxim;
}
int main()
{
    int start = 0;
    cout <<counting(start);
}
