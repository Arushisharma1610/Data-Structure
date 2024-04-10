#include <iostream>
using namespace std;

string Romanintoint(string s) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]  ={"","M","MM","MMM"};
        
        return ths[string/1000] + hrns[(string%1000)/100] + tens[(string%100)/10] + ones[num%10];
}
int main(){
    int num;
    cin>>num;

    cout<<"enter the number"<<endl;
    cout<<"the roman represenatation is: "<<Romanintoint( )<<endl;

}