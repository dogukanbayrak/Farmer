#include <SoftwareSerial.h>
SoftwareSerial veri_kontrol(0,1);
int led = 13;     // ledin bağladığı pin dahili pin ile beraber çalışır
int buton = A1;
int motor_pin = 9;
char veri;


void setup() {
Serial.begin(9600);         // Seri Bağlantı Hızı
veri_kontrol.begin(9600);
pinMode(led, OUTPUT);  // led pinini çıkış olarak ayarlıyoruz
pinMode(motor_pin, OUTPUT);

}

void loop() {
  veri=veri_kontrol.read();  // Bluetoothdan gelen veri veri degiskenine atandi
  delay(50);
  switch (veri)
  {
    case '1':                             //Akdeniz Mancar
    digitalWrite(led, HIGH);              // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);        // Sulama işlemi başlar
    delay(1000);                          // 1 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(10000);                          // 10sn beklenir sulama yapılır
    digitalWrite(led, HIGH);              // eğer basılı ise
    digitalWrite(motor_pin, HIGH);        // eğer basılı ise
    delay(5000);                          // 5 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case '2':                             // Karadeniz Mancar
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(3000);                         // 3 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(3000);                         // 3 sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(3000);                         // 3 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case '3':                             // Marmara Misir
    digitalWrite(led, HIGH);              // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);        // Sulama işlemi başlar
    delay(5000);                          // 5 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(5000);                          // 5 sn beklenir sulama yapılır
    digitalWrite(led, HIGH);              // eğer basılı ise
    digitalWrite(motor_pin, HIGH);        // eğer basılı ise
    delay(5000);                          // 5 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case '4':                             //Ege Mancar
    digitalWrite(led, HIGH);              // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);        // Sulama işlemi başlar
    delay(7000);                         // 7 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(5000);                          // 5 sn  beklenir sulama yapılır
    digitalWrite(led, HIGH);             // eğer basılı ise
    digitalWrite(motor_pin, HIGH);       // eğer basılı ise
    delay(1000);                         // 1 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case '5':                             // İç Anadolu Mancar
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(3000);                         // 3 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(30000);                       // 30 sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(4000);                         // 4 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case '6':                             // Dogu Anadolu Mancar
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(5000);                         // 5 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(50000);                    //   50sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(15000);                         // 15 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    case '7':                             //Guney Dogu Anadolu Mancar
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(6000);                         // 6 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(2000);                    // 2sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(4000);                         // 4 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 

    case '8':                             //Akdeniz Muz
    digitalWrite(led, HIGH);              // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);        // Sulama işlemi başlar
    delay(3000);                          // 3 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(12000);                          // 12sn beklenir sulama yapılır
    digitalWrite(led, HIGH);              // eğer basılı ise
    digitalWrite(motor_pin, HIGH);        // eğer basılı ise
    delay(7000);                          // 7 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case '9':                             // Karadeniz Muz
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(1000);                         // 1 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(6000);                         // 6 sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(7000);                         // 7 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case 'A':                             // Marmara Muz
    digitalWrite(led, HIGH);              // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);        // Sulama işlemi başlar
    delay(6000);                          // 6 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(40000);                          // 40 sn beklenir sulama yapılır
    digitalWrite(led, HIGH);              // eğer basılı ise
    digitalWrite(motor_pin, HIGH);        // eğer basılı ise
    delay(20000);                          // 20 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case 'B':                             //Ege Muz
    digitalWrite(led, HIGH);              // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);        // Sulama işlemi başlar
    delay(7000);                         // 7 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(55000);                          // 55 sn  beklenir sulama yapılır
    digitalWrite(led, HIGH);             // eğer basılı ise
    digitalWrite(motor_pin, HIGH);       // eğer basılı ise
    delay(4000);                         // 4 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case 'C':                             // İç Anadolu Muz
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(3000);                         // 3 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(30000);                       // 30 sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(7000);                         // 7 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    
    case 'D':                             // Dogu Anadolu Muz
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(15000);                         // 15 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(50000);                    //   50sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(15000);                         // 15 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 
    case 'E':                             //Guney Dogu Anadolu Muz
    digitalWrite(led, HIGH);            // Sulama için yeşil yanar
    digitalWrite(motor_pin, HIGH);      // Sulama işlemi başlar
    delay(6000);                         // 6 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW); 
    delay(25000);                    // 25sn beklenir sulama yapılır
    digitalWrite(led, HIGH);            // eğer basılı ise
    digitalWrite(motor_pin, HIGH);      // eğer basılı ise
    delay(4000);                         // 4 saniye sulama yapılır
    digitalWrite(led, LOW);
    digitalWrite(motor_pin, LOW);
    break; 

    
  }
    
}
  
