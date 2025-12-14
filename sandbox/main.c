#include <stdio.h>
#include <stdlib.h>


int main() {

    int number = 0;
    int sum = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    for(int i = 0; i < number; i++) {
        printf("Enter the score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
        sum += scores[i];
        // scanf("%d", &scores[i]);
    }

    printf("Sum: %d\n", sum);

    free(scores);
    scores = NULL;

    return 0;
}