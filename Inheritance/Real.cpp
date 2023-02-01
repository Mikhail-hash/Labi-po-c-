#include "Real.h"
#include "Number.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;

class Real :public Number
{
public:
	Real(float firstValue) :Number(firstValue) {};
	float getLn()
	{
		if (firstValue < 0) {
			cout << "Не попал";
		}
		else {
			return log(firstValue);
		}

	};
	float degree(float power)
	{
		return pow(firstValue, power);
	};
};