#include "CircularBuffer.h"
#include <iostream>
using namespace std;

CircularBuffer::CircularBuffer(int size) : size_(size)
{
	arrayPtr_ = new Point[size_];
	
	for (int i = 0; i < size_; i++) arrayPtr_[i] = Point();

	newestIndex_ = -1;
}


CircularBuffer::~CircularBuffer()
{
	delete [] arrayPtr_;
}

CircularBuffer & CircularBuffer::insert(const Point &point)
{
	(newestIndex_ < size_ - 1) ? newestIndex_++ : newestIndex_ = 0;
	
	arrayPtr_[newestIndex_] = point;

	return *this;
}

Point CircularBuffer::meanValue() const
{
	double xTemp = 0;
	double yTemp = 0;

	for (int i = 0; i < size_; i++)
	{
		xTemp += arrayPtr_[i].getX();
		yTemp += arrayPtr_[i].getY();
	}
	
	return Point((xTemp/size_), (yTemp/size_));
}

void CircularBuffer::print() const
{
	if (newestIndex_ != -1)
	{
		for (int i = 0; i < size_; i++)
		{
			if ((newestIndex_ - i) >= 0)
			{
				arrayPtr_[newestIndex_ - i].print();
			}
			else
			{
				arrayPtr_[(size_ + (newestIndex_ - i)) ].print();
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < size_; i++)
		{
			arrayPtr_[newestIndex_ + 1 + i].print();
			cout << endl;
		}
	}
}