#include<stdio.h>
#include "Signal_samples.h"
int main() {
  //int samples[10]={1,1,0,1,0,0,0,1,0,1};
  int i,level;
  for(i=0;i<10;i++)
  {
    if((samples[i]==0&&samples[i+1]==0)||(samples[i]==1&&samples[i+1]==1))
      level=0;//Level
    else if(samples[i]==0&&samples[i+1]==1)
            level=1;//Rising
          else
            level=2;

    printf("Sample: %d\tVoltage level: %d\t",i,samples[i]);
    switch(level)
    {
    case 0:printf("Level\n");break;
    case 1:printf("Rising edge\n");break;
    case 2:printf("Falling edge\n");break;
    }


  }

  return 0;
}
