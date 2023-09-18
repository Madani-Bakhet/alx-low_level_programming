#include "main.h"

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n, a, b, len;
    char *str;
    char s[10] = "my School";

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
printf("1#####################\n");
a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
printf("2#####################\n");
    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
printf("3#####################\n");
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
printf("5#####################\n");
printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
printf("4#####################\n");
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
printf("1#####################\n");
printf("1#####################\n");
printf("1#####################\n");
printf("1#####################\n");
printf("1#####################\n");
printf("1#####################\n");
    return (0);
}
