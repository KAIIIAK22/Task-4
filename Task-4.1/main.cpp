#include <iostream>

using namespace std;
int counting(int maxim, int ten=1)
{
    if (maxim/ten>=10) return counting(maxim, ten*10)+(maxim/ten)%10;
    else return (int) (maxim/ten);
}

int main()
{
    int start;
    cin >> start;
    cout <<counting(start);
}
