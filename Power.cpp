#include <iostream>
using namespace std;
int main() 
{   
    int p;
    float num, ans = 1;
    cout << "Enter a number and its power respectively: ";
    cin >> num >> p;
    cout << num << "^" << p << " = ";
    while (p != 0) {
        ans *= num;
        --p;
    }
    cout << ans;   
}
