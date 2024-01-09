#ifndef TEACHER_H
#define TEACHER_H

struct Teacher{
  int id; char firstName[20]; char lastName[20]; char subject[15]; int salary; int pDays; int aDays;
};
int teacherCount = 0;
Teacher teachers[30];

#endif