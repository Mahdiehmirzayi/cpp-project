#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout << "enter a number:";
    cin >> n ;

    for (int i=10 ; i<n ; i++){
        if (i%2==0){
            cout << i << endl ;
        }
    }
    return 0;
}
