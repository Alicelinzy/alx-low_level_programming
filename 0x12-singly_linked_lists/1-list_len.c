#include <stdio.h>
#include "your_list_t_header.h" // Replace with the actual header file for list_t

size_t print_list(const list_t *h) {
    size_t count = 0; // Initialize a count variable to keep track of the number of nodes

    printf("["); // Print the opening bracket

    while (h != NULL) {
        if (h->str == NULL) {
            printf("(nil)");
        } else {
            printf("%s", h->str);
        }

        count++; // Increment the count for each node
        h = h->next; // Move to the next node

        if (h != NULL) {
            printf(", "); // Print a comma and space if there are more nodes
        }
    }

    printf("]\n"); // Print the closing bracket and a newline
    return count; // Return the number of nodes
}
