// 2021/07/25 imo lab.
// 2023/05/05 分解能設定追加
//https://garchiving.com/

// Note: A0 pin read around 0.5V with connecting to nothing.

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT_PULLUP); //https://burariweb.info/electronic-work/arduino-tips/arduino-internal-pullup.html
  analogReadResolution(12);
}

uint16_t raw;
float v;

void loop() {
  raw = analogRead(A0);
  v   = raw * 3.3 / (1 << 12);

  Serial.println(v);
  delay(10);
}