#include<stdio.h>

typedef struct {
    char name[10];
    int grade;
} Student;

void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void insertion_sort_student(Student* dizi,int n){
    int i,j;
    Student temp;

    for(i=1;i<n;i++){
        for(j=i;j>0 && dizi[j].grade > dizi[j-1].grade;j--){
           temp = dizi[j];
           dizi[j] = dizi[j-1];
           dizi[j-1] = temp;
           // swap(&dizi[j].grade,&dizi[j-1].grade);
        }
    }
}

int main(){
    Student students[] = {
        {"Rahmet",70},
        {"Rahman",20},
        {"Halim",80},
        {"Kerem",90},
    };
    int n = 4;

    insertion_sort_student(students,n);

    for(int i=0;i<n;i++){
        printf("%s - %d\n",students[i].name, students[i].grade);
    }
    return 0;
}
