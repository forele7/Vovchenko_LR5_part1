#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"

#include "Vovchenko_MathTask.h"

using namespace cute;

void testCalculateRectangleArea()
{
    int a = 3;
    int b = 5;

    int expected = 15;

    int actual = CalculateRectangle(a, b);

    ASSERT_EQUAL (expected, actual);
}

//тест: отсев пустых значений
void testUserInput_Empty()
{
    string str = "";
    bool expected = false;
    bool actual = Input(str);
    ASSERT_EQUAL(expected, actual);
}

//тест: отсев нецифровых символов
void testUserInput_Letter()
{
    string str = "a";
    bool expected = false;
    bool actual = Input(str);
    ASSERT_EQUAL(expected, actual);
}

//тест: проверка отсева цифро-буквенных значений
void testUserInput_DigitLetterValue()
{
    string str = "5a";
    bool expected = false;
    bool actual = Input(str);
    ASSERT_EQUAL(expected, actual);
}

//тест: проверка отсева отрицательных значений
void testUserInput_NegativeValue()
{
    string str = "-5";
    bool expected = false;
    bool actual = Input(str);
    ASSERT_EQUAL(expected, actual);
}

int main()
{
    suite s;

    s.push_back(CUTE(testCalculateRectangleArea));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_NegativeValue));
    s.push_back(CUTE(testUserInput_DigitLetterValue));

    ide_listener<> listener;
    makeRunner(listener)(s, "Test CalculateRectangleArea");

    return 0;
}