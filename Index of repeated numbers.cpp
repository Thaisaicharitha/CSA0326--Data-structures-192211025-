#include <stdio.h>
#include <stdbool.h>
void printRepeatedIndices(char arr[], int size) {
    bool visited[256] = {false};
    for (int i = 0; i < size; i++) {
        if (visited[arr[i]]) {
            printf("Character '%c' is repeated at index %d\n", arr[i], i);
        }
        visited[arr[i]] = true;
    }
}
int main() {
    char array[]="saveetha school of engineering";
    int size = sizeof(array) / sizeof(array[0]);
    printf("Indices of repeated characters:\n");
    printRepeatedIndices(array, size);
     return 0;
}
