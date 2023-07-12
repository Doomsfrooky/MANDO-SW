#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUDENTS 20

typedef struct {
    int midterm;
    int final;
    int assignment;
    int total;
    int rank;
} Student;

void generateScores(Student students[]) {
    int i;
    for (i = 0; i < NUM_STUDENTS; i++) {
        students[i].midterm = rand() % 41 + 60;  // �߰� ���� (60 ~ 100)
        students[i].final = rand() % 31 + 70;    // �⸻ ���� (70 ~ 100)
        students[i].assignment = rand() % 31 + 70; // ���� ���� (70 ~ 100)
    }
}

void calculateTotal(Student students[]) {
    int i;
    for (i = 0; i < NUM_STUDENTS; i++) {
        students[i].total = students[i].midterm + students[i].final + students[i].assignment;
    }
}

void assignRanks(Student students[]) {
    int i, j;
    for (i = 0; i < NUM_STUDENTS; i++) {
        students[i].rank = 1;
        for (j = 0; j < NUM_STUDENTS; j++) {
            if (students[j].total > students[i].total) {
                students[i].rank++;
            }
        }
    }
}

void sortStudents(Student students[]) {
    int i, j;
    Student temp;
    for (i = 0; i < NUM_STUDENTS - 1; i++) {
        for (j = 0; j < NUM_STUDENTS - i - 1; j++) {
            if (students[j].total < students[j + 1].total) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printStudents(Student students[]) {
    int i;
    printf("����ǥ\n");
    printf("��ȣ\t�߰�\t�⸻\t����\t����\t����\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%2d\t%3d\t%3d\t%3d\t%3d\t%3d\n", i + 1, students[i].midterm, students[i].final, students[i].assignment, students[i].total, students[i].rank);
    }
}

int main() {
    srand(time(NULL)); // ������ ������ �����ϱ� ���� �õ� ����

    Student students[NUM_STUDENTS];
    generateScores(students);
    calculateTotal(students);
    assignRanks(students);
    sortStudents(students);
    printStudents(students);

    return 0;
}
