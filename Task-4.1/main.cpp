#include <iostream>

using namespace std;

int counting(int maxim, int ten)
{
    int ret=0;
    if (maxim/ten>=10)
    {
        ret=counting(maxim, ten*10);
        while(maxim/ten>=10)
        {
           maxim -=ten*10;
        }
        return ret+(int)maxim/ten;
    }
    else return (int) (maxim/ten);


}
int main()
{
    int start;
    cin >> start;
    cout <<counting(start,1);
}
