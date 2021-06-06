 #include <iostream>
#include <string.h>
using namespace std;
int main()
{  
    char DNA[100];
    char rev[100];
    int i, j, len=0;
    cout<<"Enter the DNA sequence: ";
    cin >> DNA;
    len = strlen(DNA);
    cout<<"Reverse DNA sequence: ";
    for(i = len - 1; i >= 0; i--) 
    {
        cout<<DNA[i];
    }
    return 0;
}
