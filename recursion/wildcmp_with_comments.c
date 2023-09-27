#include "main.h"

/**
 * wildcmp_recursive - compare two strings with wildcards recursively
 * @s1: first string
 * @s2: second string with wildcard *
 *
 * Returns: 1 if identical, 0 otherwise
 */
int wildcmp_recursive(char *s1, char *s2) {
    /* Base case: If both strings are empty, they are identical */
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    /* If s2 has a wildcard '*', it can match zero or more characters in s1 */
    if (*s2 == '*') {
        return wildcmp_recursive(s1, s2 + 1) ||   /* Match zero characters */
               (*s1 && wildcmp_recursive(s1 + 1, s2)); /* Match one or more characters */
    }

    /* If the current characters match, continue comparing the next characters */
    if (*s1 == *s2) {
        return wildcmp_recursive(s1 + 1, s2 + 1);
    }

    /* Characters don't match, strings are not identical */
    return 0;
}

/**
 * wildcmp - compare two strings with wildcards
 * @s1: first string
 * @s2: second string with wildcard *
 *
 * Returns: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2) {
    return wildcmp_recursive(s1, s2);
}
