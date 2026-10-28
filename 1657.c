#include <stdio.h>

int () {
     score; // Uninitialized local variable (contains garbage value)
    
    // Bug: Reading 'score' before assigning it a value
    print("Your score is: %d\n", score);
    
    retur 0;
}
