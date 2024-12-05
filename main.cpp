#include <iostream>

using namespace std;

int main()
{
    char choise;
    float number1,number2,result;

    cout << " Enter number1 : ";
    cin >> number1;

    cout << endl;

cout << " Enter your choise : " <<endl;
cout << "  " << '+' <<endl;
cout << "  " << '-' <<endl;
cout << "  " << '*' <<endl;
cout << "  " << '/' <<endl;
cout << endl;

cin >> choise;

cout << endl;

cout << " Enter number2 : ";
cin >> number2;

while (choise=='+'){
 result=number1+number2;
    cout << "\n*************\n \n" << "result = " << "\a" << result << endl;
    break;
}
while(choise=='-'){
 result=number1-number2;
    cout << "\n*************\n \n" << "result = " <<  "\a" << result << endl;
        break;
}
while (choise=='*'){
 result=number1*number2;
    cout << "\n*************\n \n" << "result = " <<  "\a" << result << endl;
        break;
}
while (choise=='/'){
 result=number1/number2;
    cout << "\n*************\n \n" << "result = " <<  "\a" << result << endl;
        break;
}

    return 0;

}
