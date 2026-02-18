#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "یک عدد وارد کنید:" ;
    cin >> n;
    cout << "اعداد کوچکتر از" << n << ":" << endl ;

    for (int i=1 ; i<n ; i++){
        cout << i << endl ;
    }
    return 0;
}
