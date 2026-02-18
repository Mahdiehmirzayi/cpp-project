#include <iostream>

using namespace std;

int main()
{
    int num, largest=0, sum=0 ;
    cout << " برای اتمام ۰ وارد کنید" ;
    while (true){
        cout << "یک عدد وارد کنید:";
        cin >> num;
        if (num==0){
            break;
        }

        sum += num;

        if (num > largest){
            largest = num;
        }
    }
    cout << "بزرگ ترین عدد:" << largest << endl ;
    cout << "مجموع اعداد:" << sum << endl ;
    return 0;
}
