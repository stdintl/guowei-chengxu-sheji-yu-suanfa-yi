#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (; n>0; n--) {
        char str1[10], str2[10];
        cin >> str1 >> str2;
        if (strcmp (str1, str2) == 0)
            cout << "Tie" << endl;
        else if (strcmp(str1, "Rock")==0 && strcmp(str2, "Scissors")==0) 
            cout << "Player1" << endl;
        else if (strcmp(str1, "Scissors")==0 && strcmp(str2, "Paper")==0)
            cout << "Player1" << endl;
        else if (strcmp(str1, "Paper")==0 && strcmp(str2, "Rock")==0)
         
        cout << "Player1" << endl;
        else 
            cout << "Player2" << endl;
    }

    return 0;
}