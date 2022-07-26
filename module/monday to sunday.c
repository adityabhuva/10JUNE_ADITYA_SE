#include<stdio.h>
int main()
{
        int days,monday,tuesday,wednesday,thursday,friday,saturday,sunday;
        printf("Enter number of day :");
     //   scanf("%d",&day);
        printf("\nMonday=1\nTuesday=2\nWednesday=3\nThursday=4\nFriday=5\nSaturday=6\nSunday=7\n");
        printf("\nenter Day no=");
        scanf("%d",&days);
        switch (days)
        {
            case 1 :
                printf("monday");
                break;
                
           case 2 :
                printf("Tuesday");
                break;
                
            case 3 :
                printf("Wednesday");
                break;    
                
                case 4 :
                printf("Thursday");
                break;
                
            case 5 :
                printf("Friday");
                break;
                
            case 6 :
                printf("Saturday");
                break;    
                
                case 7 :
                printf("Sunday");
                break;   
        }
}