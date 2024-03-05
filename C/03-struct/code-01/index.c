#include <stdio.h>
#include <stdlib.h>
//criar vetor struct

typedef struct {
    int day, month, year;
} BirthDate;

typedef struct {
    BirthDate birthDate;
    int age;
    char sex;
    char name[100];
} Person;

void printAPerson(Person person) {
    printf("\tName: %s\n", person.name);
    printf("\tAge: %d\n", person.age);
    printf("\tSex: %s\n", person.sex);
    printf("\tBirth Date: %d/%d/%d\n", person.birthDate.day, person.birthDate.month, person.birthDate.year);
}

Person readPerson() {
    Person person;
    printf("Type your name: ");
    fgets(person.name, 100, stdin);
    printf("Type your age: ");
    scanf("%d", &person.age);
    scanf("%c");
    printf("Typer M or F to define your sex: ");
    scanf("%c", &person.sex);
    printf("Type your birth date on the format dd mm yyyy: ");
    scanf("%d%d%d", &person.birthDate.day, &person.birthDate.month, &person.birthDate.year);

    return person;
}

int main() {
    Person person;
    person =  readPerson();
    printAPerson(person);

    return 0;
}
