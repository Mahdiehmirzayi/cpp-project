#include <iostream>

using namespace std;

int main()
{
    int a,b,choice ;
    cout << "دو عدد وارد کنید:";
    cin >> a >> b ;
    cout << "۱.نمایش اعداد زوج" <<endl << "۲.نمایش اعداد فرد" << endl ;
    cin >> choice ;

    if (choice==1){
        for (int i=a ; i<=b ; i++){
            if(i%2==0){
                cout << i << endl;
            }
        }
    }
    else if (choice==2){
        for (int i=a ; i<=b ; i++){
            if (i%2 != 0){
                cout << i << endl ;
            }
        }
    }
    else{
        cout << "انتخاب نا معتبر" ;
    }


    return 0;
}
