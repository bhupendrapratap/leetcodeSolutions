class Complex{
private:
	double real, img;
public:
	double GetReal(){ return real; }
	double GetImg(){ return img; }
	Complex(double real, double img) :real(real), img(img){}
	Complex(){}
	//Complex(double a, double b){ real = a; img =b; }
	Complex operator+(Complex& c)
	{
		Complex result;
		result.real = real + c.real;
		result.img = img + c.img;
		return result;
	}

};