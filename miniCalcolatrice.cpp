//Di Tommaso Fabio - Lazzaro Fabrizio - 4C SIA
#include<iostream>
using namespace std;

int add(int n1, int n2)     //Addizione
{
    int ris;
    
    ris=n1+n2;
    
    return ris;
}
int mol(int n1, int n2)            //Moltiplicazione
{
    int ris;
    
    ris=n1*n2;
    
    return ris;
}
float divi(float n1, float n2)            //Divisione
{
    float ris;
    
    ris=n1/n2;
    
    
    return ris;
}
int sot(int n1, int n2)    //Sottrazione
{
    int ris;
    
    ris=n1-n2;
    
    return ris;          
}

int main()
{
    int num1;
    int num2;
    int operazione;
    float operazione2;
    int operazione3;
    int operazione4;
    int a;          //variabile per individuare il tipo di operazione da svolgere
    
        cout<<"inserire il primo numero";
        cin>>num1;
        cout<<"inserire il secondo numero";
        cin>>num2;
        cout<<"Inserire 1=Addizione, 2=Divisione, 3=Moltiplicazione, 4=Sottrazione :"<<endl;
        cin>>a;
   
    if(a==1)
    {       
            operazione=add(num1,num2);
            cout<<"La somma dei numeri e': "<<operazione<<endl;
    }
      
    if(a==2)
    {       
            operazione2=divi(num1,num2);
            cout<<"Il quoziente dei numeri e': "<<operazione2<<endl;
    }  
    if(a==3)
    {       
            operazione3=mol(num1,num2);
            cout<<"Il prodotto dei numeri e': "<<operazione3<<endl;
    }
    if(a==4)
    {       
            operazione4=sot(num1,num2);
            cout<<"La differenza dei numeri e': "<<operazione4<<endl;
    }
         
    system("pause");
    return 0;
}
  
    
    
          
