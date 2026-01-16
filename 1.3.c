/*Design a function update that would accept the data structure designed in Exercise 11.1 and increments time by one second and returns the new time.
 (If the increment results in 60 seconds, then the second member is set to zero and the minute member is incremented by one. Then, if the result 
 is 60 minutes, the minute member is set to zero and the hour member is incremented by one. Finally when the hour becomes 24, it is set to zero.)*/
#include<stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
}t;

void input(struct time *i)      
{
    printf("Enter the hour:");
    scanf("%d",&i->hour);
    printf("Enter the minute:");
    scanf("%d",&i->minute);
    printf("Enter the second:");
    scanf("%d",&i->second);
    
}
int update(struct time *u)
{
    u->second++;            
    if(u->second==60)   // if user enter the 60 second ++ oprtor incrise minute and second was sater from 0
    {
        u->second=0;
        u->minute++;    // this opretor use for incrise miute 
    }
    if(u->minute==60)   // if user enter the 60 minute ++ oprtor incrise hour and miute was sater from 0
    {
        u->minute=0;  
        u->hour++;       // this opretor use for incrise hour 
    }
    if(u->hour==24)       
    {
        u->hour=0;
        
    }

}
void display(struct time *d)        
{
    printf("%02d:%02d:%02d",d->hour,d->minute,d->second);
}
int main()
{
    input(&t);// for input time from user 
    update(&t);// for update time enter  by  user 
    display(&t);//for display updated  time

    return 0;
}