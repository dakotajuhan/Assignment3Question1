#include <iostream> 
#include <queue> 
#include "functions.h"
using namespace std;


int main ()
{

theQueue.push(21);
theQueue.push(31);
theQueue.push(61);
theQueue.push(71);
  
cout<<"The number at the front of the queue before being sent to the back is: "<<endl; //print the front of the queue first before sending to rear
cout<<theQueue.front()<<endl; //print

cout<<"After removing the front number of the queue to the back the queue, the front of the queue's number is: "<<endl;
move_to_rear();
cout<<theQueue.front()<<endl;// print new front of queue

return 0;
}