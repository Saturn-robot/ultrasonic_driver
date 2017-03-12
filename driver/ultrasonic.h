#define TrigPin 3
#define EchoPin 2

void init_ultrasonic();
float microsecondsToCm(long microseconds);
long get_distance();
