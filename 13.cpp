#include <iostream>

using namespace std;

void rectangle (double a , double b){
    double area = a * b ;
    double perimeter = 2 * (a + b) ;
    cout << "مساحت:" << area << endl ;
    cout << "محیط:" << perimeter << endl ;
}

int main(){
    double a , b ;
    cout << "طول و عرض مستطیل را وارد کنید:" << endl;
    cin >> a >> b ;
    rectangle (a,b);

    return 0;
}
