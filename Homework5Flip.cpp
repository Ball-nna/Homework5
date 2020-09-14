#include <iostream>
#include <string>

using namespace std;

int main () {
    string data;
    cout << "Input String : ";
    cin >> data;
    cout << "Reverse String : ";
    for (int i = data.length()-1; i >= 0; i--) //นับตัวอักษรและนับจากหลังมาหน้า
    {
        cout << (char) toupper(data[i]);//เปลี่ยนตัวเล็กไปใหญ่
    }
    cout << endl;
    system("pause");
    return 0;
}