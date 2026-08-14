#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    string num[26] = {
        ".-",   
        "-...", 
        "-.-.", 
        "-..",  
        ".",   
        "..-.", 
        "--.",  
        "....", 
        "..",  
        ".---", 
        "-.-", 
        ".-..", 
        "--",   
        "-.",   
        "---",  
        ".--.", 
        "--.-", 
        ".-.",  
        "...",  
        "-",    
        "..-",  
        "...-", 
        ".--",  
        "-..-", 
        "-.--", 
        "--.."  
    };
    
    string result;
    for (int i=0; i<n; i++) {
        string temp;
        cin >> temp;
        for (int j=0; j<26; j++) 
            if (temp == num[j]) {
                result += char('A'+j);
                break;
            }
 
    
    }
    cout << result << endl;
    return 0;
}