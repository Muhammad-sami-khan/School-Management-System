#ifndef STUDENT_H
#define STUDENT_H

struct Student{
  int regNum; int rollNum; char firstName[20]; char lastName[20]; int standard; int fee; int pDays; int aDays;
};
Student students[200];

#endif