#include<iostream>
#include<string>
using namespace std;
class car
{
private:
	int yearModel;
	int speed;
	string make;
public:
	car(int model,string mak)
	{
		model = yearModel;
		speed = 0;
		mak = make;
	}
	int getYearModel() const
	{
		return yearModel;
	}
	string getMake() const
	{
		return make;
	}
	int getSpeed() const
	{
		return speed;
	}
	void accelerate()
	{
		speed = speed + 5;
	 }
	void brake()
	{
		speed = speed - 5;
	}

 };
int main()
{
	car car1(2022, "Toyota");
	cout << "Toc do cua xe la :" << car1.getSpeed() << endl;
	cout << endl << "Toc do sau khi tang len 5 la " << endl;
	for (int i = 1;i <= 5;i++)
	{
		car1.accelerate();
		cout << "Toc do sau khi tang la : " << car1.getSpeed() << endl;

	}
	cout << "Toc do sau khi giam 5 la: :" << endl;
	for (int i = 1;i <= 5;i++)
	{
		car1.brake();
		cout << "Toc do sau khi giam la: " << car1.getSpeed() << endl;
	}
	return 0;
}