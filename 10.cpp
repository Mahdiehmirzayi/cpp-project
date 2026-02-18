#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int num;
    cout << "یک عدد در مبنای دهدهی وارد کنید:" << endl;
    cin >> num ;
    cout << "عدد وارد شده در مبنای دودویی:" << bitset<32>(num) << endl ;
    return 0;
}
