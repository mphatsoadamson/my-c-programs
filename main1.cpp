#include"Box.cpp"
#include<iostream>
using namespace std;

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    //volume of box1
    volume =Box1.GetVolume();
    cout<<"Volume of Box 1 : "<<volume<<endl;

    //volume of box2
    volume =Box2.GetVolume();
    cout<<"Volume of Box 2 : "<<volume<<endl;

    //add two object as follows
    Box3 = Box1 + Box2;

    //volume of box3
    volume =Box3.GetVolume();
    cout<<"Volume of Box 3 : "<<volume<<endl;

    return 0;
}