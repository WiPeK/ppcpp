#include<iostream>
#include<cmath>

using namespace std;

class elements {
		double a;
		double b;
		double c;
		double x1;
		double x2;
		double delta;

		void countDelta()
		{
			delta = (b*b) - (4 * a * c);
		}
		void countDeltaZero()
		{
			try {
				if ((-b) == 0) throw 1;
				if (2 * a == 0) throw 1;
				x1 = (-b) / (2 * a);
			}
			catch (int er)
			{
				if (er == 1)
					cout << "Dzielenie przez zero";
			}
		}

		void countDeltaNormal()
		{
			try {
				if ((-b) == 0) throw 1;
				if (2 * a == 0) throw 1;
				if (((-b) - sqrt(delta)) == 0) throw 1;
				if (((-b) + sqrt(delta)) == 0) throw 1;
				x1 = ((-b) - sqrt(delta)) / (2 * a);
				x2 = ((-b) + sqrt(delta)) / (2 * a);
			}
			catch (int er)
			{
				if (er == 1)
					cout << "Dzielenie przez zero";
			}
		}

	public:
		elements(double x, double y, double z): a(x), b(y), c(z) {}
		
		void countElements()
		{
			countDelta();
			try {	
				if (delta < 0) throw 1;
				if (delta == 0)
				{
					countDeltaZero();
					x2 = 0.0;
				}
				else
				{
					countDeltaNormal();
				}
			}
			catch(int ex)
			{
				if (ex == 1)
					cout << "Delta mniejsza od 0" << endl;
			}
		}

		double getDelta()
		{
			return delta;
		}

		double getx1()
		{
			return x1;
		}

		double getx2()
		{
			return x2;
		}
};


int main()
{
	double a, b, c;
	cout << "Podaj wspolczynnik a:" << endl;
	cin >> a;
	cout << "Podaj wspolczynnik b:" << endl;
	cin >> b;
	cout << "Podaj wspolczynnik c:" << endl;
	cin >> c;
	elements pierw(a, b, c);
	pierw.countElements();

	if (pierw.getDelta() == 0)
	{
		cout << pierw.getDelta() << endl;
		cout << "Pierwiastek wynosi: " << pierw.getx1() << endl;
	}
	else if (pierw.getDelta() > 0)
	{
		cout << pierw.getDelta() << endl;
		cout << "Pierwiastki wynosza: " << pierw.getx1() << " " << pierw.getx2() << endl;
	}

	system("pause");
    return 0;
}

