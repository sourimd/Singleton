#include <iostream>

class Singleton{
private:
	int var;
	Singleton():var(0){}
public:
	static Singleton * getInstance(){
		static Singleton * ins = new Singleton();
		return ins;
	}

	int getVar(){ return var; }
	void setVar(int v){ var = v; }
};

int main(){
	Singleton * s = Singleton::getInstance();
	//std::cout << s->getVar() << std::endl;
	s->setVar(9);
	std::cout << s->getVar() << std::endl;
	Singleton * r = Singleton::getInstance();
	std::cout << r->getVar() << std::endl;

	r->setVar(11);
	std::cout << s->getVar() << std::endl;
	return 0;
}