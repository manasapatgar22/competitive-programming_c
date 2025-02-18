/* Mr. Robot’s Password
Problem Statement – Mr. Robot is making a website, in which there is a tab to create a password. As other websites, there are rules so that the password gets complex and none can predict the password for another. So he gave some rules like:

At least one numeric digit
At Least one Small/Lowercase Letter
At Least one Capital/Uppercase Letter
Must not have space 
Must not have slash (/)
At least 6 characters
If someone inputs an invalid password, the code prints: “Invalid password, try again”.

Otherwise, it prints: “password valid”.

Input Format:

A line with a given string as a password

Output Format:

If someone inputs an invalid password, the code prints: “Invalid password, try again”.
Otherwise, it prints: “password valid”, without the quotation marks.
Constraints:

Number of character in the given string <=10^9
Sample input 1: 

abjnlL09

Sample output 1: 

password valid

Sample input 2: 

jjnaskpk

Sample output 2: 

Invalid password, try again*/
 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>

int main() {

char password [1000];
int digit=0, lower = 0,upper =0,space = 0, slash = 0;

printf("Enter a password: ");
scanf("%s",password);

for (int i=0; strlen(password); i++) {
if (isdigit(password[i]))
  digit ==1;
if (islower (password[i]))
lower == 1;
if (isupper(password[i]))
  upper == 1;
if (password[i])
  space == 1;
if (password[i])
  slash == 1;
}
if (strlen(password) < 6 || digit || lower tupper || space || slash) {
printf("Invalid password. try again");
} else {
printf("password valid");
}
return 0:
}

