#include "Derivative.h"
#include <cctype>

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

void Derivative::PowerRule(string userInput)
{
}

bool is_number(string s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main()
{
    cout << "Input an equation to derive: ";
    string userInput;
    string derivative;
    cin >> userInput;
    Derivative der;
    if (is_number(userInput))
        derivative = der.Constant(userInput);
    
    cout << "The derivative of this equation is: " << derivative << endl;
    return 0;
}
