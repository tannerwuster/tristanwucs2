// write your student details in here

#include <iostream>
#include <cstring>
#include "subject.h"
using namespace std;

Subject::Subject()
{// Default constructor
}

Subject::Subject(int pSemester,char pIDNumber[4],char pName[26],int pCreditPoints)
{// Initialisation constructor

}

int Subject::GetSemester()
{
   return Semester;
}

char *Subject::GetIDNumber()
{
   return IDNumber;
}

char *Subject::GetName()
{
   return Name;
}

