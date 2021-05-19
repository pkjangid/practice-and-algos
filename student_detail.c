#include <stdio.h>
#include <string.h>
 
struct student {
   char  studentname[50];
   char  fathername[50];
   char  mothername[100];
   int   rollno;
   char  class[50];
};
 
int main( ) 

{

   struct student student1;        
   struct student student2;
   struct student student3;
   struct student student4;
   struct student student5;        
 
   strcpy( student1.studentname, "PRITAM KUMAR");
   strcpy( student1.fathername, "PRAMOD KUMAR JANGIR"); 
   strcpy( student1.mothername, "SAROJ DEVI");
   strcpy(student1.class,"BCA 1st SEM");
   student1.rollno = 87788;
   
   strcpy( student2.studentname, "REHAN KHAN");
   strcpy( student2.fathername, "IMRAN KHAN"); 
   strcpy( student2.mothername, "samiya");
   strcpy(student2.class,"BCA 1st SEM");
   student2.rollno = 87548;
   
   strcpy( student3.studentname, "VIVEK KUMAR");
   strcpy( student3.fathername, "RAMLAL SINGH"); 
   strcpy( student3.mothername, "SARLA DEVI");
   strcpy(student3.class,"BCA 1st SEM");
   student3.rollno = 87451;
   
   strcpy( student4.studentname, "ARPIT KASWANA");
   strcpy( student4.fathername, "SURAJ KASWANA"); 
   strcpy( student4.mothername, "KALPANA DEVI");
   strcpy(student4.class,"BCA 1st SEM");
   student4.rollno = 86147;
   
   strcpy( student5.studentname, "SURAJMAL SANI");
   strcpy( student5.fathername, "SHYAMNANDAN "); 
   strcpy( student5.mothername, "KAVITA DEVI");
   strcpy(student5.class,"BCA 1st SEM");
   student5.rollno = 85638;
   


   printf( "  student name : %s\n", student1.studentname);
   printf( "  FATHER'S NAME : %s\n", student1.fathername);
   printf( "  MOTHER'S NAME : %s\n", student1.mothername);
   printf( "  CLASS : %s\n", student1.class);
   printf( "  ROLL NO. : %d\n\n", student1.rollno);
   
   printf( "  student name : %s\n", student2.studentname);
   printf( "  FATHER'S NAME : %s\n", student2.fathername);
   printf( "  MOTHER'S NAME : %s\n", student2.mothername);
   printf( "  CLASS : %s\n", student2.class);
   printf( "  ROLL NO. : %d\n\n", student2.rollno);
   
   printf( "  student name : %s\n", student3.studentname);
   printf( "  FATHER'S NAME : %s\n", student3.fathername);
   printf( "  MOTHER'S NAME : %s\n", student3.mothername);
   printf( "  CLASS : %s\n", student3.class);
   printf( "  ROLL NO. : %d\n\n", student3.rollno);
   
   printf( "  student name : %s\n", student4.studentname);
   printf( "  FATHER'S NAME : %s\n", student4.fathername);
   printf( "  MOTHER'S NAME : %s\n", student4.mothername);
   printf( "  CLASS : %s\n", student4.class);
   printf( "  ROLL NO. : %d\n\n", student4.rollno);
   
   printf( "  student name : %s\n", student5.studentname);
   printf( "  FATHER'S NAME : %s\n", student5.fathername);
   printf( "  MOTHER'S NAME : %s\n", student5.mothername);
   printf( "  CLASS : %s\n", student5.class);
   printf( "  ROLL NO. : %d\n\n", student5.rollno);
   

     return 0;
}
