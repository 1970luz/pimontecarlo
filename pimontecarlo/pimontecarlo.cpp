#include <iostream>  
#include <cmath>     
#include <fstream>   
#include <time.h>	 
#include <stdlib.h>	 


using namespace std; 

int main(){          
	 cout<<endl<<endl;
    cout<<"                       +-+ - -+-+++++-+- -+-+  +-+--++-++-++-+- ---++-+"<<endl;
    cout<<"                       ¦-++¦ ¦+-¦¦¦¦ ¦ ¦ ¦¦¦¦  ¦¦ +-++-¦¦   ¦ ¦ ¦+-++¦"<<endl;
    cout<<"                       +-+++-+- -+++ - +-+- -  +  -+-- -+-+ - +-+-+-+-+"<<endl;
    cout<<"            ________________________     "<<endl<<endl;
    cout<<"                                          PRESENTA...                                  "<<endl;
    cout<<endl;
    cout<<"+-++-+-  +-+- --  +-+  +-++-+  +-+-       +-++-++-++-++-++-+  +-++-+  +-++-+++++-++-++-++-+--+-  +-+"<<endl;
    cout<<"¦  +-¦¦  ¦  ¦ ¦¦  ¦ ¦   ¦¦+¦   ¦-+¦  ---  ¦¦¦+¦  ¦ ¦ ¦ ¦¦¦ ¦   ¦¦+¦   ¦¦¦¦ ¦¦¦¦ ¦ +¦ ¦  +-¦+-+¦  ¦ ¦"<<endl;
    cout<<"+-+- ---++-++-+--++-+  --++-+  -  -       - -+-+ - +-+--++-+  --++-+  - -+-++++ - +-++-+- --+---++-+"<<endl;
    
    cout<<endl<<"                  ¡Con todos los números aleatorios que quieras! ¡Garantizado! ;)"<<endl<<endl;
    
    cout<<"_______________________________"<<endl<<endl;
        
    //------------------------------------------------------------------------------------------------------------

    double N; 				
    cout <<"\n\nTeclea el numero de puntos aleatorios a lanzar: ";
    cin >> N ;
    
    //------------------------------------------------------------------------------------------------------------
    
    cout<<endl<<"  +----------------------------------------------------------------------------------------+";
    cout<<endl<<"  ¦                         Número de 'dardos' a lanzar :   "<<N;
    cout<<endl<<"  +----------------------------------------------------------------------------------------+";
	
	double r=1; 		       
    srand((unsigned)time(0));  
                               
    double x;                  
    double y;
    double c=0;                
    //int m=1e7;
    int cota=10;               
    double pi_ar[cota];        
		for (int j=0; j<cota; j++) { 
        	for (int i=0; i<N; i++) {
            	x=(double)rand()/(double)RAND_MAX;   
            	y=(double)rand()/(double)RAND_MAX;   
            	x=x*r;                               
            	y=y*r;                               
            	if (x*x+y*y<r*r) {         
                	c++;
            	}
        	}	                           
 		 	pi_ar[j]=4*c/N;                
        	c=0;                           
        }                                  
    double pi=0;
    double err=0;
    
    for (int j=0; j<cota; j++) {
        pi = pi_ar[j]/cota + pi;                 
    }
    
    for (int j=0; j<cota; j++) {
        err = err + pow(pi-pi_ar[j],2)/cota;     
    }                                            
    
    err = sqrt(err);                             
    
    cout.precision(15);
    
    cout<<endl<<"  +----------------------------------------------------------------------------------------+";
    cout<<endl<<"  ¦                       "<<"Pi = "<<pi<<"  +/-  "<<err;
    cout<<endl<<"  ¦";
    cout<<endl<<"  ¦                "<<"o, dicho de otra manera, el valor de pi se encuentra entre";
    cout<<endl<<"  ¦                       "<<pi+err<<"   y   "<<pi-err;
    cout<<endl<<"  +----------------------------------------------------------------------------------------+"<<endl<<endl;

	return 0;  

}
