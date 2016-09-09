const double MICRO_PER_SEC = 1000000.0;
class Motor{
private:
  bool INVERSE;
  double Kp, Ki, Kd;
  unsigned long time_prev, time_now;
  double angular_vel, time_diff, prev_err = 0, integ_err = 0;
  double TICS_PER_ROTATION = 384; //This can be varied based on interrupt configuration
  int current_pwm = 0;
public:
  byte ENCODER_PIN, OUT1, OUT2, ENB;
  unsigned int tic_count;
  Motor(byte enc_pin, byte out1, byte out2, byte enb, bool inverse,
    double Kp, double Ki, double Kd);
  void calc_angular_vel();
  void rotate(double ref, int direction);
  double get_angular_vel();
  void tic_counter();
  void pid_controler(double ref);
};

Motor::Motor(byte enc_pin, byte out1, byte out2, byte enb, bool inverse,
  double Kp, double Kd, double Ki){
  this->ENCODER_PIN = enc_pin;
  this->OUT1 = out1;
  this->OUT2 = out2;
  this->ENB = enb;
  this->INVERSE = inverse;
  this->Kp = Kp;
  this->Kd = Kd;
  this->Ki = Ki;
  this->time_prev = micros();
  pinMode(enc_pin, INPUT_PULLUP);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(enb, OUTPUT);
}

void Motor::calc_angular_vel(){
}

void Motor::rotate(double ref, int direction){
 
}

void Motor::pid_controler(double ref){
  
}

double Motor::get_angular_vel(){

}

void Motor::tic_counter(){
  
}
