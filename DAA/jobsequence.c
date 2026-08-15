#include <stdio.h>

int main() {
    int n;
    printf("Enter number of jobs: ");
    scanf("%d", &n);

    int profit[n], deadline[n];
    char id[n];

    printf("Enter job details (id deadline profit):\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c %d %d", &id[i], &deadline[i], &profit[i]);
    }

    // Find maximum deadline
    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (deadline[i] > maxDeadline) {
            maxDeadline = deadline[i];
        }
    }

    // Initialize slots with 0 (empty)
    char slot[maxDeadline + 1];
    for (int i = 1; i <= maxDeadline; i++) {
        slot[i] = 0;
    }

    int totalProfit = 0;

    // Greedy approach: pick jobs one by one
    for (int k = 0; k < n; k++) {
        // find job with maximum profit among remaining
        int maxP = -1, index = -1;
        for (int i = 0; i < n; i++) {
            if (profit[i] > maxP) {
                maxP = profit[i];
                index = i;
            }
        }

        // mark this job as used
        profit[index] = -1;

        // place job in latest available slot before its deadline
        for (int j = deadline[index]; j > 0; j--) {
            if (slot[j] == 0) {
                slot[j] = id[index]; // put job id in slot
                totalProfit += maxP;
                break;
            }
        }
    }

    printf("\nJob sequence for maximum profit: ");
    for (int i = 1; i <= maxDeadline; i++) {
        if (slot[i] != 0) {
            printf("%c ", slot[i]);
        }
    }

    printf("\nTotal Profit = %d\n", totalProfit);
    return 0;
}