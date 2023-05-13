#include <iostream>
using namespace std;

int main() {
    const int life = 14;
    int card = 25;
    int my_card = card;
    int *myp;
    
    myp = &card;
    my_card = *myp; //pointer dereference
    printf("Value of the card: %d\n",my_card);
    printf("Value of the card: %p",myp);
    return 0;
    
}