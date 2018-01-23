/*
 * File:   newmain55.c
 * Author: user
 *
 * Created on 29 avril 2017, 18:04
 */


#include <xc.h>
int selection(int tab1[],int tab2[])
{int i=0,min=0;
/*for(i=0;i<3;i++)
       {
           if((tab1[i]==1))
           {
             min=i;
           }
       
       }*/
       for(i=0;i<15;i++)
       {
           if((tab1[i]==1)&&((tab2[i]) < (tab2[min])))   
           {
         
              
             min=i;
           }}
/*
int j=0;
for(i=0;i<15;i++)
{
    for(j=0;j<14;j++)
    { if((tab2[i]==1)&&(tab2[j+1]==tab2[i]))   
           { 
             min=i;
           }
    }
}*/

           return min;





}

void afficher(int im)
{
  
    switch (im) 
    {
       case 0 : PORTA=0x00;  PORTD=0x00;
        break;
        case 1 : PORTA=0x01;  PORTD=0x00;
        break;
        case 2 : PORTA= 0x02;  PORTD=  0x00;
        break;
        case 3 : PORTA=  0x03;  PORTD=  0x00;
        break;
         case 4 : PORTA=  0x04;  PORTD=  0x00;
         break;
           case 5: PORTA=  0x05;  PORTD=  0x00;
         break;
           case 6 : PORTA=  0x06;  PORTD=  0x00;
         break;
           case 7 : PORTA=  0x07;  PORTD=  0x00;
         break;
            case 8: PORTA=  0x08;  PORTD=  0x00;
         break;
            case 9 : PORTA=  0x09;  PORTD=  0x00;
         break;
            case 10 : PORTA=  0x00;  PORTD=  0x01;
         break;
            case 11: PORTA=  0x01;  PORTD=  0x01;
         break;
            case 12 : PORTA=  0x02;  PORTD=  0x01;
         break;
            case 13 : PORTA=  0x03;  PORTD=  0x01;
         break;
            case 14 : PORTA=  0x04;  PORTD=  0x01;
         break;
            case 15 : PORTA=  0x05;  PORTD=  0x01;
         break;
         
    }

}


   void attente (void)
{int i=0,j=0;
    for ( i=0; i<255;i++)
                {
                    for ( j=0; j<100;j++)
                    {
                    }
                    }
}




void interrupt  abc()	// Interrupt function definition 
{
if (INTCONbits.INTF == 1) // If the external flag is 1, do .....
{
INTCON,INTF = 0;	// Reset the external interrupt flag

RE1=1;

  int tab1[15];
    int tab2[15];
     int v ;
      for (v=0;v<15;v++)
    {
           tab1[v]=0;
    }
    /*
     tab2[0]=40; tab2[1]=14; tab2[2]=13;    tab2[3]=44; tab2[4]=18; tab2[5]=17;
    tab2[6]=29; tab2[7]=25; tab2[8]=19;    tab2[9]=70; tab2[10]=80; tab2[11]=20;
    tab2[12]=33; tab2[13]=37; tab2[14]=80;    tab2[15]=77;

    
*/

    
  int im=0;   
  int min =0;

  int i=0,j=0;
   
       for (i=0;i<15;i++)
    {
           tab1[i]=0;
    }
  
    
      if (RB1==1)
        {
            tab1[0]=1;
                   
       }
         if (RB2==1)
        {
          tab1[1]=1;
         
         }
      if (RB3==1)
        {
            tab1[2]=1;
            
         }
    if (RB4==1)
        {
            tab1[3]=1;
            
         }
    if (RB5==1)
        {
            tab1[4]=1;
            
         }
    if (RB6==1)
        {
            tab1[5]=1;
            
         }
    if (RB7==1)
        {
            tab1[6]=1;
            
         }
    if (RC0==1)
        {
            tab1[7]=1;
            
         }
  if (RC1==1)
        {
            tab1[8]=1;
            
         }
  if (RC2==1)
        {
            tab1[9]=1;
            
         }
  if (RC3==1)
        {
            tab1[10]=1;
            
         }
  if (RC4==1)
        {
            tab1[11]=1;
            
         }
  if (RC5==1)
        {
            tab1[12]=1;
            
         }
  if (RC6==1)
        {
            tab1[13]=1;
            
         }
  if (RC7==1)
        {
            tab1[14]=1;
            
         }
    
  min=selection(tab1,tab2);
       
 
  
    tab2[min]=tab2[min]+1;
    int q ;
      for (q=0;q<15;q++)
    {
           tab1[q]=0;
    }
    
   
    im= min+1;
    afficher(im);
         
        attente();
                attente();

        RE0=1 ; 
    }}

//--Main Funtion --

void main(void)
{
	TRISA = 0X00;
  TRISB = 0xff;
  TRISC = 0xff;
    TRISE = 0x00;


  TRISD = 0X00;
INTCON = 0x90;
  PORTA=0x00;// Set the value of PORT C to 0
///////T0CS = 0; 
 INTCONbits.GIE=1;
  INTCONbits.T0IE=0;
   INTCONbits.INTE=1;
    INTCONbits.INTF =0;
    /*
 INTCONbits,INTIF=0;	// Reset the external interrupt flag
INTCON,INTE=1;	// Enable external interrupts from RB0
INTCON,GIE=1;	// Global interrupt enable

 OPTION_REG,INTEDG = 1;*/
  
int k=0;
PORTD=  0x00;

RE0=1;

while(1)
{
// Increase the PORT B value by 1.
///////for(i=0;i<300;i++);	// a simple delay
   
    attente ();
}
}
 