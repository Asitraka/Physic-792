#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;
int main(){
	static random_device r;
	static mt19937 number(r());

	poisson_distribution <int> value(4.1);   
	for(int i=0; i<10;i++) cout<<"Random numbers that obey Poisson's distribution "<<value(number)<<endl;


}
