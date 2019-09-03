#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class masiv
{
    private:
        unsigned short  int *mas;
    public:
        int masLen;
        masiv(int len);
        ~masiv();
        unsigned short int getElem(int a) {if (a<masLen)return mas[a];}
        void random();//randomize
        int maxim();//maximum value
        int minim();//minimum value
        bool isEven(int elem); //Chetnii?
        void deistvie();//Chetnii-1, Ne Chetnii*2
        void Clear(); //Clear masive

};

masiv::masiv(int len)
{
    masLen=len;
    mas = new unsigned short int[masLen];
}

masiv::~masiv()
{
    delete [] mas;
}

void masiv::random() //randomize
{
    srand((unsigned short) time(0));
    for(int i=0;i<masLen;i++) mas[i]=rand();
}

int masiv::maxim() //maximum value
{
    short int maxi=0;
    for(int i=0;i<masLen;i++)
        if (mas[i]>maxi) maxi=mas[i];
    return maxi;
}

int masiv::minim() //minimum value
{
    short int mini=mas[0];
    for(int i=0;i<masLen;i++)
        if (mas[i]<mini) mini=mas[i];
    return mini;
}

 bool masiv::isEven(int elem) //Chetnii?
 {
    if (mas[elem]%2==1) return false;
    else return true;
 }

 void masiv::deistvie() //Chetnii-1, Ne Chetnii*2
 {
    for(int i=0;i<masLen;i++)
        if (mas[i]%2==1) mas[i]*=2;
    else mas[i]-=1;
 }

 void masiv::Clear() //Clear masive
 {
    for(int i=0;i<masLen;i++) mas[i]=0;
 }

//===============================================================//Char
bool Charfunk(int i)
{
    if ((i>=97&&i<=122)||(i>=65&&i<=90)) return 1;
    else  return 0;
}
//===============================================================//

int main()
{

    masiv a(2);
    a.random();
    cout << a.getElem(0)<<endl;
    cout << a.getElem(1)<<endl;
    cout << a.maxim()<<endl;//maximum value
    cout << a.minim()<<endl;//minimum value
    cout << a.isEven(0)<<endl;//Chetnii?
    cout << a.isEven(1)<<endl;//Chetnii?
    a.deistvie(); //Chetnii-1, Ne Chetnii*2
    cout << a.getElem(0)<<endl;
    cout << a.getElem(1)<<endl;
    a.Clear(); //Clear masive
    cout << a.getElem(0)<<endl;
    cout << a.getElem(1)<<endl;
//===============================================================//Char
    int b;
    cin >> b;
    if(Charfunk(b)) cout <<(char)b;
    else cout <<b;
//===============================================================//
}
