//from only one side

#include <stdio.h>

void main() {
int user1=1000,user2=1000,transamount=0;
while(1){
printf("Enter the amount to be transfer to 1->2: ");
scanf("%d",&transamount);
if(transamount>user1){
    printf("Insufficient Balance.Enter valid amount!\n");
}
    else{
        user1-=transamount;
        user2+=transamount;
        printf("Transaction successful! User1 balance:%d\n",user1);
        break;
        }
    
}
}



//two side transaction
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int balance;
} User;

void transferMoney(User *sender, User *receiver, int amount) {
    if (amount > sender->balance) {
        printf("Insufficient Balance. Enter a valid amount!\n");
    } else {
        sender->balance -= amount;
        receiver->balance += amount;
        printf("Transaction successful! %s's balance: %d\n", sender->name, sender->balance);
        printf("%s's new balance: %d\n", receiver->name, receiver->balance);
    }
}

int main() {
    User users[2] = {
        {"User  1", 1000},
        {"User  2", 1000}
    };
    int senderid, receiverid, transamount = 0;

    while (1) {
        printf("1 - User 1\n");
        printf("2 - User 2\n");
        printf("Select sender (1 or 2): ");
        scanf("%d", &senderid);
        
        // Adjust for zero-based indexing
        senderid -= 1;

        // Validate sender index
        if (senderid < 0 || senderid > 1) {
            printf("Invalid selection. Please choose 1 or 2.\n");
            continue;
        }

        printf("Select receiver (1 or 2): ");
        scanf("%d", &receiverid);
        
        // Adjust for zero-based indexing
        receiverid -= 1;

        // Validate receiver index
        if (receiverid < 0 || receiverid > 1 || receiverid == senderid) {
            printf("Invalid selection. Please choose a different user.\n");
            continue;
        }

        printf("Enter the amount to be transferred from %s to %s: ", users[senderid].name, users[receiverid].name);
        scanf("%d", &transamount);
        
        transferMoney(&users[senderid], &users[receiverid], transamount);
        
        // Break the loop after a successful transaction
        if (transamount <= users[senderid].balance) {
            break;
        }
    }

    return 0;
}
