/*_____________________________________________________________________________________________________________________

        Project:        
        Module:         
        Author:         
        Date:           

        Description:
        

        Revisions:


_______________________________________________________________________________________________________________________*/

#ifndef Assign2_h
#define Assign2_h

//--------------------------------------------------------------------------------------------------------------------
//                              Global Variables
//--------------------------------------------------------------------------------------------------------------------
sbit PB1  = P1 ^ 0;                           // Pushbutton PB1
sbit PB2  = P1 ^ 1;                           // Pushbutton PB2
sbit PB3  = P1 ^ 2;                           // Pushbutton PB3   
sbit PB4  = P1 ^ 3;                           // Pushbuttom PB4
sbit PB5  = P1 ^ 4;                           // Pushbutton PB5
sbit PB6  = P1 ^ 5;                           // Pushbutton PB6
sbit PB7  = P1 ^ 6;                           // Pushbutton PB7   
sbit PB8  = P1 ^ 7;                           // Pushbuttom PB8

sbit MPB  = P3 ^ 7;													 // Pushbuttom MPB on 8051 development board

sbit LD1  = P2 ^ 0;                         // LED LD1   
sbit LD2  = P2 ^ 1;                         // LED LD2
sbit LD3  = P2 ^ 2;                         // LED LD3
sbit LD4  = P2 ^ 3;                         // LED LD4  
sbit LD5  = P2 ^ 4;                         // LED LD5   
sbit LD6  = P2 ^ 5;                         // LED LD6
sbit LD7  = P2 ^ 6;                         // LED LD7
sbit LD8  = P2 ^ 7;                         // LED LD8   

struct	Notes{
	 	int reloadH;
		int reloadL;
};

 
int vol1;
int u[]; 
int v[];
int output = 0;
unsigned int state;
struct Notes	C_0 	= {0xE9,0x2C}; //262Hz 	C
struct Notes	Cs_0	= {0xEA,0x68}; //277Hz	C#
struct Notes	D_0		= {0xEB,0xA8}; //294Hz	D
struct Notes	Ds_0	= {0xEC,0xC4}; //311Hz	D#
struct Notes	E_0 	= {0xED,0xE0}; //330Hz	E
struct Notes	F_0 	= {0xEE,0xDC}; //349Hz	F
struct Notes	Fs_0	= {0xEF,0xD5}; //370Hz	F#
struct Notes	G_0 	= {0xF0,0xBE}; //392Hz	G
struct Notes	Gs_0	= {0xF1,0x96}; //415Hz	G#
struct Notes	A_0 	= {0xF2,0x68}; //440Hz	A
struct Notes	As_0	= {0xF3,0x2A}; //466Hz	A#
struct Notes	B_0 	= {0xF3,0xE4}; //494Hz	B

//--------------------------------------------------------------------------------------------------------------------
//                              Function prototypes
//--------------------------------------------------------------------------------------------------------------------
void main(void);
void General_Init(void);
void Timer_Init(int,int);
void Voltage_Reference_Init(void);
void DAC_Init(void);
void Interrupts_Init_Play();
void Interrupts_Init_Stop();
void Interrupts_Init_Main();
void Timer2_Init(void);
void Timer1_Init90();
void Volume_state(void);
unsigned int state;
void Delay(void);
void Play_state(void);
void Interrupts_Init();
#endif    

             



