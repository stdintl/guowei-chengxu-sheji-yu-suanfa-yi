#include <iostream>
using namespace std;

int main () {
    const int num = 100000;
    char str [num];
    cin >> str;
    int i=0;
    for (; str[i]; i++) {
        int j = 0;
        for (; str[j]; j++) {
            if (str[i]==str[j] && i!=j)
                break;
        }
        if (str[j]==0) {
            cout << str[i] << endl;
            return 0;
        }
    } 
    if (str[i] == 0) {
        cout << "no" << endl;
    }

    return 0;
}