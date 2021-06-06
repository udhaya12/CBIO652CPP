   #include <iostream>
using namespace std; 
void result(int n)
{    
    for (int num = n; num >0; num--)
    {                             
             if (num % 3 == 0)
            cout << num << " ";
    }
}
 int main()
{    
    int n = 100;
    result(n);
    return 0;
}
