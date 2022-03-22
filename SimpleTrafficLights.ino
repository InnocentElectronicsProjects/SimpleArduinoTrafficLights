// variables
int LED_GREEN = 2;
int LED_YELLOW = 3;
int LED_RED = 4;
#define DELAY_G 6000
#define DELAY_Y 3000
#define DELAY_R 6000


// basic functions
void setup()
{
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop()
{
  Serial.begin(9600);
  green();
  delay(DELAY_G);
  yellow();
  delay(DELAY_Y);
  red();
  delay(DELAY_R);
}
void red()
{
  Serial.println("Red LED");
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, HIGH);
}
void yellow()
{
  Serial.println("YELLOW LED");
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_RED, LOW);
}
void green()
{
  Serial.println("GREEN LED");
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, LOW);
}
