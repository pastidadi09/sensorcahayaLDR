const int ldrPin = A1;    // Pin sensor cahaya terhubung ke pin analog A0
const int relayPin = 2;   // Pin relay terhubung ke pin digital 7
const int threshold = 500; // Ambil nilai ini sebagai ambang batas antara terang dan gelap. Sesuaikan sesuai dengan kebutuhan.

void setup() {
  pinMode(ldrPin, INPUT);  // Sensor cahaya sebagai input
  pinMode(relayPin, OUTPUT); // Relay sebagai output
  digitalWrite(relayPin, LOW); // Matikan relay saat awal
}

void loop() {
  int lightLevel = analogRead(ldrPin); // Baca nilai sensor cahaya

  if (lightLevel < threshold) {
    // Jika cahaya rendah (gelap), nyalakan lampu
    digitalWrite(relayPin, HIGH);
  } else {
    // Jika cahaya cukup terang, matikan lampu
    digitalWrite(relayPin, LOW);
  }

  delay(100); // Tunda sedikit untuk menghindari pembacaan yang berfluktuasi terlalu cepat
}
