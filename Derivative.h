#include <iostream>
using namespace std;

#ifndef DERIVATIVE
#define DERIVATIVE

//Class Definitions
class Derivative
{
	public:
		Derivative();
		~Derivative();
		
		string Constant(string userInput);
		string PowerRule(string userInput, int position);
	    bool is_number(const std::string &s);
        void determineType(string userIpnut);
    private:
        string answer;
                       
};

#endif
