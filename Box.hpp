#pragma once
#ifndef BOX_BOX_H
#define BOX_BOX_H


#include <sstream>      // for std::ostringstream
#include <string>       // for std::string



class Box {
public:
    void setWidth(int Width); //set the width of the box
    int getWidth() const; //return the width of the box
    void setHeight(int Height); //set the Height of the box
    int getHeight() const; //return the Height of the box
    //void FILLED(); //set the fill of the box
    //void HOLLOW(); //set the fill of the box
    //void CHECKERED(); //set the fill of the box
    std::string getFill() const; //return the fill of the box
    int numBoxes() const; //returns the current number of boxes
    static int getBoxCounter(); //const; //returns the current number of boxes
    void print() const; //print a box
    //void print(std::ostream&) const; //print a box
    std::string type() const;
    Box();  // This is the constructor
    Box(int, int, std::string);  // This is the constructor
    Box(int, int);  // This is the constructor
    ~Box();  // This is the destructor
    Box(const Box& original); // This is the copy constructor
    bool FILLED;
    bool HOLLOW;
    bool CHECKERED;
private:
    int _Height;
    int _Width;
    //int _Fill;
    static int _BoxCounter;
};

#endif //BOX_BOX_H