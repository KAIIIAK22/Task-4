#include <iostream>

using namespace std;
void elxs (int a,int b=1)
{
    for (int i =0;i<a;i++) cout <<" ";
    for (int i =0;i<b;i++) cout <<"*";
    cout <<endl;
    if (a>1) elxs(a-1,b+2);
    if (b==1)
    {
        for (int i =0;i<a;i++) cout <<" ";
        cout <<"*";
    }
}

int main()
{

    int start;
    cin >> start;
    elxs(start);
}
