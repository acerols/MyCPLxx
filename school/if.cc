const int M1_1 = 3;
const int M1_2 = 9;
const int M2_1 = 10;
const int M2_2 = 11;

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    int A1 = analogRead(1);
    if(A1 > 500){
        Serial.print("High!, ");
    }
    else{
        Serial.print("Low!,  ");
    }
    Serial.println(A1);
    delay(500);
}