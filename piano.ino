/* TinyTone for ATtiny85 */

// Notes
const int Note_C  = 239;
const int Note_CS = 225;
const int Note_D  = 213;
const int Note_DS = 201;
const int Note_E  = 190;
const int Note_F  = 179;
const int Note_FS = 169;
const int Note_G  = 159;
const int Note_GS = 150;
const int Note_A  = 142;
const int Note_AS = 134;
const int Note_B  = 127;

int Speaker = 1;

int octave = 4;
int noise = 0;
int rep = 4;

void TinyTone(unsigned char divisor, unsigned char octave, unsigned long duration)
{
  TCCR1 = 0x90 | (8-octave); // for 1MHz clock
  // TCCR1 = 0x90 | (11-octave); // for 8MHz clock
  OCR1C = divisor-1;         // set the OCR
  //delay(duration);
  //TCCR1 = 0x90;              // stop the counter
}

void setup()
{
  pinMode(Speaker, OUTPUT);
  //pinMode(0, INPUT);
  TinyTone(Note_B, octave, 500);
  delay(500);
  //note(1, 4)
}

int nDuration = 50;
int error = 17;

void loop()
{
  //playTune();
  //delay(1000);
  int sensor3 = analogRead(A3);
  int sensor4 = analogRead(A2);
  if (sensor3 > 167 - error && sensor3 <= 169 + error){
    //if (noise < rep){
      //noise += 1;
    //} else {
      TinyTone(Note_C, octave, 10);
    //}
  } else if (sensor3 > 200 - error && sensor3 < 202 + error){
    //if (noise < rep){
      //noise += 1;
    //} else {
      TinyTone(Note_CS, octave, 10);
    //}
  } else if (sensor3 > 249 - error && sensor3 < 253 + error){
    //if (noise < rep){
      //noise += 1;
    //} else {
      TinyTone(Note_D, octave, 10);
    //}
  } else if (sensor3 > 335 - error && sensor3 < 339 + error){
    //if (noise < rep){
      //noise += 1;
    //} else {
      TinyTone(Note_DS, octave, 10);
    //}
  } else if (sensor3 > 497 - error && sensor3 < 507 + error){
    //if (noise < rep){
      //noise += 1;
    //} else {
      TinyTone(Note_E, octave, 10);
    //}
  } else if (sensor3 > 983 - error && sensor3 < 1011 + error){
    //if (noise < rep){
      //noise += 1;
    //} else {
      TinyTone(Note_F, octave, 10);
    //}
  } else if (sensor4 > 167 - error && sensor4 <= 169 + error){ //
    if (noise < rep){
      noise += 1;
    } else {
      TinyTone(Note_FS, octave, 10);
    }
  } else if (sensor4 > 200 - error && sensor4 < 202 + error){ //
    if (noise < rep){
      noise += 1;
    } else {
      TinyTone(Note_G, octave, 10);
    }
  } else if (sensor4 > 249 - error && sensor4 < 253 + error){
    if (noise < rep){
      noise += 1;
    } else {
      TinyTone(Note_GS, octave, 10);
    }
  } else if (sensor4 > 335 - error && sensor4 < 339 + error){
    if (noise < rep){
      noise += 1;
    } else {
      TinyTone(Note_A, octave, 10);
    }
  } else if (sensor4 > 497 - error && sensor4 < 507 + error){
    if (noise < rep){
      noise += 1;
    } else {
      TinyTone(Note_AS, octave, 10);
    }
  } else if (sensor4 > 983 - error && sensor4 < 1011 + error){
    if (noise < rep){
      noise += 1;
    } else {
      TinyTone(Note_B, octave, 10);
    }
  } else {
    noise = 0;
    //noTone(8);
    TCCR1 = 0x90;              // stop the counter
  }
  
  delay(5);
}



// Play a scale
void playTune(void) {
 /*
 TinyTone(Note_C, octave, 500);
 TinyTone(Note_D, octave, 500);
 TinyTone(Note_E, octave, 500);
 TinyTone(Note_F, octave, 500);
 TinyTone(Note_G, octave, 500);
 TinyTone(Note_A, octave, 500);
 TinyTone(Note_B, octave, 500);
 TinyTone(Note_C, octave, 500);  
 */
  
}