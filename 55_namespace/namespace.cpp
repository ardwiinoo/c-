// namespace = memberikan scope untuk sesuatu yang kita ingin gunakan
// agar program lebih rapi

#include <iostream>
#include "otong.h"

void fungsi(){
	std::cout << "ini adalah fungsi biasa" << std::endl;
}

//using namespace otong
//using namespace std

int main(){
	fungsi();
	std::cout << otong::a << std::endl;
	otong::fungsi();
	otong::cout(500);
	return 0;
}