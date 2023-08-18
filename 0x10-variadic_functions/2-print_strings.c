#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *str;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; ++i) {
        str = va_arg(args, char*);

        if (str != NULL) {
            printf("%s", str);
        } else {
            printf("(nil)");
        }

        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);
        }
    }

    va_end(args);
    printf("\n");
}
