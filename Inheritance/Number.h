using namespace std;

class Number
{
protected:
	float firstValue;
	float secondValue;

public:
	Number(float first, float second) {
		firstValue = first;
		secondValue = second;
	}
	Number(float first) {
		firstValue = first;
	}
	float Additional() {
		return firstValue + secondValue;
	}
	float Division() {
		return firstValue / secondValue;
	}
};
