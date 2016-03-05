#pragma once
class CircularBuffer
{
public:
	CircularBuffer(int size);
	~CircularBuffer();
	CircularBuffer & insert(int);
	double meanValue() const;
	void print() const;
private:
	int size_;
	int newestIndex_;
	int* arrayPtr_;
};

