#include <iostream>
using namespace std;

int poolVolume(int vol, int pipeOneflowRate, int pipeTwoflowRate, float hours);

main()
{
int vol, pipeOneflowRate, pipeTwoflowRate, pool;
float hours, pipe;
cout << "Enter volume of pool: ";
cin >> vol;
cout << "Flow rate of Pipe 1: ";
cin >> pipeOneflowRate;
cout << "Flow rate of Pipe 2: ";
cin >> pipeTwoflowRate;
cout << "Enter hours: ";
cin >> hours;

    
     
pipe = poolVolume(vol, pipeOneflowRate, pipeTwoflowRate, hours);

}

int poolVolume(int vol, int pipeOneflowRate, int pipeTwoflowRate, float hours )
{
 
  int   pipeOne = pipeOneflowRate * hours;
  int   pipeTwo = pipeTwoflowRate * hours;
  int   total = pipeOne + pipeTwo;

 if(total < vol){
     int   totalPercentage   = ( total * 100) / vol; 
     int   pipeOnePercentage = ( pipeOne * 100 ) / total;
     int   pipeTwoPercentage = ( pipeTwo * 100 ) / total;
     cout << "The pool is " << totalPercentage << "% full. Pipe 1: " << pipeOnePercentage << "%. Pipe 2: " << pipeTwoPercentage << "%.";
  }

 if(total > vol){
     cout << "For " << hours << " hours,the pool overflows with " << total - vol << " litres";


  }
}