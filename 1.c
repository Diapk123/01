#include <stdio.h>

int main() {
    int total_budget = 0;
    int cost_per_event = 200;

    for (int day = 2; day <= 100; day += 2) {
        total_budget += cost_per_event;
    }

    printf("Total budget allocated for even-day events: %d Rs\n", total_budget);
    return 0;
}
