// LM35 এর আউটপুট পিনকে A0 পিনে সংযুক্ত করা হয়েছে।
const int lm35Pin = A0;  // LM35 সেন্সরের আউটপুট পিন (অ্যানালগ পিন A0)
float temperature;        // তাপমাত্রা রাখার জন্য ভেরিয়েবল

void setup() {
  // সিরিয়াল মনিটর শুরু করুন
  Serial.begin(9600);
  
}

void loop() {
  // LM35 থেকে অ্যানালগ মান read
  int sensorValue = analogRead(lm35Pin);
  
  // LM35 এর আউটপুট ভোল্টেজকে তাপমাত্রায় রূপান্তর করুন (প্রতি 10mV = 1°C)
  // 1024 হল 10-বিট ADC রেজোলিউশন (আরডুইনো ADC এর রেজোলিউশন)
  temperature = (sensorValue * 5.0 * 100.0) / 1024.0;
  
  // তাপমাত্রা সিরিয়াল মনিটরে দেখান
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // ১ সেকেন্ড বিরতি দিন
  delay(1000);
}
