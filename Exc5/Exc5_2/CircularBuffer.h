#pragma once
#include "Point.h"

class CircularBuffer
{
public:
	CircularBuffer(int size);
	~CircularBuffer();
	CircularBuffer & insert(const Point &);
	Point meanValue() const;
	void print() const;
private:
	int size_;
	int newestIndex_;
	Point* arrayPtr_;
};

