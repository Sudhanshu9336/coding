#include<stdio.h>

int main() {
    int a[20], n, data, l, mid, r;
    
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements of an array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &data);

    l = 0;
    r = n - 1;

    while(l <= r) {
        ///mid = (l + r) / 2;
        mid=l+(r-l)/2;

        if(data == a[mid]) {
            printf("Your data is found at index: %d\n", mid);
            break;
        } else if(data > a[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    if (l > r) {
        printf("Your data is not found in the array.\n");
    }

    return 0;
}

     
