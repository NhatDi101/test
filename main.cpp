#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int year = 0;
    cin >> year;
    if(year % 400 == 0) cout << "nam nhuan";
    else if(year % 100 != 0 && year % 4 ==0) cout << "nam nhuan";
    else cout << "nam ko nhuan";
    return 0;
}