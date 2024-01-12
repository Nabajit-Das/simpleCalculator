
#include<bits/stdc++.h>
using namespace std;

template<class T1>
T1 add(T1 a,T1 b){
    return a+b;
}

template<class T2>
T2 subtract(T2 a,T2 b){
    return a-b;
}

template<class T3>
T3 multiplication(T3 a,T3 b){
    return a*b;
}

template<class T4>
T4 division(T4 a,T4 b){
    return a/b;
}

template<class T5>
T5 factorial(T5 a){
    if(a==0) return 1;
    return a*factorial(a-1);
}

template<class T6>
T6 exponential(T6 a,T6 b){
    return pow(a,b);
}



int main(){
    
    char continues;

    do{
        char operation;
        cout<<"\n\n\t----------------------------------------MENU----------------------------------------";
        cout<<"\n\t1. Addition (+)";
        cout<<"\n\t2. Subtraction (-)";
        cout<<"\n\t3. Multiplication (*)";
        cout<<"\n\t4. Division (/)";
        cout<<"\n\t5. Factorial (!)";
        cout<<"\n\t6. Exponential (^)";
        cout<<"\n\t Enter operator choice :\t ";
        cin>>operation;

        float a, b;
        switch(operation){
            case '+':
                cout<<"\n\tEnter first operand :\t";
                cin>>a;
                cout<<"\n\tEnter second operand :\t";
                cin>>b;
                cout<<"\n\t The result of the operation ("<<a<<" "<<operation<<" "<<b<<") = "<<add<float>(a,b);
                break;
            
            case '-':
                cout<<"\n\tEnter first operand :\t";
                cin>>a;
                cout<<"\n\tEnter second operand :\t";
                cin>>b;
                cout<<"\n\t The result of the operation ("<<a<<" "<<operation<<" "<<b<<") = "<<subtract<float>(a,b);
                break;
            
            case '*':
                cout<<"\n\tEnter first operand :\t";
                cin>>a;
                cout<<"\n\tEnter second operand :\t";
                cin>>b;
                cout<<"\n\t The result of the operation ("<<a<<" "<<operation<<" "<<b<<") = "<<multiplication<float>(a,b);
                break;

            case '/':
                cout<<"\n\tEnter first operand :\t";
                cin>>a;
                cout<<"\n\tEnter second operand :\t";
                cin>>b;
                cout<<"\n\t The result of the operation ("<<a<<" "<<operation<<" "<<b<<") = "<<division<float>(a,b);
                break;

            case '!':
                cout<<"\n\tEnter the operand :\t";
                cin>>a;
                cout<<"\n\t The result of the operation ("<<a<<" "<<operation<<") = "<<factorial<float>(a);
                break;

            case '^':
                cout<<"\n\tEnter first operand :\t";
                cin>>a;
                cout<<"\n\tEnter second operand :\t";
                cin>>b;
                cout<<"\n\t The result of the operation ("<<a<<" "<<operation<<" "<<b<<") = "<<exponential<float>(a,b);
                break;
            
            default:
                cout<<"\n\t!!!!!!Wrong operator input recieved !!!!! Choose among (+,-,*,/,!,^)";
        }
        cout<<"\n\t Do You want to continue (Y/N) ?";
        cin>>continues;

    }while(continues!='N' && continues!='n');

    cout<<"\n\t -----------THANK YOU-----------------";
    

    return 0;
}