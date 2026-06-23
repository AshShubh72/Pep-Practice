#include <iostream>
 void doubleThenumber(int$num){
        num *=2;
    cout <<"inside the function: "<<num<<endl;
    }
int main() {
   
int num = 5;
cout <<"before calling the function: "<<num<<endl;
doubleThenumber(num);
cout <<"after calling the function: "<<num<<endl;   

    return 0;
}
