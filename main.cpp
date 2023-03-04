#include "mbed.h"
#include "hcsr04.h"
Serial pc(USBTX, USBRX); 
HCSR04  usensor(p21,p12);
int dist;
int main()
{
    while(1) {
        usensor.start();
        dist=usensor.get_dist_cm();
        pc.printf("distance = %d [cm]\r\n",dist);
        wait(1);
    }
}