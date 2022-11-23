#include<iostream>
using namespace std;
class human{
    public:
    int age=23;
    int height;
    int getage(){
        return this->age;
    }
};
class male:public human{
    public:
    string shade;
    void call(){
        cout<<"the male fun is called";
    }
    void wake(string ojb){
        cout<< " " << ojb << " is waking up\n";
    }
};
class overload{
    public:
    int a,b;
    int add(){
        return a+b;
    }

    void operator+ (overload &obj){
        cout<<"use calculator"<<endl;
    }
};

class Samplespace
{
public:
    int x;
    Samplespace()
    {
    
        cout << "Default Constructor" <<endl;
    }
    Samplespace(int a)
    {
        cout << "Parameterised Constructor" <<endl;
    }
    ~Samplespace()
    {
        cout << "Destructor called "<<endl;
    }
};
template <typename T>
void change(T &arg1, T &arg2)
{
    T temp;
    temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

int main(){
    male R;
    overload x,y;
    x.a=2;
    y.b=3;
    cout<<"Age of human"<<R.age<<endl;
    R.wake("Raj");
    x+y;
    Samplespace();
    Samplespace(2);
    string num1, num2 ;
    cin>>num1>>num2;

    cout << "Original data\n";
    cout << "num1 = " << num1 << "\tnum2 = " << num2;
    change(num1, num2);
    cout << "\nData after swapping\n";
    cout << "num1 = " << num1 << "\tnum2 = " << num2;
    return 0;
}