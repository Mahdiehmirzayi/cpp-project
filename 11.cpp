#include <iostream>

using namespace std;

void evenodd (int num){
    if ( num%2 == 0)
        cout << "عدد زوج است" << endl ;
    else
        cout << "عدد فرد است" << endl ;
}

int main()
{
    int a;
    cout << "یک عدد وارد کنید:" ;
    cin >> a;
    evenodd(a);

    return 0;
}
