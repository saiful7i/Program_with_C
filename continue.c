#include <stdio.h>
 
// Driver Code
int main()
{
 
    int i = 0, j = 0;
 
    // Iterate a loop over the
    // range [0, 5]
    for (int i = 0; i < 5; i++) {
 
        printf("i = %d, j = ", i);
 
        // Iterate a loop over the
        // range [0, 5]
        for (int j = 0; j < 5; j++) {
 
            // Continue Statement
            if (j == 2)
                continue;
 
            printf("%d ", j);
        }
 
        printf("\n");
    }
 
    return 0;
}
