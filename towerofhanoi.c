#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char helper)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from %c to %c", source, destination);
        return;
    }
    towerOfHanoi(n-1, source, helper, destination);
    printf("\n Move disk %d from %c to %c", n, source, destination);
    towerOfHanoi(n-1, helper, destination, source);
}

int main()
{
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}

