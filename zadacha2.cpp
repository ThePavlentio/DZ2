#include <iostream>
#include <Windows.h>

class Counter
{
private:

	int num{};

public:

	Counter() { setNum(1); }
	Counter(int setNum) : num{ setNum } {}

	int counterPlus(int setNum) { return ++setNum; }
	int counterMinus(int setNum) { return --setNum; }
	int counterEqual(int setNum) { return setNum; }

private:

	void setNum(int setNum) { num = setNum; }

public:

	~Counter(){}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num{};
	char sign{};
	std::string userInput{};

	Counter c;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> userInput;

	if (userInput == "���")
	{
		std::cout << "�� ��������!";
		return 0;
	}

	if (userInput == "��")
	{
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> num;
		c = Counter(num);
	}

	Counter counter(num);

	std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
	std::cin >> sign;

	while(sign != 'x' && sign != '�')
	{ 
		switch (sign)
		{
		case '+':
			num = counter.counterPlus(num);
			break;
		case '-':
			num = counter.counterMinus(num);
			break;
		case '=':
			num = counter.counterEqual(num);
			std::cout << num << std::endl;
			break;
		}
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> sign;
	}
	std::cout << "�� ��������!";

	return 0;
}