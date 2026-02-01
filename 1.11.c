#include<stdio.h>
struct metric 
{
    int metres;
    int centimetres;
}m;
// the second structures
struct british
{
    int feet;
    int inches;
}b;
int main()
{
    int total_cm,total_inche;

    // input the metric values
    printf("\nEnter the value of  metre and centimetre:-");
    scanf("%d %d", &m.metres, &m.centimetres);

    // input the value of british
    printf("\n Enter the value of feet and inches:-");
    scanf("%d %d", &b.feet, &b.inches);

    // Adds metres and centimetres into one value
    total_cm=(m.metres*100)+m.centimetres;   // formula to convert metre to cm

    // we cannot add metres and centimetres directly with feet and inches.So we convert everything into one common unit
   
    total_inche=(b.feet*12)+b.inches;  // convert british distances into inches 
    // convert inches to cm 
    total_cm=total_cm+(b.inches*2.54); // add metric distances to british distances
    // final result in metric
    m.metres=total_cm/100;
    m.centimetres=total_cm%100;  //Converts total centimetres back into metres and centimetres

    total_cm=total_cm/2.54; //Converts centimetres back into inches

    // final result in british
    b.feet =total_inche/12;
    b.inches=total_inche%12;

    // print the result for metric
    printf("\n Result in mentric %d metre %d centimetre",m.metres,m.centimetres);

    // print the result for british 
    printf("\n Result in british %d feet %d inches",b.feet,b.inches);

    return 0;
}