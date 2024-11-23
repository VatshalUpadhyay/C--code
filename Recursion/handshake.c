#include <stdio.h>

int handshake_count(int people) {
    if (people <= 1) {
        return 0;
    } else {
        return (people - 1) + handshake_count(people - 1);
    }
}

int main() {
    int people;

    printf("Enter the number of people: ");
    scanf("%d", &people);

    int total_handshakes = handshake_count(people);
    printf("Total handshakes: %d\n", total_handshakes);

    return 0;
}