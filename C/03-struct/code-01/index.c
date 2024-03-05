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