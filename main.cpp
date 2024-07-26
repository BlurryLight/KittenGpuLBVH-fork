
#include <iostream>
#include "lbvh.cuh"

void main(int arg, char** args) {
	setbuf(stdout, nullptr); // cancel printf buffer
	Kitten::testLBVH();
}