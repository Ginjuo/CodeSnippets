#include "CircularBuffer.h"
#include <iostream>
using namespace std;

CircularBuffer::CircularBuffer(int size) : size_(size)
{
	arrayPtr_ = new int[size_];
	
	for (int i = 0; i < size_; i++) arrayPtr_[i] = 0;

	newestIndex_ = -1;
}


CircularBuffer::~CircularBuffer()
{
	delete [] arrayPtr_;
}

CircularBuffer & CircularBuffer::insert(int number)
{
	(newestIndex_ < size_ - 1) ? newestIndex_++ : newestIndex_ = 0;
	
	arrayPtr_[newestIndex_] = number;

	return *this;
}

double CircularBuffer::meanValue() const
{
	double temp = 0;

	for (int i = 0; i < size_; i++)
	{
		temp += arrayPtr_[i];
	}
	
	return temp / size_;
}

void CircularBuffer::print() const
{
	if (newestIndex_ != -1)
	{
		for (int i = 0; i < size_; i++)
		{
			if ((newestIndex_ - i) >= 0)
			{
				cout << arrayPtr_[newestIndex_ - i] << " " << endl;
			}
			else
			{
				cout << arrayPtr_[(size_ + (newestIndex_ - i)) ] << " " << endl;
			}
		}
	}
	else
	{
		for (int i = 0; i < size_; i++)
		{
			cout << arrayPtr_[newestIndex_ + 1 + i] << " " << endl;
		}
	}
}