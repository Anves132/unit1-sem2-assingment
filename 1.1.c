/*Define a structure data type called time struct containing three members integer hour, integer minute and integer second.
 Develop a program that would assign values to the individual members and display the time in the following form: 16:40:51*/
 #include<stdio.h>
 struct time
 {
    int hour;
    int minute;
    int second;
 };
 int main()
 {
    struct time t;
    t.hour=16;
    t.minute=40;
    t.second=51;
    printf("%d:%d:%d",t.hour,t.minute,t.second);
    return 0;
 }
