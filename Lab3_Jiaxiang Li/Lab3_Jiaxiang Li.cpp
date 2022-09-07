#include <iostream>
using namespace std;

void printMenu(int& choice) {
    cout << "Welcome to my mathematical operation program!"<< endl;

    cout << "\n This calculator will provide the answer of addition, subtraction, multiplication," << endl;
    cout << " division, power, or root of two input numbers." << endl;

    cout << "\n First, please select the operation you want to perform:" << endl;
    cout << "    " << "1. Addition" << endl;
    cout << "    " << "2. Subtraction" << endl;
    cout << "    " << "3. Multiplication" << endl;
    cout << "    " << "4. Division" << endl;
    cout << "    " << "5. Power" << endl;
    cout << "    " << "6. Root" << endl;

    cout << "\n NOTE: Please type in the number before the name of the operation." << endl;
    cout << " Your selection: ";
    cin >> choice;
}

void getChoices(float& A, float& B, int& choice, string& op) {
    cout << "\n Please type in the first number: ";
    cin >> A;

    if(choice <= 4) {
        cout << " Please type in the number you want to " << op << ": ";
    }
    else if (choice == 5) {
        cout << " Please type in the number of power you want to get: ";
    }
    else if (choice == 6) {
        cout << " Please type in the number of root you want to get: ";
    }

    cin >> B;
}

void firstC(float A, float B) {
    float result(A + B);
    cout << "\n" << A << " + " << B << " = " << result << endl;

}

void secondC(float A, float B) {
    float result(A - B);
    cout << "\n" << A << " - " << B << " = " << result << endl;
}

void thirdC(float A, float B) {
    float result(A * B);
    cout << "\n" << A << " * " << B << " = " << result << endl;
}

void fourthC(float A, float B) {
    float result(A / B);
    cout << "\n" << A << " / " << B << " = " << result << endl;
}

void fifthC(float A, float B) {
    float result(pow(A, B));
    cout << "\n" << A << " ^ " << B << " = " << result << endl;
}

void sixthC(float A, float B) {
    float result(pow(A, 1/B));
    int Bint = int(B);
    if (Bint % 10 == 1) cout << "The " << B << "st root of " << A << " is " << result << endl;
    else if (Bint % 10 == 2) cout << "The " << B << "nd root of " << A << " is " << result << endl;
    else if (Bint % 10 == 3) cout << "The " << B << "rd root of " << A << " is " << result << endl;
    else cout << "The " << B << "th root of " << A << " is " << result << endl;
}

int main()
{
    int choice;
    float A, B;
    string op;

    printMenu(choice);
    if (choice == 1) op = "add";
    else if (choice == 2) op = "subtract";
    else if (choice == 3) op = "multiply";
    else if (choice == 4) op = "divide";
    else if (choice == 5) op = "power";
    else if (choice == 6) op = "root";
    getChoices(A, B, choice, op);

    if (choice == 1) firstC(A, B);
    else if (choice == 2) secondC(A, B);
    else if (choice == 3) thirdC(A, B);
    else if (choice == 4) fourthC(A, B);
    else if (choice == 5) fifthC(A, B);
    else if (choice == 6) sixthC(A, B);

    return 0;
}