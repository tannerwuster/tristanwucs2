// write your student details in here

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "subject.h"
#include "SubjList.h"
#include <array>

using namespace std;



const char SUBJECT_FILE[] = "subject.txt"; //outputfile




SubjectList::SubjectList()
{
  
    
    NoOfSubjects=0;
    
}

SubjectList::~SubjectList()
{
  

}




int SubjectList::ReadFile()
{
    int count = 0;
    int pSemester;
    char pIDNumber[4];
    char pName[26];
    int pCreditPoints;
    ifstream inFile;
   
    inFile.open( SUBJECT_FILE,ios::in);
    
    while( inFile >> pIDNumber >> pName >> pCreditPoints >> pSemester )
    {
        
        
    }
    
    
  
    
    
   return 1;
}

void SubjectList::PrintSubjectsInSemester(int Semester)
{// Prints all subjects that match Semester
   cout<<"Subjects offered are:\n";
   for(int i=0;i<NoOfSubjects;i++){
      if(Subjects[i]->GetSemester()==Semester){
         cout<<Subjects[i]->GetIDNumber()<<'\t'<<Subjects[i]->GetName()<<endl;
      }
   }
}

int SubjectList::PrintSubjectDetails(char SubjectCode[])
{// Prints subject code & name of subject which matches SubjectCode

   return 0;
}
//selectionsort





