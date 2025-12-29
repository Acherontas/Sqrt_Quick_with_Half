#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc,char** argv)
{
    cout<<"enter ur number and preci enter number length \n";
    long double mn;
    long double rst;
    int preci;
    int lgg;


    mn=stold(argv[1]);
    preci=stoi(argv[2]);
    lgg=stoi(argv[3]);
    string da_number;
    da_number+=to_string(mn);
    cout<<std::setprecision(preci)<< mn << " and " << da_number <<"\n";

    long double xln;
    string stl;
    long double smrst;
    int fnl=-1;
    long double frp,intp;
    long double xl;
    for(int i=0;i<=da_number.at(i);i++){
        fnl=0;
        cout<<"\n";
        cout<<"For @i " << i <<"\n";
        if(da_number.at(i)=='.'){break;}
        if(da_number.at(i)!='.'){
                                stl+=da_number.at(i);
                                //stl+=da_number.at(i+1);
                                xln=stold(stl);
                                cout<<"using " <<std::setprecision(preci)<< xln <<" ";
                                smrst=sqrt(xln);
                                frp=modf(smrst,&intp);
                                cout<<smrst << " and " << intp <<" ";
                                xl=intp*intp;
                                if(xl>mn){fnl=1;break;}
                                if(xl<mn){
                                        cout<<"\n";
                                        cout<<"-----------------------\n";
                                        int ct=0;
                                        int endt=2;
                                        while(ct<=endt){
                                            smrst=smrst*10;
                                            frp=modf(smrst,&intp);
                                            xl=intp*intp;
                                            if(xl>=mn){break;}

                                            cout<<"in while " <<ct  << " " << std::setprecision(preci)<< smrst << " and " << intp <<" \n";
                                            ct+=1;
                                        }
                                        cout<<"--------------------------\n";
                                }

                                }
                                cout<<"\n";

        if(fnl==1){break;}
        if(i>=lgg){break;}

    }

    return 0;
}
