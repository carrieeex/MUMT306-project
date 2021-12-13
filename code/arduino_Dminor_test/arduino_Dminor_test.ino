#define MIDI_ON 144
#define MIDI_OFF 128
#define MIDI_PROGRAM 192
#define MIDI_CHANNEL 0

#define DRUM_CHANNEL 9

#define SteelDrum 114
#define D3 50
#define A_3 57
#define Bb3 58
#define C4 60
#define D4 62
#define E4 64
#define F4 65
#define G4 67
#define A_4 69

const int NOTE0 = A0;int Note0Val = 0;
const int NOTE1 = A1;int Note1Val = 0;
const int NOTE2 = A2;int Note2Val = 0;
const int NOTE3 = A3;int Note3Val = 0;
const int NOTE4 = A4;int Note4Val = 0;
const int NOTE5 = A5;int Note5Val = 0;
const int NOTE6 = A6;int Note6Val = 0;
const int NOTE7 = A7;int Note7Val = 0;
const int NOTE8 = A8;int Note8Val = 0;

int value;

const int threshold = 3; //

#include <elapsedMillis.h>
elapsedMillis timeElapsed; //declare global if you don't want it reset every time loop runs
unsigned int interval = 800;

int x0 = 0;
int x1 = 0;
int x2 = 0;
int x3 = 0;
int x4 = 0;
int x5 = 0;
int x6 = 0;
int x7 = 0;
int x8 = 0;

int test = 100;

int x0n = 0;
int x1n = 0;
int x2n = 0;
int x3n = 0;
int x4n = 0;
int x5n = 0;
int x6n = 0;
int x7n = 0;
int x8n = 0;

int y0 = 0;
int y1 = 0;
int y2 = 0;
int y3 = 0;
int y4 = 0;
int y5 = 0;
int y6 = 0;
int y7 = 0;
int y8 = 0;

int y0n = 0;
int y1n = 0;
int y2n = 0;
int y3n = 0;
int y4n = 0;
int y5n = 0;
int y6n = 0;
int y7n = 0;
int y8n = 0;

// midi2Max function declaration with optional arguments
void midi2Max( int cmd, int data1 = -1, int data2 = -1 );

void setup() {
  Serial.begin(9600);// set the MIDI baud rate
}

void loop() {// put your main code here, to run repeatedly:
  if(Serial.available()){
    value = Serial.read();}

  Note0Val = analogRead(A0);
  x0 = Note0Val;
  y0 = 0.7*y0n+0.3*(x0+x0n);
  x0n = x0;
  y0n = y0;
  if (y0 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, D3, 127 );
    midi2Max( MIDI_OFF, D3, 127 );
    timeElapsed = 0;
  }

  Note1Val = analogRead(A1);
  x1 = Note1Val;
  y1 = 0.7*y1n+0.3*(x1+x1n);
  x1n = x1;
  y1n = y1;
  if (y1 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, A_3, 127 );
    midi2Max( MIDI_OFF, A_3, 127 );
    timeElapsed = 0;
    }

  Note8Val = analogRead(A8);
  x8 = Note8Val;
  y8 = 0.7*y8n+0.3*(x8+x8n);
  x8n = x8;
  y8n = y8;
  if (y8 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, Bb3, 127 );
    midi2Max( MIDI_OFF, Bb3, 127 );
    timeElapsed = 0;
    }

  Note2Val = analogRead(A2);
  x2 = Note2Val;
  y2 = 0.7*y2n+0.3*(x2+x2n);
  x2n = x2;
  y2n = y2;
  if (y2 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, C4, 127 );
    midi2Max( MIDI_OFF, C4, 127 );
    timeElapsed = 0;
    }
    
  Note7Val = analogRead(A7);
  x7 = Note7Val;
  y7 = 0.7*y7n+0.3*(x7+x7n);
  x7n = x7;
  y7n = y7;
  if (y7 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, D4, 127 );
    midi2Max( MIDI_OFF, D4, 127 );
    timeElapsed = 0;
    }
    
  Note3Val = analogRead(A3);
  x3 = Note3Val;
  y3 = 0.7*y3n+0.3*(x3+x3n);
  x3n = x3;
  y3n = y3;
  if (y3 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, E4, 127 );
    midi2Max( MIDI_OFF, E4, 127 );
    timeElapsed = 0;
    }
    
  Note6Val = analogRead(A6);
  x6 = Note6Val;
  y6 = 0.7*y6n+0.3*(x6+x6n);
  x6n = x6;
  y6n = y6;
  if (y6 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, F4, 127 );
    midi2Max( MIDI_OFF, F4, 127 );
    timeElapsed = 0;
    }
    
  Note4Val = analogRead(A4);
  x4 = Note4Val;
  y4 = 0.7*y4n+0.3*(x4+x4n);
  x4n = x4;
  y4n = y4;
  if (y4 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, G4, 127 );
    midi2Max( MIDI_OFF, G4, 127 );
    timeElapsed = 0;
    }
    
  Note5Val = analogRead(A5);
  x5 = Note5Val;
  y5 = 0.7*y5n+0.3*(x5+x5n);
  x5n = x5;
  y5n = y5;
  if (y5 >= threshold && timeElapsed > interval){
    midi2Max( MIDI_PROGRAM + MIDI_CHANNEL, SteelDrum );
    midi2Max( MIDI_ON, A_4, 127 );
    midi2Max( MIDI_OFF, A_4, 127 );
    timeElapsed = 0;
    }
  delay(1);  // delay to avoid overloading the serial port buffer
}

// Send a MIDI message of 1 to 3 ``bytes'' (without checking values)

void midi2Max( int cmd, int data1, int data2 )
{
  Serial.print( cmd );
  if ( data1 >= 0 ) {
    Serial.print(' ');
    Serial.print( data1 );
  }
  if ( data2 >= 0 ) {
    Serial.print(' ');
    Serial.print( data2 );
  }
  Serial.println();
}
