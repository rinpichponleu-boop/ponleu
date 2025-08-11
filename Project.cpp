#include<iostream>
using namespace(){
    int main(){ 
    //Variable declaration 
    float score; 
    string result; 
    //Type Score 
    cout << "Type Score: "; 
    cin >> score; 
    //Define  
    result = "Failed"; 
    //Test if...statement 
    if(score >= 50){
        result = "Pass"; 
    } 
    //Output 
    cout << "Result: " << result << endl; 
    return 0; 
}
}