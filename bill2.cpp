#include<iostream>
#include<string.h>
using namespace std;

class customer
{
     protected:
    string name, contact_number;
    public:
     void getinformation()
     {
          cout<<"\t\t\t\t +9~~~ Patel ice-Craem ~~~ \n";
          cout<<"\nCUSTOMER NAME : ";
          cin>>name;
          cout<<"CUSTOMER CONTACT NUMBER : ";
          cin>>contact_number;
     }

     void showinformation()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact_number<<endl;
     }

};
class Show_bill : public customer 
{

    private :   

      int  GST  ,  discount , Net_bill,bill_amt =0 ;
      int   Bill =0 , quantity;

      string Ditems[5];

     public :
         int item1()
      {
         cout<<"\nEnter Qunatity :";
         cin>>quantity;
         Ditems[0] = "DRY FRUIT   = 100 ";
         return Bill = Bill + quantity*100;
      }
      int item2()
      {
         cout<<"\nEnter Qunatity : "; 
         cin>>quantity;
         Ditems[1] = "KAJU BADAM  = 150 ";
         return Bill = Bill + quantity*150;
      }
      int item3()
      {
         cout<<"\nEnter Qunatity : "; 
         cin>>quantity;
         Ditems[2] = "VENILA   = 40";
         return Bill = Bill + quantity*40;
      }
      int item4()
      {
         cout<<"\nEnter Qunatity : ";
         cin>>quantity;
         Ditems[3] = "CHOCOLATE = 70";
         return Bill = Bill + quantity*70;
      }
      int item5()
      {
         cout<<"\nEnter Qunatity : "; 
         cin>>quantity;
         Ditems[4] = "MAVA MALAY  = 60";
         return Bill = Bill + quantity*60;
      }

      int Show_Bill_Amt()
      {          
         return bill_amt = bill_amt + Bill;
      }
      int Show_disc()
      {
         if (bill_amt >  250 )
        {
            return discount = ( bill_amt *10  ) / 100; 
        }
        else 
        {
            return discount = 0;
        }
      }
      int  Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }
      int Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - discount  ;
      }
      void Show_Net_Bill()  
      {
            Show_bill_Items();
            cout<<"\n\t TOTAL ORDER PRICE : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST               : "<<Show_GST()<<endl;
            cout<<"\n\t DISCOUNT          : "<<Show_disc() <<endl;
            cout<<"\n\t TOTAL PAY BILL    : "<<Show_Net_bill()<<endl;
            cout<<"\n\n\t  THANK YOU FOR  VISIT\n\n\t    HAVE A NICE DAY"<<endl; 
      }
     void Show_bill_Items()
      {
         int i ;

         for(i=0;i<5;i++)
         {
         if(!Ditems[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<endl;
         }
         }
      }
};
int main ()
{
    Show_bill a ;
     
        a.getinformation();
        cout<<"\n\t\t *** Menu *** \n";
        cout<<" \n  [1] DRY FRUIT                    : RS. 100 /- "; 
        cout<<" \n  [2] KAJU BADAM                   : RS. 150 /- "; 
        cout<<" \n  [3] VENILA                       : RS. 40  /- "; 
        cout<<" \n  [4] CHOCOLATE                    : RS. 70  /- ";
        cout<<" \n  [5] MAVA MALAY                   : RS. 60  /- \n";
       
        int choice ;
       do
        {
         cout<<"\nEnter your choice : ";
         cin>>choice ;
        switch (choice)
        {
        case 1: 
             a.item1();
             break;
        case 2: 
             a.item2();
             break;
        case 3: 
             a.item3(); 
             break;
        case 4: 
             a.item4();
             break;
        case 5: 
            a.item5();
             break;

        case 0: 
           break;
        }

      } while (choice!=0);
        a.showinformation();
        a.Show_Net_Bill();    
}