#include <OneWire.h>
// #include <DallasTemperature.h>
// #include <QubitroMqttClient.h>
// #include <WiFi.h>

// #define DS18B20PIN 2
#define TdsSensorPin 15
//const int potPin = 4;
// float ph;
float Value = 0;

// int LED_BUILTIN = 2;

// OneWire oneWire(DS18B20PIN);

// DallasTemperature sensor(&oneWire);

// // WiFi Client
// WiFiClient wifiClient;

// // Qubitro Client
// QubitroMqttClient mqttClient(wifiClient);


// // WiFi Credentials
// char ssid[] = "xxx";   
// char pass[] = "xxx";

// char deviceID[] = "xxx";
// char deviceToken[] = "xxx";
// const char host[] = "broker.qubitro.com";
// int port = 1883;

// unsigned long next = 0;

void setup() {
  Serial.begin(115200);
  // pinMode(potPin, INPUT);
  pinMode(TdsSensorPin, INPUT);
  // sensor.begin();
  // pinMode (LED_BUILTIN, OUTPUT);

  // wifi_init();
  // qubitro_init();

}
void loop() {
  Serial.println("----------IoT Water Quality Monitoring System----------");
  int sensorValue = analogRead(TdsSensorPin);
  float voltage = sensorValue * (3.3 / 4096.0);

  Serial.print("TDS Sensor Output (V): ");
  Serial.print(voltage);
  Serial.println();
  delay(1000);

  // Value = analogRead(potPin);
  // Serial.print("PH Sensor Output (V): ");
  // Serial.println(Value);

  // float voltage1 = Value * (3.3 / 4095.0);
  // ph = (3.3 * voltage1);
  // Serial.print("PH Value : ");
  // Serial.println(ph);

  // sensor.requestTemperatures();
  // float tempinC = sensor.getTempCByIndex(0);
  // Serial.print("Temperature : ");
  // Serial.println(tempinC);


  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);
  // delay(1000);

  //  String payload = "{\"TDS Sensor Output (V)\": " + String(voltage) + ",\"PH Sensor Output (V)\":" + String(Value) + ",\"PH Value\":" + String(ph) + ",\"Temperature\":" + String(tempinC) + "}";
  //   mqttClient.poll();
  //   mqttClient.beginMessage(deviceID);
  //   mqttClient.print(payload);
  //   mqttClient.endMessage();
}

// void wifi_init() {
//   // Set WiFi mode
//   WiFi.mode(WIFI_STA);

//   // Disconnect WiFi
//   WiFi.disconnect();
//   delay(100);

//   // Initiate WiFi connection
//   WiFi.begin(ssid, pass);

//   // Print connectivity status to the terminal
//   Serial.print("Connecting to WiFi...");
//   while (true)
//   {
//     delay(1000);
//     Serial.print(".");
//     if (WiFi.status() == WL_CONNECTED)
//     {
//       Serial.println("");
//       Serial.println("WiFi Connected.");

//       Serial.print("Local IP: ");
//       Serial.println(WiFi.localIP());
//       Serial.print("RSSI: ");
//       Serial.println(WiFi.RSSI());
//       break;
//     }
//   }
// }

// void qubitro_init() {
//   char host[] = "broker.qubitro.com";
//   int port = 1883;
//   mqttClient.setId(deviceID);
//   mqttClient.setDeviceIdToken(deviceID, deviceToken);
//   Serial.println("Connecting to Qubitro...");

//   if (!mqttClient.connect(host, port))
//   {
//     Serial.print("Connection failed. Error code: ");
//     Serial.println(mqttClient.connectError());
//     Serial.println("Visit docs.qubitro.com or create a new issue on github.com/qubitro");
//   }
//   Serial.println("Connected to Qubitro.");
//   mqttClient.subscribe(deviceID);
//   delay(2000);

// }
