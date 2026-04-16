#include<iostream>
#include<chrono> // using crono for time management


void func()
{
	for(int i=0;i<100;i++);  //test function to determine the time taken for exectuion
}



int main()
{
	auto start= std::chrono::high_resolution_clock::now(); //start clock
	func(); 
	auto end=std::chrono::high_resolution_clock::now(); //end clock
	
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end-start); //duration that taken by the above function
	std::cout<< "time is : " <<duration.count() <<"ns\n";  //print seconds in terms of nanoseconds
	
	return 0;
	
}
