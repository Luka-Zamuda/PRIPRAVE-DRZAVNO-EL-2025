#define LED_GREEN_PIN 4
#define LED_YELLOW_PIN 5
#define LED_RED_PIN 6

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_GREEN_PIN, HIGH);
  digitalWrite(LED_YELLOW_PIN, HIGH);
  digitalWrite(LED_RED_PIN, HIGH);

}
