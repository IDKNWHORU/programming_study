#include <stdio.h>

int traverse(int array[], size_t length, int (*callback)(int index, int item, void *param), void *param) {
    int i;
    int exitCode = 0;
    for (i = 0; i < length; i++) {
        exitCode = callback(i, array[i], param);
        if (exitCode) {
            break;
        }
    }
    return exitCode;
}

int search(int index, int item, void *param) {
    if (item > 5) {
        *(int *) param = item;
        return 1;
    }
    else {
        return 0;
    }
}

void main() {
    int arr[] = {5, 8, 3};
    int index;
    int found;
    found = traverse(arr, 3, search, &index);

    if(found) {
        printf("Item %d\n", index);
    } else {
        printf("Not found\n");
    }
}