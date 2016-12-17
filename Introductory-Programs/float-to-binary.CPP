#include<iostream.h>
#include<conio.h>

    // Program to convert input floating point no.
    // to binary 32 bit IEEE 754 representation
    // Faheem Hassan Zunjani
    // IIT2015113

void main(){

    clrscr();

    float flNo;
    int bin[32];

    cout<<"Enter no:";
    cin>>flNo;

    if(flNo<0)
    { bin[0]=1;
      flNo=(flNo*(-1));
    }
    else
    { bin[0]=0;
    }

    float flTempNo=flNo;
    int inTempNo=0,exp=0;

    for(int i=0;inTempNo!=1;i++)
    { flTempNo=flTempNo/2;
      inTempNo=(int)flTempNo;
      exp++;
    }

    exp=127+exp;

    for(int j=0;j<8;j++)
    { bin[8-j]=exp%2;
      exp=exp/2;
    }

    float flMantis=(flTempNo-1)*2;

    for(int l=0;l<23;l++)
    { bin[9+l]=0;
    }

    for(int k=0;k<23;k++)
    { bin[9+k]=(int)flMantis;
      if(bin[9+k]==1)
      { flMantis=(flMantis-1)*2;
      }
      else
      { flMantis=flMantis*2;
      }

    }

    cout<<endl;

    cout<<"The binary representation is:";

    for(int m=0;m<32;m++)
    {cout<<bin[m];
    }

    getch();


}
