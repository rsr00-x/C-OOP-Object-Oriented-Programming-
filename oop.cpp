#include<iostream>
using namespace std;

class MyClass
{
    private:
        int feet;
        float inches;

    public:
        void SetValues(int ft, float in)
        {
            feet = ft;
            inches = in;
        }
        void GetValues()
        {
            cout << "Feet: ";
            cin >> feet;
            cout << "Inches: ";
            cin >> inches;
        }
        void ShowValues()
        {
            cout << feet << endl;
            cout << inches << endl;
        }
};

int main()
{
    MyClass a1, a2;
    a1.SetValues(100, 100.5);
    a1.ShowValues();

    a2.GetValues();
    a2.ShowValues();
}
