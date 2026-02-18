#include <iostream>

using namespace std;
int find(int a,int b,int c){
    int smallest = a ;

    if (b < smallest)
        smallest = b ;
    if (c < smallest)
        smallest = c ;

    return smallest ;
}

int main()
{
    int a,b,c ;
    cout << "سه عدد وارد کنید:" << endl;
    cin >> a >> b >> c ;
    cout << find(a,b,c) << endl ;
    return 0;
}
