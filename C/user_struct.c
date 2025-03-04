#include <stdio.h>
#include <string.h>

struct User {
    char name[16];
    char password[32];
};

int main() {
    struct User user;
    strcpy(user.name, "gray");
    strcpy(user.password, "_gray");
    printf("%s\n", user.name);
    printf("%s\n", user.password);
}
