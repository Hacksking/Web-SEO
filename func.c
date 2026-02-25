#include<stdio.h>

typedef struct {
 
        int roll_no;
        char name[20];
        char surname[20];
        char class[20];
        int sem:3;

}student;

student s[100] = {
    {1, "Aarav", "Sharma", "BCA", 1},
    {2, "Vivaan", "Patel", "BCA", 2},
    {3, "Aditya", "Verma", "BCA", 3},
    {4, "Vihaan", "Mehta", "BCA", 4},
    {5, "Arjun", "Reddy", "BCA", 5},
    {6, "Sai", "Nair", "BCA", 6},
    {7, "Krishna", "Iyer", "BCA", 1},
    {8, "Ishaan", "Kapoor", "BCA", 2},
    {9, "Rohan", "Desai", "BCA", 3},
    {10, "Karan", "Malhotra", "BCA", 4},
    {11, "Neha", "Joshi", "BCA", 5},
    {12, "Ananya", "Singh", "BCA", 6},
    {13, "Priya", "Chopra", "BCA", 1},
    {14, "Sneha", "Kulkarni", "BCA", 2},
    {15, "Pooja", "Agarwal", "BCA", 3},
    {16, "Rahul", "Mishra", "BCA", 4},
    {17, "Amit", "Trivedi", "BCA", 5},
    {18, "Sanjay", "Yadav", "BCA", 6},
    {19, "Nikhil", "Bansal", "BCA", 1},
    {20, "Tanya", "Gupta", "BCA", 2},
    {21, "Meera", "Pillai", "BCA", 3},
    {22, "Lakshmi", "Menon", "BCA", 4},
    {23, "Harsh", "Pandey", "BCA", 5},
    {24, "Deepak", "Chauhan", "BCA", 6},
    {25, "Simran", "Kaur", "BCA", 1}
};

void display(){
    int i;
    for(i=0;i<25;i++)
    {
        printf("\n%d\t%s\t%s\t%s\t%d",s[i].roll_no,s[i].name,s[i].surname,s[i].class,s[i].sem);

    }
}

void menu()
{
        int ch;
    printf("\nEnter 1 To Show The Students Details");
    printf("\nEnter 2 To Get New Admission Added");
    printf("\nEnter 3 To Remove Student");
    printf("\nEnter 4 To Student Details By Name");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        display();
        break;
    
    default: printf("\nInvalid Choice...");
        break;
    }
}
void main()
{
    menu();
}