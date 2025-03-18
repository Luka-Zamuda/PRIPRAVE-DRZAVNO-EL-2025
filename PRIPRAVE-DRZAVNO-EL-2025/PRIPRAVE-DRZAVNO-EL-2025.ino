
#define LED_GREEN_PIN 4
#define LED_YELLOW_PIN 5
#define LED_RED_PIN 6

#define START 7
#define STOP 8
#define NAPREJ 9
#define NAZAJ 10

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
  
  pinMode(START, INPUT);
  pinMode(STOP, INPUT);
  pinMode(NAPREJ, INPUT);
  pinMode(NAZAJ, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_GREEN_PIN, HIGH);
  digitalWrite(LED_YELLOW_PIN, HIGH);
  digitalWrite(LED_RED_PIN, HIGH);

}

