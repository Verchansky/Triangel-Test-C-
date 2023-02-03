#include "pch.h"
#include <limits>


//������������ ������� Test_EquilateralTriange() // ��������������� ������������
TEST(Test_Functions, Test_EquilateralTriange)
{
	//������������ ��������� ��������� ��������


	//������������ �� ���������� ����
	ASSERT_EQ(EquilateralTriange(6, 6, 6), 1);
	ASSERT_EQ(EquilateralTriange(7.77,7.77, 7.77), 1);



	//������������ �� ����������� ���� ������
	ASSERT_EQ(EquilateralTriange(6, 5, 6), 0);
	ASSERT_EQ(EquilateralTriange(12, 12, 1), 0);
	ASSERT_EQ(EquilateralTriange(1, 1, 5), 0);
	ASSERT_EQ(EquilateralTriange(15, 12, 13), 0);


	//������������� ������������

	//������������ �������������
	ASSERT_EQ(EquilateralTriange(0, 0, 0), 1);
	ASSERT_EQ(EquilateralTriange(-1, -1, -1), 1);
	ASSERT_EQ(EquilateralTriange(1, 1, 1), 1);

	//������������ dobule
	ASSERT_EQ(EquilateralTriange(1.1, 1.1, 1.1), 1);
	ASSERT_EQ(EquilateralTriange(0.5, 0.5, 0.5), 1);


	//�������
	//ASSERT_EQ(EquilateralTriange("b", 1, 1), 0);


	//��������� ������������
	//���������� 
	ASSERT_EQ(EquilateralTriange(DBL_MIN, 0, DBL_MAX), 0);

	//��������� �������
	//ASSERT_EQ(EquilateralTriange(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 0);
	ASSERT_EQ(EquilateralTriange(DBL_MAX, DBL_MAX, DBL_MAX), 1);


	//������� ������
	ASSERT_EQ(EquilateralTriange(DBL_MIN-1, DBL_MIN, DBL_MIN + 2), 0);
	ASSERT_EQ(EquilateralTriange(DBL_MIN, DBL_MIN, DBL_MIN), 1);

}

//������������ ������� Test_IsoscelesTriangle() //  ��������������� �����������
TEST(Test_Functions, Test_IsoscelesTriangle)
{
	//������������ ��������� ��������� ��������


	//������������ �� ���������� ����
	ASSERT_EQ(IsoscelesTriangle(12, 12, 6), 1);
	ASSERT_EQ(IsoscelesTriangle(10, 5, 10), 1);
	ASSERT_EQ(IsoscelesTriangle(3, 7, 7), 1);

	//Double
	ASSERT_EQ(IsoscelesTriangle(6.6, 6.6, 5), 1);
	ASSERT_EQ(IsoscelesTriangle(12.1, 5, 12.1), 1);
	ASSERT_EQ(IsoscelesTriangle(6, 2.2, 2.2), 1);



	//������������ �� ������������ ���� ������
	ASSERT_EQ(IsoscelesTriangle(6, 5, 4), 0);
	ASSERT_EQ(IsoscelesTriangle(14.4, 14.8, 12.1), 0);


	//������������� ������������

	//������������ �������������
	ASSERT_EQ(IsoscelesTriangle(0, 0, 1), 1);
	ASSERT_EQ(IsoscelesTriangle(-1, -1, -5), 1);
	ASSERT_EQ(IsoscelesTriangle(6, 1, 1), 1);

	//������������ dobule
	ASSERT_EQ(IsoscelesTriangle(1.1, 1.1, 5.1), 1);
	ASSERT_EQ(IsoscelesTriangle(1.5, 1.5, 0.5), 1);


	//�������
	//ASSERT_EQ(IsoscelesTriangle("b", 1, 1), 0);


	//��������� ������������
	//���������� 
	ASSERT_EQ(IsoscelesTriangle(DBL_MIN, 0, DBL_MAX), 0);

	//��������� �������
	ASSERT_EQ(IsoscelesTriangle(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 0);
	ASSERT_EQ(IsoscelesTriangle(DBL_MAX, DBL_MAX, 100), 1);


	//������� ������ 
	ASSERT_EQ(IsoscelesTriangle(DBL_MIN+1, DBL_MIN, DBL_MIN - 1), 0);
	ASSERT_EQ(IsoscelesTriangle(DBL_MIN, DBL_MIN, DBL_MAX), 1);

}

//������������ ������� Test_VersatileTriangle() // ��������������� ������������
TEST(Test_Functions, Test_VersatileTriangle)
{
	//������������ ��������� ��������� ��������


	//������������ �� ���������� ����
	ASSERT_EQ(VersatileTriangle(12, 13, 6), 1);
	ASSERT_EQ(VersatileTriangle(15.1, 16.2, 5.5), 1); 


	//������������ �� ������������ ���� ������
	ASSERT_EQ(VersatileTriangle(6, 6, 4), 0);
	ASSERT_EQ(VersatileTriangle(6, 6, 6), 0);
	ASSERT_EQ(VersatileTriangle(14.4, 14.4, 12.1), 0);


	//������������� ������������

	//������������ �������������
	ASSERT_EQ(VersatileTriangle(-5, 0, 0), 0);

	//������������ dobule
	ASSERT_EQ(VersatileTriangle(-1.1, 0, 5.1), 1);


	//�������
	//ASSERT_EQ(VersatileTriangle("b", 1, 1), 0);


	//��������� ������������
	//����������; 
	ASSERT_EQ(VersatileTriangle(DBL_MIN, 0, DBL_MAX), 1);

	//��������� �������
	ASSERT_EQ(VersatileTriangle(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 0);


	//������� ������ 
	ASSERT_EQ(VersatileTriangle(DBL_MIN + 1, DBL_MIN, DBL_MIN - 1), 1);

}


//������������ ������� CheckNumber() //������������ �� ������������� ������������
TEST(Test_Functions, Test_CheckNumber)
{
	//������������ �� ���������� ���� ������
	ASSERT_EQ(CheckNumber(3, 4, 5), 1);
	ASSERT_EQ(CheckNumber(3, 5, 4), 1);
	ASSERT_EQ(CheckNumber(4, 3, 5), 1);
	ASSERT_EQ(CheckNumber(4, 5, 3), 1);
	ASSERT_EQ(CheckNumber(3, 5, 4), 1);
	ASSERT_EQ(CheckNumber(3, 4, 5), 1);

	//������������ �� ������������ ���� ������

	//�������������
	//������������ �������������
	ASSERT_EQ(CheckNumber(-5, 0, 15), 0);

	//���������
	//��������� ������ ������� �� �������
	ASSERT_EQ(CheckNumber(DBL_MIN, 0, DBL_MAX), 0);

	//�������
	ASSERT_EQ(CheckNumber(DBL_MAX - 1, DBL_MAX, DBL_MAX + 1), 1);

	//������
	ASSERT_EQ(CheckNumber(DBL_MIN + 1, DBL_MIN, DBL_MIN - 1), 0);
}

//������������ ������� GetSquare() //������������ �� ��������� ������� ��������
TEST(Test_Functions, Test_GetSquare)
{

	//������������ �� ���������� ����
	ASSERT_EQ(GetSquare(3, 4, 5), 6);
	ASSERT_EQ(GetSquare(3.5, 4.5, 5.5), 7.85);

	//������������ �� ������������� ����
	ASSERT_LT(GetSquare(-3, 4, 5), 6);
	ASSERT_EQ(GetSquare(DBL_MAX, DBL_MAX, DBL_MAX), pow(DBL_MAX, 3));
	ASSERT_EQ(GetSquare(DBL_MIN, DBL_MIN, DBL_MIN), NULL);




		
}