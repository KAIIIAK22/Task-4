#include <iostream>

using namespace std;
void ObnullIntArray (int arr[],int length)
{
    for(arr[0]=length-1;arr[0]>0;arr[0]--)
        arr[arr[0]]=0;
}
int CardNumberCheck ()
{
    int a;
    cout<<"Vvedi nomer kartochki: ";
    cin>>a;
    return a;
}
int MoneyAmountCheck ()
{
    int a;
    cout<<"Skolko polozhit: ";
    cin>>a;
    return a;
}

bool AddMoney (int arr[],int length,int MoneyAmount,int CardNomer)
{
  if (CardNomer<=length)
  {
  arr[CardNomer-1]+=MoneyAmount;
  return 1;
  }
  else return 0;
}
void ShowIntArray (int arr[],int length)
{
    int a;
    for(a=0;a<10;a++)
    cout<<arr[a] <<" ";
}



int main()
{
    const int leng = 10;
    int arr[leng];
    ObnullIntArray(arr,leng);
    while(1)
    {
        if (AddMoney(arr,leng,MoneyAmountCheck(),CardNumberCheck()))
        ShowIntArray(arr,leng);
        else cout<<"Error!!! Net takoi cartochki";
        cout<<endl;
    }
}
