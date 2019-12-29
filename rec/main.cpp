
// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Print balanced and remove
// extra brackets from string
void balancedString(string str)
{
    int count = 0, i;
    int n = str.length();

    // Maintain a count for opening brackets
    // Traversing string
    for (i = 0; i < n; i++) {

        // check if opening bracket
        if (str[i] == '(') {

            // print str[i] and increment count by 1
            cout << str[i];
            count++;
        }

        // check if closing bracket and count != 0
        else if (str[i] == ')' && count != 0) {
            cout << str[i];

            // decrement count by 1
            count--;
        }

        // if str[i] not a closing brackets
        // print it
        else if (str[i] != ')')
            cout << str[i];
    }

    // balanced brackets if opening brackets
    // are more then closing brackets
    if (count != 0)
        // print remaining closing brackets
        for (i = 0; i < count; i++)
           cout << ")";
}

// Driver code
int main()
{

    string str = "(a+b))(";
     balancedString(str);

    return 0;
}
