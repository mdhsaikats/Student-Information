#include<stdio.h>
#include<string.h>
struct info
{
   char name[50];
   int id;
   float cgpa;
};
void studentInformation(struct info student[10], int i)
{
    if (i<10)
    {
        printf("Enter Student %d:\n",i + 1);
        printf("Name: ");
        scanf("%s" ,&student[i].name);
        printf("Enter ID:");
        scanf("%d",&student[i].id);
        printf("Enter CGPA:");
        scanf("%f",&student[i].cgpa);
        printf("-----------------------------\n");
    }else {
        printf("-----------------------------\n");
        printf("Maximum Student limit reached\n");
        printf("-----------------------------\n");
    } 
}
void studentList( struct info student[10],int n)
{
    if (n > 0)
    {
        for ( int i = 0; i < n; i++)
    {
        printf("Name: %s\nID: %d\nCGPA: %.2f\n",student[i].name , student[i].id , student[i].cgpa);
        printf("------------\n");
    }
    }else{
        printf("---------------------------------\n");
        printf("No student information avaiable!!\n");
        printf("---------------------------------\n");
    }
}
void individualName(struct info student[10], int n)
{
    char studname[50];
    printf("Student Name:");
    scanf("%s",&studname);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(studname, student[i].name) == 0){
            printf("Name: %s\nID: %d\nCGPA: %.2f\n",student[i].name,student[i].id,student[i].cgpa);
            printf("------------\n");
            return;
        }
    } 
        printf("-------------------\n");
        printf("No student found\n");
        printf("-------------------\n");
}
int main()
{
    struct info student[10];
    int choice , i=0;
    while (1)
    {
        printf("1.Enter student information\n2.Show student list\n3.Search individual student\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("---------------------\n");
        switch (choice)
        {
        case 1:
            studentInformation(student , i);
            i++;
            break;
        case 2:
            studentList(student , i); 
            break;
        case 3:
            individualName(student , i);
            break;
        case 4:
            printf("*Thank You* :-)\n");
            printf("---------------------\n");
            return 0;
            break;
        default:
            printf("----------\n");
            printf("Error\n");
            printf("----------\n");
            break;
        }
    } 
}

//saikat
