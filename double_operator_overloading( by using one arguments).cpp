#include <iostream>
using namespace std;
class ABC
{
    private:int a;
    int b;
    public:
    ABC (int a,int b)
    {
      this->a=a;
      this->b=b;
    }
    void show()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    ABC operator+(const ABC & X);
};
 ABC ABC::operator+(const ABC & X)
{
    ABC ob{a+X.a,b+X.b};
    return(ob);
}
int main() {
    ABC o1(3,4),o2(5,6),o3(0,0);
    o3=o1+o2;
    o3.show();
    o2.show();
    o1.show();

	return 0;
}