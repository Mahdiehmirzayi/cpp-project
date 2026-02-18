#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout << "enter a number:";
    cin >> n ;

    for (int i=2 ; i<n ; i+=2){
        cout << i << endl ;
    }
    return 0;
}
