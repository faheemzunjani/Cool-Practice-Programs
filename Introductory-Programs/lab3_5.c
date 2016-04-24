// Program to find the max height, range and speed of projectile
// Faheem Hassan Zunjani

#include<stdio.h>
#include<math.h>

#define g 9.80665
#define pi 3.14159

void main(){

  float h,u,thet,hmax,range,yvel,xvel,fvel,t1,xdist;
  
  printf("Enter the height from which projectile is thrown: ");
  scanf("%f",&h);
  printf("Enter the velocity with which projectile is thrown: ");
  scanf("%f",&u);
  printf("Enter the angle(in deg) at which the projectile is thrown: ");
  scanf("%f",&thet);
  printf("\n\n");

  thet=(thet*pi)/180;                                 //sin()&cos() accept radians
  hmax=((u*u*sin(thet)*sin(thet))/(2*g))+h;           //Max ht from ground
  range=(u*u*sin(2*thet))/g;                          //Range of proj
  yvel=sqrt((u*sin(thet)*u*sin(thet))+(2*g*h));       //Vel in y-dir on reaching ground
  xvel=u*cos(thet);                                   //Const x-dir vel
  fvel=sqrt((yvel*yvel)+(xvel*xvel));                 //Final vel on reaching ground
  t1=(yvel-(u*sin(thet)))/g;                          //Time from ht=h to ht=0 in -ve y-dir
  xdist=range+(xvel*t1);                              //Total dist in x-dir

  printf("Maximum ht reached from ground: %f \n",hmax);
  printf("Dist travelled in x-dir before hitting ground: %f \n",xdist);
  printf("Speed with which it hits the ground: %f \n",fvel);

}
  
