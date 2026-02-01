#include<stdio.h>
struct  date
{
    int day;
    int month;
    int year;
};
// fuction for compare two date 
int compare_Date(struct date d1,struct date d2)
{
 if(d1.year<d2.year)
    {
        return 1;
    }
 else if(d1.year>d2.year)
    {
        return 0;
    }   
 else if(d1.month<d2.month)
  {
    return 1;
  }
 else if(d1.month>d2.month)
  {
    return 0;
  }
 else if(d1.day<d2.day)
  {
    return 1;
  }
 else if(d1.day>d2.day)
  {
    return 0;
  }

}
int main()
{
    struct date d1,d2;
    int result;
    printf("Enter the 1st date :-");
    scanf(" %d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Enter the 2st date :-");
    scanf(" %d %d %d",&d2.day,&d2.month,&d2.year);
    result=compare_Date(d1,d2);
    if(result==1)
    {
        printf("date1 is earlier than date2");
    }
    else
    {
        printf("date1 is later than date2");
    }
    return 0;
}