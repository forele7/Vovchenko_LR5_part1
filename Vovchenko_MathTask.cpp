#include "Vovchenko_MathTask.h"

using namespace std;

int main()
{
    int A = 0, B = 0;
    
    Enter_Number(A, "Input height A: ");
    Enter_Number(B, "Input width B: ");

    int Rectangle = CalculateRectangle(A, B);

    cout << "Area of Rectangle = " << Rectangle << endl;
}