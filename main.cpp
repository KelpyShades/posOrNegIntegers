#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "...Program To Check If A Number Is Positive Or Negative..." << endl;
    cout << "\nEnter Your Number: ";
    cin >>x;
    if (x>0){
        cout << "\nYour Number Is Positive" <<endl;
    }else if (x<0) {
        cout << "\nYour Number Is Negative" <<endl;
    }else {
        cout << "\nYour Number Is Neutral" <<endl;
    }
    return 0;
}
