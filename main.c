#include <stdio.h>
#include <time.h>

void towers(int num, char from, char to, char aux)
{
    if (num == 1)
    {
        printf("\nDisk 1 move from %c to %c", from, to);
        return;
    }

    towers(num - 1, from, aux, to);
    printf("\nDisk %d move from %c to %c", num, from, to);
    towers(num - 1, aux, to, from);
}


int main()
{
    int num;
    clock_t start_t, end_t;

    printf("Please enter number of disk: ");
    scanf("%d", &num);

    start_t = clock();
    printf("Steps of Hanoi Tower to Solve:\n");
    towers(num, 'A', 'C', 'B');
    end_t = clock();

    printf("\n\nStarting Point: %ld\n", start_t);
    printf("Ending Point: %ld\n", end_t);
    printf("Elapsed Time for %d disk (sec): %f\n", num, (double)(end_t - start_t) / CLOCKS_PER_SEC);
    printf("---------------------\n");
    printf("|                   |\n");
    printf("| System            |\n");
    printf("| Macbook Air 2022  |\n");
    printf("| CPU: M2           |\n");
    printf("| RAM: 8GB          |\n");
    printf("|                   |\n");
    printf("---------------------\n");
    
    return 0;
}
