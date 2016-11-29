#include<iostream>
#include<exception>
#include<cmath>

using namespace std;

class ExAlltz : public exception {
	virtual const char* what() const throw() {
		return "Element A mniejszy lub rowny 0";
	}
};

class ExBlltz : public exception {
	virtual const char* what() const throw() {
		return "Element B rowny 0";
	}
};

template <class T> class formula
{
	T A;
	T B;
	T result;
	ExAlltz lltz;
	ExBlltz mltz;

	void count()
	{
		result = (sqrt(A)) / B;
	}

	public:
		formula(T a, T b): A(a), B(b) {}

		void doOperation()
		{
			try {
				if (A <= 0) throw lltz;
				if (B == 0) throw mltz;
				count();
			}
			catch (exception& e)
			{
				cout << e.what() << endl;
			}
			
		}

		T getResult()
		{
			return result;
		}


};

int main()
{
	formula<int> obint(16, 4);
	obint.doOperation();
	cout << "INT dane ok: " << obint.getResult() << endl;

	formula<int> obintb(-2, 4);
	obintb.doOperation();
	cout << "INT A zle: " << obintb.getResult() << endl;

	formula<int> obintbb(16, 0);
	obintbb.doOperation();
	cout << "INT B zle: " << obintbb.getResult() << endl;

	formula<float> obft(16.34, 4.67);
	obft.doOperation();
	cout << "FLOAT dane ok: " << obft.getResult() << endl;

	formula<float> obftb(-2.34, 4.55);
	obftb.doOperation();
	cout << "FLOAT A zle: " << obftb.getResult() << endl;

	formula<float> obftbb(16.45, 0.0);
	obftbb.doOperation();
	cout << "FLOAT B zle: " << obftbb.getResult() << endl;

	formula<double> obdb(16.3423, 4.6778);
	obdb.doOperation();
	cout << "DOUBLE dane ok: " << obdb.getResult() << endl;

	formula<double> obdbb(-2.3445, 4.5523);
	obdbb.doOperation();
	cout << "DOUBLE A zle: " << obdbb.getResult() << endl;

	formula<double> obdbbb(16.45343, 0.0);
	obdbbb.doOperation();
	cout << "DOUBLE B zle: " << obdbbb.getResult() << endl;

	system("pause");
    return 0;
}

