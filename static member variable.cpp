#include<iostream>
class marksheet {
public:
	int sub1=55, sub2=45, sub3=75, sub4=60, sub5=72;
	float per;
	int result;
	// static int displaycount;    //static member function
public:
	static int displaycount;  //static member variable
	void getmarks() {
		std::cout << "subject:"<< std::endl;
		result = result_generation();
		per = percentage();
	}
	int result_generation() {
		if (sub1 >= 35 && sub2 >= 35 && sub3 >= 35 && sub4 >= 35 && sub5 >= 35)
			return 1;
		else
		    return (0);
	}
	float percentage() {
		int sum = sub1+sub2+sub3+sub4+sub5;
		return(sum / 5.0);
	}
	/* static int counter() {
	displaycount++;
    return(displaycount);
	}
	*/
	void show_result() {
		std::cout << "subject1: " << sub1 << std::endl;
		std::cout << "subject2: " << sub2 << std::endl;
		std::cout << "subject3: " << sub3 << std::endl;
		std::cout << "subject4: " << sub4 << std::endl;
		std::cout << "subject5: " << sub5 << std::endl;
		std::cout << "result:"  ;
		result == 1 ? std::cout << "PASS" : std::cout << "FAIL" << std::endl;
		std::cout << "\npercentage:" ;
		result == 1 ? std::cout << per: std::cout<<displaycount++;
		std::cout << "Display:no" <<displaycount<< std::endl;
	}
};
int marksheet::displaycount;
int main() {
	marksheet m1;
	m1.getmarks();
	m1.show_result();
	// m1.counter();
	return 0;
}