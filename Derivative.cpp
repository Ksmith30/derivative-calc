#include "Derivative.h"
#include <cctype>
#include <string>

Derivative::Derivative()
{
}

Derivative::~Derivative()
{
}

string Derivative::Constant(string userInput)
{
    answer = '0';
    return answer;
}

string Derivative::PowerRule(string userInput, int position)
{
    int powerPosition = userInput[position + 1];
    
    int input = stoi(userInput);
    
       
    return answer; 
    
}

/*bool Derivative::is_number(string s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}*/

void Derivative::determineType(string userInput)
{
    char exponential = '^';
    int position = userInput.find(exponential,0);
    PowerRule(userInput, position);

}

int main()
{
    cout << "Input an equation to derive: ";
    string userInput;
   
    cin >> userInput;
    Derivative der;
    
    cout << "The derivative of this equation is: " << der.determineType(userInput) << endl;
    return 0;
}
