#include <iostream>
using namespace std;

int main (){
    
    int consumo;
    
    cout<<"A continuacion se le mostrara su tarfica de la luz mensual"<<endl;
    cin>>consumo;

    if (consumo < 100)
    {
        cout<<"Tu tarifa mensual es baja" << endl;
    }
    else if (consumo > 100 && consumo < 200 )
    {
        cout<<"Tu tarifa mensual es media"<< endl;
    }else 
        cout <<" Su tarifa es alta"<< endl;
    return 0;
    }