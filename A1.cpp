#include<iostream>
using namespace std;

class complex{
    private:
    float real, img;

    public:

    //Constructor
    complex(): real(0), img(0) { }

    friend istream& operator>>(istream& in, complex& c){
        cout<<"Enter real and imaginary parts: ";
        in>>c.real>>c.img;
        return in;
    }

    //Operator overloading
    complex operator + (complex c2)
    {
        complex temp;
        temp.real = real + c2.real;
        temp.img = img + c2.img;

        return temp;
    }

    complex operator * (complex c2)
    {
        complex temp2;
        temp2.real = (real * c2.real) - (img * c2.img);
        temp2.img = (real * c2.img) + (img * c2.real);
        return temp2;
    }

    friend ostream& operator<<(ostream& out, const complex& c){
        out<<c.real<<" + "<<c.img<<"i";
        return out;
    }
};

int main(){
    complex c1, c2, sum, multi;
    cout<<"Enter first complex number: "<<endl;
    cin>>c1;
    cout<<"First complex number is: "<<c1<<endl;

    cout<<"\nEnter second complex number: "<<endl;
    cin >> c2;
    cout<<"Second complex number is: "<<c2<<endl;

    sum = c1+c2;
    cout<<"\nSum of complex number is: ";
    cout<<sum<<endl;

    multi = c1 * c2;
    cout<<"\nMultiplication of complex number is: ";
    cout<<multi<<endl;


    return 0;

}