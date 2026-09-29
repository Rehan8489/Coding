#include <bits/stdc++.h>
#include <iostream>

using namespace std;


void Digitcount() {
    int N = 7789;
    int count = 0;
    while (N > 0) {
        int digit = N % 10;
        cout << digit << endl;
        count = count + 1;
        N = N / 10;
    } 
    cout << "Number of digits = " << count << endl;

    
}
int reverse_number(int N) {
    int reverse = 0;
    while (N > 0) {
        int  lastdigit = N % 10;
        reverse = reverse * 10 + lastdigit;
        N = N / 10;
    }
    return reverse;
}

void palindrome(int N) {
    int rev = 0;
    int Dup = N;

    while (N > 0) {
        int ld = N % 10;
        rev = rev * 10 + ld;  // ✅ correct way to build reverse
        N = N / 10;
    }

    if (rev == Dup) {
        cout << "THIS NUMBER IS PALINDROME" << endl;
    } else {
        cout << "THIS NUMBER IS NOT A PALINDROME" << endl;
    }
}
void armstrong(int N){
    int sum=0;
    int dup=N;
    while (N>0){
        int ld=N%10;
        sum=sum+(ld*ld*ld);
        N=N/10;
    }
    if (sum==dup){
        cout<<"THIS NUMBER IS ARMSTRONG"<<endl;
    }
    else{
        cout<<"THIS NUMBER IS NOT ARMSTRONG"<<endl;
    }

}
void print_all_divisors(int N){
    for (int i=1;i<=N;i++){
        if (N%i==0){
            cout<<i<<endl;
        }

    }
    

}
// better time complexity approach

void All_divisiors(int N){
    vector <int> Ls;
    // 6*6<=36
    // 7*7!=36
    for( int i=1;i*i<=N;i++){
        if (N%i==0){
            Ls.push_back(i);
            cout<<i<<endl;
            if((N/i)!=i){
                cout<<N/i<<endl;
                Ls.push_back(N/i);

            }
        }
    }
    sort(Ls.begin(),Ls.end());
    for(auto it:Ls)cout<<it<<endl;
}

void prime_number_check(int N){
     int count = 0;
    for(int i=1;i<=N;i++){
        if(N%i==0){
            count++;
        }
    }
    if (count==2){
        cout<<N<<": is prime number "<<endl;
    }
    else{
        cout<<"is not a prime number"<<endl;
    }
}
int gcd1(int N1,int N2){
    int Gcd=1;
    for ( int i=1;i<=min(N1,N2);i++){
        if (N1%i==0 && N2%i ==0){
            Gcd=i;
            
        }


    }
    return Gcd;
}
void gcd2(int N1,int N2){
    for ( int i=min(N1,N2);i>=1;i--){
        if (N1%i==0 && N2%i==0){
            cout<<"the gcd of the given number is"<<i;
            break;
            
        }

    }
}

//  euclidean algorithm
// gcd(n1,n2)=gcd(n1-n2,n1)#this is the main  concept 
//gcd(20,15)=gcd(5,15) =gcd()
// it is working on the series of substraction instead of this we can do
// gcd(n1,n2)=.....=gcd(n1%n2,n2)
 void euclidean_gcd(int N1,int N2){
    while(N1>0 && N2>0 ){
        if (N1>N2){
            N1=N1%N2;    
        }
        else{
            N2=N2%N1;

        }
        
    }
    if(N1==0){
        cout<<N2;
            
        }
    else{
        cout<<N1;
    }
        
    
 }
   
int main() {
    int N1, N2;
    cin >> N1>>N2;
    euclidean_gcd(N1,N2);
    return 0;

}
    