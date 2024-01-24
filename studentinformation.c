#include<stdio.h>
#include<string.h>

struct studentinformation
{
   char name[10];
   int id;
   float cgpa
};


void studentInfo()
{

    if (10>i)
    {
        printf("Enter Student %d:\n");
        printf("Name: ");
        scanf("%s" ,&student[i].name);
        printf("Enter ID:");
        scanf("%d",&student[i].id);
        printf("Enter CGPA:");
        scanf("%f",&student[i].cgpa);
    }else {
        printf("Maximum Student limit reached");
    }
    

}

void studentList()
{

}

void individualName()
{

}

void exitFunction()
{


}

int main()
{
    struct studentinformation student[10];
    int choice, i=0;

    while (1)
    {
        printf("1.Enter student information\n2.Show student list\n3.Exit");
        scanf("%d",&choice);


        switch (choice)
        {
        case 1:

            studentInfo();
            
            break;
        case 2:
            studentList();    
            break;

        case 3:

            individualName();

            break;

        case 4:

            exitFunction();

            break;

        default:
            printf("Error\n");

            break;
        }
    }
    
   
}
