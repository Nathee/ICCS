#define FAN01PIN 8
#define FAN02PIN 9

float fanCONTROL(float tempVALUE)
{
    if (tempVALUE >= 27)
    {
        digitalWrite(FAN01PIN, LOW);
    }
    else
    {
        digitalWrite(FAN01PIN, HIGH);
    }
    if (tempVALUE <= 26)
    {
        digitalWrite(FAN02PIN, LOW);
    }
    else
    {
        digitalWrite(FAN02PIN, HIGH);
    }
    return 0;
}