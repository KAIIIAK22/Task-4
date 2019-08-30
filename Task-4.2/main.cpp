#include <iostream>

using namespace std;

void StarLine (int length)
{
    for(;length>0;length--) cout << "*";
}

void SpaceLine (int length)
{
    for(;length>0;length--) cout << " ";
}
int ElxSize ()
{
    int Elxsize;
    cout << "Size:";
    cin >> Elxsize;
    return Elxsize;
}

void DrawElxLeaves (int SiZe)
{
    int b = SiZe;
    for (int i = 0;i<SiZe;i++)
    {
        SpaceLine (b);
        StarLine (1+i*2);
        cout << endl;
        b--;
    }
}

void DrawLog(int SiZe)
{
    int b = SiZe;
    SpaceLine (b);
    StarLine (1);
}

int main()
{
    int leng = ElxSize();
    DrawElxLeaves(leng);
    DrawLog(leng);
}
