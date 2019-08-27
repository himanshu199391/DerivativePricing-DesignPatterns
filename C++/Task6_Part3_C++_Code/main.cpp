#include"FuncToEval.hpp"

#include"NumericalIntegration.hpp"
#include"NumericalRule.hpp"

#include<iostream>
using namespace std;

int main(){
    
    double Tolerance(1e-6);
    double Low(0.0);
    double High(1.0);
    unsigned long Steps(100);
    
    //----------------------------------------------------------------
    cout << "1.0/((x + 1.0) * (x + 1.0))" << endl << endl;
    
    Func1 myFunc;
    
    Trapezium_rule<Func1> rule(Low, High, myFunc);
    
    double result = Numerical_integration<Trapezium_rule,Func1>(Tolerance,Steps,rule);
    
    cout << "test trapezium rule : \t " ;
    cout << "result " << result << "\n";
    double tmp;
    cin >> tmp;
    
    return 0;
}
