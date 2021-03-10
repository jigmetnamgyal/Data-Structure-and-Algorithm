#include <iostream>
using namespace std;
class Box{
    private:
        int l , b, h;
    public:
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int length, int breath, int height){
            l = length;
            b = breath;
            h = height;
        }
        Box(Box &B){
            l = B.l;
            h = B.h;
            b = B.b;
        }
        int getLength() const{
            return l;
        }
        int getHeight() const{
            return h;
        }
        int getBreath() const{
            return b;
        }

        long long CalculateVolume(){
            return (long long) l * b * h;
        }

        bool operator <(Box& B){
            bool con1 = l < B.l;
            bool con2 = b < B.b && l == B.l;
            bool con3 = h < B.h && b == B.b && l == B.l;

            if(con1 || con2 || con3)
                return true;
            return false;
        }

        //friend function is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.
        friend ostream& operator<<(ostream& out, Box& B){
            out << B.l << " " << B.b << " " << B.h;
            return out;
        }

};
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
//input 
// 5
// 2 3 4 5
// 4
// 5
// 4
// 2 4 6 7

//output
// 3 4 5
// 60
// 3 4 5
// 60
// 4 6 7