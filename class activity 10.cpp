#include<iostream>

int main(){
    
    double sales, commission;

    std::cout<<"Enter the sales amount:$";
    std::cin>>sales;

    //calculate commission
    if(sales<=10000){
        commission=sales*0.10;  //10% commission for sales
    } else if (sales<=15000){
        commission=sales*0.15;
    } else {
        commission=sales*0.20;
    }

    std::cout<<"The commission is:$"<<commission<<std::endl;

    return 0;
}