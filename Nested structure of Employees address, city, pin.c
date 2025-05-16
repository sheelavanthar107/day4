#include <stdio.h>
struct address {
    char city[50];
    int pin;
};
struct employee {
    char name[50];
    int id;
    struct address addr; 
};
int main() {
    struct employee e;
    printf("Enter employee name: ");
    fgets(e.name, sizeof(e.name), stdin);
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    getchar(); 
    printf("Enter city: ");
    fgets(e.addr.city, sizeof(e.addr.city), stdin);
    printf("Enter pin code: ");
    scanf("%d", &e.addr.pin);
    printf("\nEmployee Details:\n");
    printf("Name: %s", e.name);
    printf("ID: %d\n", e.id);
    printf("City: %s", e.addr.city);
    printf("Pin Code: %d\n", e.addr.pin);
}

