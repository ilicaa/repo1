#include <stdio.h>

double cmpe(int mt1, int mt2, int hw1, int hw2, int hw3, int final, int labfinal);
double math152(int mt1, int mt2, double quizz, int final);
double math275(int mt1, int mt2, int final);
double eng201(int mt1, int wq, int it, int flp, int final);

main()
{
    int coursecode;
    int midterm1, midterm2, homework1, homework2, homework3, final, labfinal, writingquiz, it, flp;
    double quiz;

    printf("Enter the course code for calculation: ");
    scanf("%d",&coursecode);

    switch (coursecode)
    {
        case 114: 
        printf("Enter Midterm 1 and Midterm 2: ");
        scanf("%d %d",&midterm1,&midterm2);
        printf("Enter Homework 1-2-3: ");
        scanf("%d %d %d",&homework1,&homework2,&homework3);
        printf("Enter Final and Lab Final: ");
        scanf("%d %d",&final,&labfinal);
        printf("Result: %.2f",cmpe(midterm1,midterm2,homework1,homework2,homework3,final,labfinal));  
        break;

        case 152:
        printf("Enter Midterm 1 and Midterm 2: ");
        scanf("%d %d",&midterm1,&midterm2);
        printf("Enter quiz result: ");
        scanf("%lf",&quiz);
        printf("Enter Final: ");
        scanf("%d",&final);
        printf("Result: %.2f",math152(midterm1,midterm2,quiz,final));
        break;

        case 275:
        printf("Enter Midterm 1-2 and Final: ");
        scanf("%d %d %d",&midterm1,&midterm2,&final);
        printf("Result: %.2f",math275(midterm1,midterm2,final));
        break;

        case 201:
        printf("Enter Midterm-Writing Quiz-IT-FLP and Final: ");
        scanf("%d %d %d %d %d",&midterm1,&writingquiz,&it,&flp,&final);
        printf("Result: %.2f",eng201(midterm1,writingquiz,it,flp,final));
        break;
    
        default: printf("Please be sure that you only entered course code (ex. if lesson is CMPE114 only 114 needed).\n");
        printf("And the courses available in the code are my current courses so code will be different in each semester. :)");
            break;
    }
}

double cmpe(int mt1, int mt2, int hw1, int hw2, int hw3, int final, int labfinal)
{
   double hwtotal=(hw1+hw2+hw3)*0.1;
   double total=(mt1*0.2)+(mt2*0.25)+(labfinal*0.15)+(final*0.3)+hwtotal;
   return total; 
}

double math152(int mt1, int mt2, double quizz, int final)
{
    double quiz=quizz*0.1;
    double total=(mt1*0.3)+(mt2*0.3)+(final*0.4)+quiz;
    return total;
}

double math275(int mt1, int mt2, int final)
{
    double total=(mt1*0.3)+(mt2*0.3)+(final*0.4);
    return total;
}

double eng201(int mt1, int wq, int it, int flp, int final)
{
    double total=mt1+wq+flp+it+final;
    return total;
}
