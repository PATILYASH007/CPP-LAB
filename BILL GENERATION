#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Product
{
        private:
                int ID;
                string name;
                float price;
                float GST;
                float discount;

        public:
                Product();
                Product(int ID, string name, float price, float GST, float discount);
                void setID(int ID);
                void setName(string name);
                void setPrice(float price);
                void setGST(float GST);
                void setDiscount(float discount);
                int getID();
                string getName();
                float getPrice();
                float getGST();
                float getDiscount();
                void print();
};

Product::Product()
{
        ID=0;
        name=" ";
        price=0;
        GST=0;
        discount=0;
}

Product::Product(int ID, string name, float price,float GST, float discount)
{
        this->ID=ID;
        this->name=name;
        this->price=price;
        this->GST=GST;
        this->discount=discount;
}

void Product::setID(int ID)
{
        this->ID=ID;
}

void Product::setName(string name)
{
        this->name=name;
}

void Product::setPrice(float price)
{
        this->price=price;
}

void Product::setGST(float GST)
{
        this->GST=GST;
}

void Product::setDiscount(float discount)
{
        this->discount=discount;
}

int Product::getID()
{
        return this->ID;
}

string Product::getName()
{
        return this->name;
}

float Product::getPrice()
{
        return this->price;
}

float Product::getGST()
{
        return this->GST;
}

float Product::getDiscount()
{
        return this->discount;
}

void Product::print()
{
        cout<<"Product Id: "<<this->ID<<endl;
        cout<<"Product name: "<<this->name<<endl;
        cout<<"Product price: "<<this->price<<endl;
        cout<<"Product GST: "<<this->GST<<endl;
        cout<<"Product discount: "<<this->discount<<endl;       
}

class PurchasedProduct : public Product
{
        private: 
                int purchasedQuantity;
        public:
                PurchasedProduct();
                PurchasedProduct(int ID,string name,float price,float GST,float discount,int purchasedQuantity);
                void setpurchasedQuantity(int purchasedQuantity);
                int getpurchasedQuantity();
                void print();
                void bill(int ID,string name,float price,float GST,float discount,int purchasedQuantity);
};

PurchasedProduct::PurchasedProduct()
{
        this->purchasedQuantity=0;
}

PurchasedProduct::PurchasedProduct(int ID,string name,float price,float GST,float discount,int purchasedQuantity)
{
        Product::setID(ID);
        Product::setName(name);
        Product::setPrice(price);
        Product::setGST(GST);
        Product::setDiscount(discount);
        this->purchasedQuantity=purchasedQuantity;
}

void PurchasedProduct::setpurchasedQuantity(int purchasedQuantity)
{
        this->purchasedQuantity=purchasedQuantity;
}
int PurchasedProduct::getpurchasedQuantity()
{
        return this->purchasedQuantity;
}

void PurchasedProduct::print()
{
        Product::print();
        cout<<"Purchased Quantity is: "<<this->purchasedQuantity<<endl;
}

void PurchasedProduct::bill(int ID,string name,float price,float GST,float discount,int purchasedQuantity)
{
        float GST1=(price*(GST/100));
        float discount1=price*(discount/100);
        float bill=purchasedQuantity*((price+GST1)-discount1);
        cout<<"Total bill is: "<<bill<<endl<<"-------------------------------------"<<endl;
}

int main()
{
        PurchasedProduct p1(708,"Iphone 13(256GB)",68999,18,20,1);
        p1.print();
        p1.bill(708,"Iphone 13(256GB)",68999,18,20,1);
				PurchasedProduct p2(456,"Classmate Notebook/200",68,1.5,0,24);
        p2.print();
        p2.bill(456,"Classmate Notebook/200",68,1.5,0,24); 
   */     return 0;
}
