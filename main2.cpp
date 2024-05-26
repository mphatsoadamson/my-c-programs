#include"Person.cpp"
#include<iostream>
using namespace std;

int main(){
    Person Jane = Person("Jane",60.0f);
    Person John = Person("John",75.0f);

    float totalWeight = Jane +John;
    cout<<"Total weight: "<<totalWeight<<endl;

    if(Jane == John){
        cout<<"this is the same person"<<endl;
    }

   if(Jane != John){
        cout<<"this is not the same person"<<endl;
    }

    if(Jane < John){
        cout<<"Jane is younger than John"<<endl;
    }

   if(John > Jane ){
        cout<<"John is older than Jane"<<endl;
    }
    return 0;
}