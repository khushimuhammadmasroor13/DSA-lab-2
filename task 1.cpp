#include<iostream>
using namespace std;
class Shape{
	public:
		virtual int area()=0;
		
};
class Circle : public Shape{
	private:
		int radius;
		public:
			Circle(int r)
			{
				radius=r;
			}
			
			int area() override {
			 return 3.14*radius;
			
			}
		
			
};

class Rectangle : public Shape{
	private:
		int length;
		int width;
		public:
		Rectangle(int l,int w){
			length=l;
			width=w;
			
		}
		int area() override{
		return length*width;
		}
};

int main(){
	Shape* s1=new Circle(20);
	Shape* s2=new Rectangle(5,5);
	cout << "radius of the circle is :" <<	s1->area() << endl;
	
    cout << "Area of the rectangle is : " << s2->area() <<endl;
	
	delete s1;
	delete s2;
	
	
	
	
	
	
	
	return 0;
}
