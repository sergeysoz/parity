#include <iostream>
#include <bitset>
#include <stdint.h>
#include <stdio.h>

// parity - четность/нечетность
// выбираем последовательность по позициям первой и последней цифры (а не по индексу).
// вторая цифра интервала влючительно.
// последовательность нулей и единиц.
// вопрос - сколько единиц в последовательности.
// вывод - целое число X - сколько первых ответов верные. (X+1 - первый гарантированно ложный ответ)
// обработать неправльное количество заданных вопросов. Неправильный ввод. Максимально допустимые значения.

// rules
// class
//class Interval
//{
//public:
//	Interval(int start, int end, int length)
//		:s{ start }, e{ end }, l{ length }
//	{
//	}
//	//
//	~Interval() {};
//private:
//	int s, e, l;
//};

using namespace std;
int main()
{
	int start, end, length;		// interval
	cin >> start;
	cin >> end;
	length = end - start + 1;
	unsigned char mask = 0x00;		// compute 
	char bitwise_mask = 0x00;
	char count = 0;
	while (count != length)
	{
		bitwise_mask += 0x01;
		bitwise_mask <<= 1;
		++count;
	}
	// shift:
	bitwise_mask <<= 8 - (8 - start - length);
	// 
	// initial bit space:
	bitset<8> x = 0b00000000;
	int y = 0b1;

	// cout << (x | (bitset<8>)0b00001000).count() << endl;
	// cout << x.count() << endl;
	cout << length << endl;
	cout << ((bitset<8>)bitwise_mask).count() << endl;
	
	system("pause");
	return 0;
}