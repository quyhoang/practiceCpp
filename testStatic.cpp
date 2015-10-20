#include<iostream>

using namespace std;

class staticExp
{
private:
 static int id;
 int myId;
public:
 staticExp() {myId = id++;}
 int getID() {return myId;}
};

int staticExp::id = 1;

int main()
{
 staticExp object1;
 staticExp object2;
 cout << object1.getID() << endl;
 cout << object2.getID() << endl;
 return 1;
}

