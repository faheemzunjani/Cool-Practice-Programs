// Program to calculate the shorter path with input co-ordinates
// Faheem Hassan Zunjani

#include<stdio.h>
#include<math.h>

void main(){

 int ax,ay,az,bx,by,bz,cx,cy,cz,dx,dy,dz,aob,cod;

 float da,db,dc,dd;

 printf("Enter coordinates: \n");
 printf("A:");
 scanf("%d,%d,%d",&ax,&ay,&az);
 printf("B:");
 scanf("%d,%d,%d",&bx,&by,&bz);
 printf("C:");
 scanf("%d,%d,%d",&cx,&cy,&cz);
 printf("D:");
 scanf("%d,%d,%d",&dx,&dy,&dz);

 da=sqrt((ax*ax)+(ay*ay)+(az*az));
 db=sqrt((bx*bx)+(by*by)+(bz*bz));
 dc=sqrt((cx*cx)+(cy*cy)+(cz*cz));
 dd=sqrt((dx*dx)+(dy*dy)+(dz*dz));
 
 aob=da+db;
 cod=dc+dd;

 if(aob>cod)
   { printf("AOB is shorter than COD! \n");
   }
 else if(cod>aob)
   { printf("COD is shorter than COD! \n");
   } 
  else
   { printf("AOB and COD are equal! \n");
   }
}
