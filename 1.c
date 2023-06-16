#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

void copyStr(char * ptrName, char studentName[]) {
    int i=0;
    for (i=0; i<50; i++) {
        ptrName[i] = studentName[i];
    }
}

int main(void) {
    //! stack=showMemory(start=65520, showcursor[numberptr])
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge) {
    //! heap=showMemory(start=330, cursors=[ptr])
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    //strcpy(ptr->name, studentName);
    copyStr(ptr->name, studentName);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}
