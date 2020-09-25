#include <iostream>
#include <ctime>
#include "date.h"
using namespace std;

    
        
class Product{
    private:
        struct 
            {
                string barCode;
                string name;
                float weight, prize, retailPrize;
                int stock;
                Date date;
            }productData;
        
    public:
        void setName(string name){
            productData.name = name;
        }
        void setBarcode( string barCode){
            productData.barCode = barCode;
        }
        void setWeight( float weight){
            productData.weight = weight;
        }
        void setPrize( float prize){
            productData.prize = prize;
        }
        void setRetailPrize( float rPrize){
            productData.retailPrize = rPrize;
        }
        void setStock( int quantity){
            productData.stock = 0;
            productData.stock += quantity;
        }
        void setStockReduction( int quantity){
            productData.stock -= quantity;
        }
        void setDate(){
            time_t t = time(0);   // get time now
            struct tm * now = localtime( & t );

            productData.date.setDay(now->tm_mday);
            productData.date.setMonth(now->tm_mon + 1);
            productData.date.setYear(now->tm_year + 1900);
        }

        string getBarcode(){
            return productData.barCode;
        }
        string getName(){
            return productData.name;
        }
        float getPrize(){
            return productData.prize;
        }
        float getRetailPrize(){
            return productData.retailPrize;
        }
        float getWeight(){
            return productData.weight;
        }
        float getStock(){
            return productData.stock;
        }
        string getDate(){
            return productData.date.toString();
        }
};