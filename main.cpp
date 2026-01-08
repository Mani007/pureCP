#include <iostream>
using namespace std;
int main()
{
    cout << "Pure CP setup" << endl;
    int x;
    cin >> x;
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
} 