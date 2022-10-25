//find matrix 4x4 in c++.
// Source: https://stackoverflow.com/a/61796024 .
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    char word[5][5] = {"1234", "5678", "9000", "0000"};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << word[j][i]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}
