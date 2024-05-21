#include <stdio.h>

int main(void);
int binary_search(int x, int v[], int n);
int binary_search_v2(int x, int v[], int n);
void print_count(int count);

void print_count(int count){
    printf("Loop ran %d times\n", count);
}

int binary_search_v2(int x, int v[], int n){
    unsigned int low, mid, high;
    int count = 0;
    
    low = 0;
    high = n - 1;

    if (x < v[low]){
        printf("V2:");
        print_count(1);
        return -1;
    }
    else if(x > v[high]){
        printf("V2:");
        print_count(1);
        return -1;
    }


    
    while (low <= high) {
        ++count;
        if (v[low] != x)
            low++;
        else{
            printf("v2:");
            print_count(count);
            return low;
        }
    }
    printf("V2:");
    print_count(count);
    return -1;
}

int binary_search(int x, int v[], int n){
    unsigned int low, high, mid;

    int count = 0;

    low = 0;
    high = n - 1;

    if (x < v[low]){
        printf("V1:");
        print_count(1);
        return -1;
    }
    else if(x > v[high]){
        printf("V1:");
        print_count(1);
        return -1;
    }

    while (low <= high) {
        ++count;
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else{
            printf("V1:");
            print_count(count);
            return mid;
        }
    }
    printf("V1:");
    print_count(count);

    return -1;
}

int main(void){
    int arr[] = {2, 4, 10, 68, 73, 281};
    int x;
    int val;
    int val2;

    printf("Enter a number: ");
    scanf("%d", &x);
    val = binary_search(x, arr, 6);
    val2 = binary_search_v2(x, arr, 6);

    if (val > -1)
        printf("Found in FIRST search! Value is: %d\n", x);
    else
        printf("Not Found!\n%d is invalid\n", x);
    
    if (val2 > -1)
        printf("Found in SECOND search! Value is: %d\n", x);
    else
        printf("Not Found!\n%d is invalid\n", x);

    return 0;
}
