#include <iostream>
using namespace std;
class Employy{
    string Name;
    int idNumbers;
    string Department;
    string Position;
    public:
    Employy(string name,int idNumbers,string department,string position){
        this->Name=name;
        this->idNumbers=idNumbers;
        this->Department=department;
        this->Position=position;
    }
    Employy(string name,int idNumbers){
        this->Name=name;
        this->idNumbers=idNumbers;
    }
    Employy(){
        this->Name="";
        this->idNumbers=0;
        this->Department="";
        this->Position="";
    };
    string getName(){
        return this->Name;
    }
    void setName(string name){
        this->Name=name;
    }
    int getidNumbers(){
        return this->idNumbers;
    }
    void setidNumbers(int idNumbers){
        this->idNumbers=idNumbers;
    }
    string getDepartment(){
        return this->Department;
    }
    void setDepartment(string department){
        this->Department=department;
    }
    string getPosition(){
        return this->Position;
    }
    void set(string position){
        this->Position=position;
    }
    void display(){
        cout << this->Name <<"-" << this->idNumbers << "-" << this->Department << "-" << this->Position << endl;
    }
};
int main(){
    Employy ep1("Susan Meyers",47899,"Accounting","Vice President");
    Employy ep2("Mark Jones",39119);
    Employy ep3();
    ep1.display();
    ep2.display();
    return 0;
}