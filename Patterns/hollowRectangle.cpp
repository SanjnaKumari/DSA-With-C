#include <iostream>
using namespace std;

int main (){
    int length, width;
    cout << "Enter the value of length: ";
    cin >> length;
    cout << "Enter the value of width: ";
    cin >> width;
    cout << "Hollow Rectangle of size " << length << " x " << width << " is:" << endl;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            if (i ==0 || i == length-1){
                cout << "* ";
            }
            else{
                if ((j == 0 || j == width-1)){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
            
        }
        cout << endl;
    }
    return 0;
}