#include <iostream>

using namespace std;

void convert (int second) {
    int hours = second / 3600 ;
    int minutes = (second%3600) / 60 ;
    int seconds = second % 60;

    cout << "ساعت:" << hours << endl ;
    cout << "دقیقه:" << minutes << endl ;
    cout << "ثانیه:" << seconds << endl ;
}
int main()
{
    int a ;
    cout << "تعداد ثانیه را وارد کنید:" << endl;
    cin >> a ;
    convert (a);

    return 0;
}
