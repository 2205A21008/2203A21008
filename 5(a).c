/*Define a structure named "Student" with members: name (string), roll (integer), and marks
 (float). Create a pointer to the structure and dynamically allocate memory for it. Input 
 the details of the student using the pointer and display them.*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;
    s = (struct Student*) malloc(sizeof(struct Student));
    printf("Enter Student Name,Roll number,Marks: \n");
    scanf("%s",s->name,&s->roll,&s->marks);
    printf("Displaying Information:\n------------------------------------\n");
    printf("Name: %s\n",s->name);
    printf("Roll number: %d\n",s->roll);
    printf("Marks: %.2f\n",s->marks);

    free(s);
    return 0;
}

