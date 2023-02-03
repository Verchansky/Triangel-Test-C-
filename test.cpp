#include "pch.h"
#include <limits>


//Тестирование функции Test_EquilateralTriange() // Равностороннего треугольника
TEST(Test_Functions, Test_EquilateralTriange)
{
	//Тестирование разлчиных вариантов значений


	//Тестирование на корректный ввод
	ASSERT_EQ(EquilateralTriange(6, 6, 6), 1);
	ASSERT_EQ(EquilateralTriange(7.77,7.77, 7.77), 1);



	//Тестирование на некоррктный ввод данных
	ASSERT_EQ(EquilateralTriange(6, 5, 6), 0);
	ASSERT_EQ(EquilateralTriange(12, 12, 1), 0);
	ASSERT_EQ(EquilateralTriange(1, 1, 5), 0);
	ASSERT_EQ(EquilateralTriange(15, 12, 13), 0);


	//Эквивалентное тестирование

	//Тестирование целочисленные
	ASSERT_EQ(EquilateralTriange(0, 0, 0), 1);
	ASSERT_EQ(EquilateralTriange(-1, -1, -1), 1);
	ASSERT_EQ(EquilateralTriange(1, 1, 1), 1);

	//Тестирование dobule
	ASSERT_EQ(EquilateralTriange(1.1, 1.1, 1.1), 1);
	ASSERT_EQ(EquilateralTriange(0.5, 0.5, 0.5), 1);


	//Символы
	//ASSERT_EQ(EquilateralTriange("b", 1, 1), 0);


	//Граничное тестирование
	//Граниченое 
	ASSERT_EQ(EquilateralTriange(DBL_MIN, 0, DBL_MAX), 0);

	//Граничное Верхная
	//ASSERT_EQ(EquilateralTriange(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 0);
	ASSERT_EQ(EquilateralTriange(DBL_MAX, DBL_MAX, DBL_MAX), 1);


	//Гранциа Нижная
	ASSERT_EQ(EquilateralTriange(DBL_MIN-1, DBL_MIN, DBL_MIN + 2), 0);
	ASSERT_EQ(EquilateralTriange(DBL_MIN, DBL_MIN, DBL_MIN), 1);

}

//Тестирование функции Test_IsoscelesTriangle() //  Равнобедренного треугольнка
TEST(Test_Functions, Test_IsoscelesTriangle)
{
	//Тестирование разлчиных вариантов значений


	//Тестирование на корректный ввод
	ASSERT_EQ(IsoscelesTriangle(12, 12, 6), 1);
	ASSERT_EQ(IsoscelesTriangle(10, 5, 10), 1);
	ASSERT_EQ(IsoscelesTriangle(3, 7, 7), 1);

	//Double
	ASSERT_EQ(IsoscelesTriangle(6.6, 6.6, 5), 1);
	ASSERT_EQ(IsoscelesTriangle(12.1, 5, 12.1), 1);
	ASSERT_EQ(IsoscelesTriangle(6, 2.2, 2.2), 1);



	//Тестирование на некорректный ввод данных
	ASSERT_EQ(IsoscelesTriangle(6, 5, 4), 0);
	ASSERT_EQ(IsoscelesTriangle(14.4, 14.8, 12.1), 0);


	//Эквивалентное тестирование

	//Тестирование целочисленные
	ASSERT_EQ(IsoscelesTriangle(0, 0, 1), 1);
	ASSERT_EQ(IsoscelesTriangle(-1, -1, -5), 1);
	ASSERT_EQ(IsoscelesTriangle(6, 1, 1), 1);

	//Тестирование dobule
	ASSERT_EQ(IsoscelesTriangle(1.1, 1.1, 5.1), 1);
	ASSERT_EQ(IsoscelesTriangle(1.5, 1.5, 0.5), 1);


	//Символы
	//ASSERT_EQ(IsoscelesTriangle("b", 1, 1), 0);


	//Граничное тестирование
	//Граниченое 
	ASSERT_EQ(IsoscelesTriangle(DBL_MIN, 0, DBL_MAX), 0);

	//Граничное Верхная
	ASSERT_EQ(IsoscelesTriangle(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 0);
	ASSERT_EQ(IsoscelesTriangle(DBL_MAX, DBL_MAX, 100), 1);


	//Гранциа Нижная 
	ASSERT_EQ(IsoscelesTriangle(DBL_MIN+1, DBL_MIN, DBL_MIN - 1), 0);
	ASSERT_EQ(IsoscelesTriangle(DBL_MIN, DBL_MIN, DBL_MAX), 1);

}

//Тестирование функции Test_VersatileTriangle() // Разностороннего треугольника
TEST(Test_Functions, Test_VersatileTriangle)
{
	//Тестирование разлчиных вариантов значений


	//Тестирование на корректный ввод
	ASSERT_EQ(VersatileTriangle(12, 13, 6), 1);
	ASSERT_EQ(VersatileTriangle(15.1, 16.2, 5.5), 1); 


	//Тестирование на некорректный ввод данных
	ASSERT_EQ(VersatileTriangle(6, 6, 4), 0);
	ASSERT_EQ(VersatileTriangle(6, 6, 6), 0);
	ASSERT_EQ(VersatileTriangle(14.4, 14.4, 12.1), 0);


	//Эквивалентное тестирование

	//Тестирование целочисленные
	ASSERT_EQ(VersatileTriangle(-5, 0, 0), 0);

	//Тестирование dobule
	ASSERT_EQ(VersatileTriangle(-1.1, 0, 5.1), 1);


	//Символы
	//ASSERT_EQ(VersatileTriangle("b", 1, 1), 0);


	//Граничное тестирование
	//Граниченое; 
	ASSERT_EQ(VersatileTriangle(DBL_MIN, 0, DBL_MAX), 1);

	//Граничное Верхная
	ASSERT_EQ(VersatileTriangle(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 0);


	//Гранциа Нижная 
	ASSERT_EQ(VersatileTriangle(DBL_MIN + 1, DBL_MIN, DBL_MIN - 1), 1);

}


//Тестирование функции CheckNumber() //Тестирование на существование треугольника
TEST(Test_Functions, Test_CheckNumber)
{
	//Тестирование на корркетный ввод данных
	ASSERT_EQ(CheckNumber(3, 4, 5), 1);
	ASSERT_EQ(CheckNumber(3, 5, 4), 1);
	ASSERT_EQ(CheckNumber(4, 3, 5), 1);
	ASSERT_EQ(CheckNumber(4, 5, 3), 1);
	ASSERT_EQ(CheckNumber(3, 5, 4), 1);
	ASSERT_EQ(CheckNumber(3, 4, 5), 1);

	//Тестирование на некорректный ввод данных

	//Эквивалентное
	//Тестирование целочисленные
	ASSERT_EQ(CheckNumber(-5, 0, 15), 0);

	//Граничное
	//Граничное нижней границы до верхней
	ASSERT_EQ(CheckNumber(DBL_MIN, 0, DBL_MAX), 0);

	//Верхная
	ASSERT_EQ(CheckNumber(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 1);

	//Нижная
	ASSERT_EQ(CheckNumber(DBL_MIN + 1, DBL_MIN, DBL_MIN - 1), 0);
}

//Тестирование функции GetSquare() //Тестирование на коррктный возрват значений
TEST(Test_Functions, Test_GetSquare)
{

	//Тестирование на корректный ввод
	ASSERT_EQ(GetSquare(3, 4, 5), 6);
	ASSERT_EQ(GetSquare(3.5, 4.5, 5.5), 7.85);

	//Тестирование на некорркектный ввод
	ASSERT_LT(GetSquare(-3, 4, 5), 6);
	ASSERT_EQ(GetSquare(DBL_MAX, DBL_MAX, DBL_MAX), pow(DBL_MAX, 3));
	ASSERT_EQ(GetSquare(DBL_MIN, DBL_MIN, DBL_MIN), NULL);




		
}