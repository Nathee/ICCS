#define FAN01PIN 8
#define FAN02PIN 13

float fanCONTROL(float tempVALUE)
{
    if (tempVALUE >= 24)
    {
        digitalWrite(FAN01PIN, LOW);
    }
    else
    {
        digitalWrite(FAN01PIN, HIGH);
    }
}