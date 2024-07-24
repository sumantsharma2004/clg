#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    cout<<("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';


    int len = strlen(str);


    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }


    cout<<("Reversed string: %s\n", str);

    return 0;
}

