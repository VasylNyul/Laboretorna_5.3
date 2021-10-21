
#include <iostream>
#include <cmath>

using namespace std;

double k(const double x);

int main()
{
    
    double zp, zk, q;
    int n;
    cout << "zp = "; cin >> zp;
    cout << "zk = "; cin >> zk;
    cout<<"n =";cin>>n;

    double dz = (zk-zp)/n;
    
    double z = zp;
    
    while (z <= zk)
    {
      q = k(z*z+1)-k(z*z-1)+2*k(z);
        cout<< z <<"  "<< k <<endl;
      z += dz;
   }
   return 0;
    
}
   double k(const double x)
 {
    if (abs(x) >= 1)
        return ((exp(x)+sin(x))/(pow(cos(x), 2)+1));
   else
   {
    double S=0;
        int i=0;
        double a=1;
        S = a;
        do
        {
            i++;
            double R = 1./exp(x) * pow(x, i)/i;
            a *= R;
            
            S += a;
        }while(i<5);
    return S;
    
   }
 
  }
