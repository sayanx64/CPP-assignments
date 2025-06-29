#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hour;
    int minute;
    int second;
} Time;


Time calculate_difference(Time t1, Time t2) {
    Time diff;

    int tsec1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int tsec2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

    if (tsec1 > tsec2) {
        int temp = tsec1;
        tsec1 = tsec2;
        tsec2 = temp;
    }

    int difference_in_seconds = tsec2 - tsec1;

    diff.hour = difference_in_seconds / 3600;
    difference_in_seconds %= 3600;
    diff.minute = difference_in_seconds / 60;
    diff.second = difference_in_seconds % 60;

    return diff;
}

int main() {
    Time t1, t2, diff;

    printf("Enter the first time:\n");
    printf("Hour: ");
    scanf("%d", &t1.hour);
    printf("Minute: ");
    scanf("%d", &t1.minute);
    printf("Second: ");
    scanf("%d", &t1.second);

    printf("\nEnter the second time:\n");
    printf("Hour: ");
    scanf("%d", &t2.hour);
    printf("Minute: ");
    scanf("%d", &t2.minute);
    printf("Second: ");
    scanf("%d", &t2.second);

    diff = calculate_difference(t1, t2);

    printf("\nFirst Time: %02d:%02d:%02d\n", t1.hour, t1.minute, t1.second);
    printf("Second Time: %02d:%02d:%02d\n", t2.hour, t2.minute, t2.second);
    printf("Difference between time periods: %02d:%02d:%02d\n", diff.hour, diff.minute, diff.second);

    return 0;
}
