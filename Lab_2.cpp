//NAME: Varnika Maurya
//PRN: 24070123160
//EXP-2
//Program 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Ïnteger = "<<a<<"and size is"<<sizeof(a)<<"bytes"<<endl;
    float b;
    cout<<"Enter any float: ";
    cin>>b;
    cout<<"float = "<<b<<"and size is"<<sizeof(b)<<"bytes"<<endl;
    string c;
    cout<<"Enter any word: ";
    cin>>c;
    cout<<"String = "<<c<<"and size is"<<sizeof(c)<<"bytes"<<endl;
    double d;
    cout<<"Enter any number with many decimal: ";
    cin>>d;
    cout<<"Double = "<<d<<"and size is"<<sizeof(d)<<"bytes"<<endl;
    char e;
    cout<<"Enter any character: ";
    cin>>e;
    cout<<"Character = "<<e<<"and size is"<<sizeof(e)<<"bytes"<<endl;
    bool f;
    cout<<"Enter true/false ";
    cin>>f;
    cout<<"Boolean = "<<f<<"and size is"<<sizeof(f)<<"bytes"<<endl;
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ Lab_2.cpp -o Lab_2
PS C:\Users\DELL\Desktop\C++> .\Lab_2.exe
Enter any integer: 5
Integer = 5and size is4bytes
Enter any float: 4.5
float = 4.5and size is4bytes
Enter any word: SIT
String = SITand size is24bytes
Enter any number with many decimal: 7.562358
Double = 7.56236and size is8bytes
Enter any character: &
Character = &and size is1bytes
Enter true/false true
Boolean = 1and size is1bytes
*/
