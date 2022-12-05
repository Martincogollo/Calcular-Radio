#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float a,b,c,x,e,termino1,termino2,termino3,aumento,z,radio_cilindro,altura_cilindro,radio_cono,altura_cono,V_cilindro,V_cono, volumen_total;



  

  srand(time(NULL));
  a=1 + rand()%3;
  b=-50 + rand()%101;
  c= rand()%6;
  e=  2.71828182845904;
  cout.precision(11);cout<<"valor de e: "<<e;
  a=3;
  b=-33;
  c=1;
  
 
  
  cout<<"\n\tel valor de a es: "<<a<<endl;
  cout<<"\tel valor de b es: "<<b<<endl;
  cout<<"\tel valor de c es: "<<c<<endl;

  termino1= sqrt((pow(e,3)));
  termino2= cbrt(2*c);
  termino3= pow((c+1)*5555.3-b,1/4.0);


  x= termino1 + termino2 - termino3 /4.5 *a*b+1;

  cout.precision(3);
  cout.setf(ios::fixed);

  cout<<"\n\tel valor de x es: "<<x<<endl;

  aumento=x * 2.5;

  cout<<"\tel aumento de x en un 250 % es: "<<aumento<<endl;

  z= aumento + x;
  
  cout<<"\tel valor total del aumento es: "<<z<<endl;

  cout<<"\n\tdigite el valor del radio: ";
  cin>>radio_cilindro;

  cout<<"\tdigite el valor de la altura del cilindro: ";
  cin>>altura_cilindro;

  cout<<"\tdigite el valor de la altura del cono: ";
  cin>>altura_cono;

  V_cilindro= M_PI * pow(radio_cilindro,2) * altura_cilindro;

  V_cono= (M_PI * pow(radio_cilindro,2) * altura_cono)/(3);

  volumen_total= V_cilindro + V_cono;

  cout<<"\n\tel volumen total del lapiz es: "<<volumen_total<<endl;













 return 0;
}