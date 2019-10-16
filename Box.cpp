#include <iostream>
#include <ostream>
#include <sstream>      // for std::ostringstream
#include "box.hpp"
#include <string>       // for std::string

using std::cout;
using std::endl;
using std::ostream;

int Box::_BoxCounter = 0;

Box::Box(void) :_Height(1), _Width(1), FILLED(true)
{
    cout << "I made a default box and set it to " << _Height << " x " << _Width << " and " << FILLED << " !" << endl; //visible Constructor
    _BoxCounter++;
    cout << "Number of Boxes: " << _BoxCounter << endl;
}
/*Box::Box(int x, int y, std::string)
{
	_Height = y;
	_Width = x;
	_Fill = f;
	cout << "I made a box and set it to " << _Height << " x " << _Width << " and " << _Fill << " !" << endl; //visible Constructor
	_BoxCounter++;
	cout << "Number of Boxes: " << _BoxCounter << endl;
}*/
Box::Box(int x, int y)
{
    _Height = y;
    _Width = x;
    FILLED = true;
    cout << "I made a box and set it to " << _Height << " x " << _Width << " and " << FILLED << " !" << endl; //visible Constructor
    _BoxCounter++;
    cout << "Number of Boxes: " << _BoxCounter << endl;
}
Box::Box(const Box& original)  //Copy the box the right way
{
    _Height = original._Height;
    _Width = original._Width;
    FILLED = original.FILLED;
    HOLLOW = original.HOLLOW;
    CHECKERED = original.CHECKERED;
    cout << "I copied a box and set it to " << _Height << " x " << _Width << " and " << FILLED << " !" << endl;
    _BoxCounter++;
}
Box::~Box(void)
{
    cout << "I Unmade a box! DIE DIE DIE!!! HAHAHAHAHAHA!!!" << endl; //visible Destructor
    _BoxCounter--;
    cout << "Number of Boxes: " << _BoxCounter << endl;
}

void Box::setWidth(int width)
{
    _Width = width;
}
void Box::setHeight(int height)
{
    _Height = height;
}

/*
void Box::FILLED(); //set the fill of the box
{
_Fill = 0;
}
void Box::HOLLOW(); //set the fill of the box
{
_Fill = 1;
}
void Box::CHECKERED(); //set the fill of the box
{
_Fill = 2;
}*/

int Box::getWidth() const
{
    int width = _Width;
    return width;
}
int Box::getHeight() const
{
    int height = _Height;
    return height;
}

int Box::numBoxes() const //returns the current number of boxes
{
    int numBoxes = _BoxCounter;
    return numBoxes;
}

int Box::getBoxCounter()
{
    return _BoxCounter;
}



void Box::print(void) const
{
	int xX = 0;
	int yY = 0;

	if (FILLED == true)
	{
		while (yY < _Height)
		{
			xX = 0;
			while (xX < _Width)
			{
				cout << "X";
				xX++;
			}
			cout << endl;
			yY++;
		}
	}

	else
	{
		while (xX < _Width)
		{
			cout << "X";
			xX++;
		}
		cout << endl;
		xX = 0;
		while (yY < _Height - 2)
		{
			xX = 0;

			cout << "X";
			while (xX < _Width - 2)
			{
				cout << " ";
				xX++;
			}

			cout << "X";
			cout << endl;
			yY++;
		}
		xX = 0;
		while (xX < _Width)
		{
			cout << "X";
			xX++;
		}
	}
}

/*
ostream &operator<< (ostream&os, const Box & b)
{
	b.print(os);
	return os;
}
*/
/*
void Box::print(std::ostream& output) const
{
    int xX = 0;
    int yY = 0;

    if (FILLED == true)
    {
        cout << "i'm beginning to try and draw a filled box!" << endl;
        while (yY < _Height)
        {
            xX = 0;
            while (xX < _Width)
            {
                output << "x";
                cout << "x";
                xX++;
            }
            output << endl;
            cout << endl;
            yY++;
        }
    }
    else if (HOLLOW == true)
    {
        cout << "i'm beginning to try and draw a hollow box!" << endl;
        while (xX < _Width)
        {
            output << "x";
            cout << "x";
            xX++;
        }
        output << endl;
        cout << endl;
        xX = 0;
        while (yY < _Height - 2)
        {
            xX = 0;

            output << "x";
            cout << "x";
            while (xX < _Width - 2)
            {
                output << " ";
                cout << " ";
                xX++;
            }

            output << "x";
            cout << "x";
            output << endl;
            cout << endl;
            yY++;
        }
        xX = 0;
        while (xX < _Width)
        {
            output << "x";
            cout << "x";
            xX++;
        }
    }
    else if (CHECKERED == true)
    {
        cout << "NYI\n";
    }

}*/