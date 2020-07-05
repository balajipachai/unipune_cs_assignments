#include <stdio.h>
#include <math.h>

void towerOfHanoi(int n, char fromRod, char toRod, char auxillaryRod)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to rod %c\n", fromRod, toRod);
        return;
    }

    towerOfHanoi(n - 1, fromRod, auxillaryRod, toRod);
    printf("Move disk from rod %c to rod %c\n", fromRod, toRod);

    towerOfHanoi(n - 1, auxillaryRod, toRod, fromRod);
}

int main()
{
    int n;
    printf("Enter the number of disks::: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    int totalMoves = pow(2, n) - 1;
    printf("Total number of moves required = %d\n", totalMoves);
    return 0;
}