#include <iostream>
using namespace std;

int main() {
    int score = 200;
    int *myp = &score;
    int &another_score = score;
    printf("Value of the score: %d\n",score);
//    printf("Value of the another_score: %d\n",another_score);
    printf("Value of the score pointer: %p\n",myp);
    
    another_score = 900;
    printf("Value of the score: %d\n",score);
//    printf("Value of the another_score: %d\n",another_score);
    printf("Value of the score pointer: %p\n",myp);
    
    return 0;
    
}