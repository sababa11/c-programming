#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add other prototypes here if needed*/

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);
    return 0;
}

void freeStudents(struct student *start) {
    struct student * ptr = start;
    struct student * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

void printStudents(struct student * start) {
    struct student * ptr = start;
    while (ptr!=NULL) {
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}

struct student * append(struct student * end, struct student * newStudptr) {
    //! heap=showMemory(start=260, cursors=[end,newDigitptr])
    end->next = newStudptr;
    end = newStudptr;
    return(end);
}

struct student *createStudent(char studentName[], int studentAge) {
    //! heap=showMemory(start=330, cursors=[ptr])
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    strcpy(ptr->name, studentName);
    //copyStr(ptr->name, studentName);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}
