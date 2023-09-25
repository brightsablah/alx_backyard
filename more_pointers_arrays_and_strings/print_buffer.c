#include <stdio.h>
#include "main.h"

void print_buffer(char *b, int size) {

	int i;

    if (size <= 0) {
        /* If size is 0 or less, print a new line and return */
        printf("\n");
        return;
    }

    for (i = 0; i < size; i++) {
        /* Print the position of the first byte in hexadecimal (8 chars) */
        if (i % 10 == 0) {
            printf("%08x ", i);
        }

        /* Print the hexadecimal content (2 chars) of the buffer */
        printf("%02x", (unsigned char)b[i]);

        /* Print a space after every 2 bytes */
        if ((i + 1) % 2 == 0) {
            printf(" ");
        }

        /* Print the content of the buffer (as a printable character or '.') */
        if (b[i] >= 32 && b[i] <= 126) {
            printf("%c", b[i]);
        } else {
            printf(".");
        }

        /* Print a new line after every 10 bytes */
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

/* Print a new line if necessary 
	(for buffers not ending on a line boundary) */
    if (i % 10 != 0) {
        printf("\n");
    }
}

