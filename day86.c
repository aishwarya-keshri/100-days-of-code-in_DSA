#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int low = 0, high = n;
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (mid == n / mid) {
            ans = mid;
            break;
        }
        else if (mid < n / mid) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}