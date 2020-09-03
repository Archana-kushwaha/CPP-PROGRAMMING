#include<iostream>
int main() {
	int count;
	for (count = 0; count <= 5; count++) {
		if (count == 3){
			continue;
	}
		count++;
		std::cout << count<<" ";
	}
}