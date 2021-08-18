#include <iostream>
#include <vector>
#include <math.h>
#define  Euler  2.71828182846
using namespace std;

void Softmax_Function(){


float layer_outputs[3] = {4.8, 1.21, 2.385};

vector<float> exp_values;
vector<float> norm_values;
float z,y;

for(auto x: layer_outputs){
	
	z = pow(Euler,x);
	
	exp_values.push_back(z);
 }
 /*
 for(int i = 0; i <3; i++){
	cout << exp_values[i]<<"\n";
	
}
*/
 float norm_base=0;
 float sum=0;
 
 for(auto j: exp_values){
	norm_base += j;
 }
 
 for(auto value: exp_values){
	
	y = value/ norm_base;
	norm_values.push_back(y);

 }
 
 /*
  for(int i = 0; i <3; i++){
	cout << norm_values[i]<<"\n";
	sum += norm_values[i];
}

	
	cout<< "summed normalized values: \n \n"<< sum;
*/



}







int main(){
	Softmax_Function();
}
