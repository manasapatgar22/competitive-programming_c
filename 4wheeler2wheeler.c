/*2. An automobile company manufactures both a 
two wheeler (TW) and a four wheeler (FW). 
A company manager wants to make the production 
of both types of vehicle 
according to the given data below:

1st data, Total number of vehicle =v
(two-wheeler + four-wheeler)
2nd data, Total number of wheels = W
The task is to find how many two-wheelers 
as well as four-wheelers need to manufacture 
as per the given data.

Constraints :

2<=W  
W%2=0, 
V<W, 
Print “INVALID INPUT” , 
if inputs did not meet the 
constraints.


Example :

Input :
200 -> Value of V
540 -> Value of W

fw=70 tw=130
*/


#include <stdio.h>

void findVehicles(int V, int W) {
    if (W % 2 != 0 || V >= W || V < 1) {
        printf("INVALID INPUT\n");
        return;
    }

    int FW = (W - (2 * V)) / 2;
    int TW = V - FW;

    if (TW < 0 || FW < 0) {
        printf("INVALID INPUT\n");
    } else {
        printf("TW = %d, FW = %d\n", TW, FW);
    }
}

int main() {
    int V, W;
    printf("Enter the total number of vehicles: ");
    scanf("%d", &V);
    printf("Enter the total number of wheels: ");
    scanf("%d", &W);

    findVehicles(V, W);
    return 0;
}
