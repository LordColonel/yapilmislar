#include <iostream>

using namespace std;

int main()
{
    cout<<"Sayi giriniz:";
    int s;
    cin>>s;
for(int i=1;i<=s;i++)
{
for(int j=1;j<=i;j++)
{

cout << "*";
}
cout<<endl;
}
return 0;
}
