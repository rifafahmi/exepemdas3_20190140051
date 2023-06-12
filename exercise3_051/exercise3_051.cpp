#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input(){}
	virtual float Luas(int a) { return 0; }
	virtual float keliling(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};
class lingkaran :public bidangDatar {
private:
	double jariJari;
public:
	lingkaran(double jariJari):jariJari(jariJari){}
	double hitungLuas() {
		ret
	}

};
class bujursangkar :public bidangDatar {

};
int main(){}