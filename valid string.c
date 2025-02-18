/*Problem Statement – Given a string S(input 
consisting) of ‘*’ and ‘#’. 
s= "*###*"
The length of the string is variable.
 The task is to find the minimum number of 
 ‘*’ or ‘#’ to make it a valid string. 
 The string is considered valid if the number 
 of ‘*’ and ‘#’ are equal.
 The ‘*’ and ‘#’ 
 can be at any position in the string.
Note : The output will be a positive or
 negative integer based on number of ‘*’
 and ‘#’ in the input string.

(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:
###*** -> Value of S
Output :0
input 2:
####*
o/p : -1
0 → number of * and # are equal*/


// code for comparing letters

#include <stdio.h>

int main() {
    char arr[100];  
    int a = 0, b = 0, i = 0;  

    printf("Enter the string: ");
    scanf("%s", arr);  

    while (arr[i] != '\0') { 
        if (arr[i] == '*') { 
            a++;  
        } else if (arr[i] == '#') { 
            b++;  
        }
        i++; 
    }

    if (a > b) { 
        printf("1\n"); 
    } else if (a < b) { 
        printf("-1\n"); 
    } else { 
        printf("0\n"); 
    }

    return 0; 
}
