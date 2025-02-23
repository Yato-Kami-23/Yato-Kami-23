#include<stdio.h>
float i_1(float,float,float,float);
float i_2(float,float,float,float);
int main(){
    float v1,v2,r1,r2,mid_r3;
    float total_i,i1,i2;
    printf("\t\tSUPERPOSITION THEOREM.!\n");
    printf("Enter voltage 1: ");
    scanf("%f",&v1);
    printf("Enter voltage 2: ");
    scanf("%f",&v2);
    printf("Enter r1, r2, r3 values: ");
    scanf("%f%f%f",&r1,&r2,&mid_r3);
    i1 = i_1(v1,r1,r2,mid_r3);
    i2 = i_2(v2,r1,r2,mid_r3);
    total_i = i1+i2;
    printf("When v2 %.2f is off and v1 %.2f is on current i1 is %.3f\n",v2,v1,i1);
    printf("When v1 %.2f is off and v2 %.2f is on current i2 is %.3f\n",v1,v2,i2);
    printf("The total current through through %.3f is : %.3f",mid_r3,total_i);
}
float i_1(float v,float r1,float r2,float r3){
    //v2 is off
    float total;
    total = v/(r1+((r2*r3)/(r2+r3)));
    return total*(r2/(r3+r2));
}
float i_2(float v,float r1,float r2,float r3){
    //v1 is off
    float total;
    total = v/(r2+(r1*r3)/(r1+r3));
    return total*(r1/(r3+r1));
}