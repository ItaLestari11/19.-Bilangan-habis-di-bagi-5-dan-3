#include<iostream>
using namespace std;

int main(){
int a;

cout<<"Menentukan suatu bilangan habis dibagi 5 dan 3"<<endl;
cout<<"ITA LESTARI"<<endl;
cout<<"311810183"<<endl;
cout<<"masukan nilai"<<endl;
cin>>a;

if(a%3==0 && a%5==0)
    cout<<"Merupakan bilangan yang habis dibagi 5 dan 3"<<endl;
    else
        cout<<"Merupakan bilangan yang TIDAK habis dibagi 5 dan 3"<<endl;
    return 0;
}
