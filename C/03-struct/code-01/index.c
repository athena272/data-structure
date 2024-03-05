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