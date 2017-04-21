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
		void PowerRule(string userInput);
	    bool is_number(const std::string &s);
    private:
        string answer;
                       
};

#endif
