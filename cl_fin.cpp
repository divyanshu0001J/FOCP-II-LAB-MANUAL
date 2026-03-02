#includeclude < iostream>
using namespace std;
class SmartLight
{
    string brand;
    int brightness;
    int isOn = 0;

public:
    void input_detail();
    void displayStatus();
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreaseBrightness();
    SmartLight()
        SmartLight(string b, int br, int on);
};
void SmartLight::input_detail()
{
    cout << "Enter the brand of the smart light: ";
    cin >> brand;
    cout << "Enter the brightness level (0-100): ";
    cin >> brightness;
    if (brightness < 0)
        brightness = 0;
    else if (brightness > 100)
        brightness = 100;
    cout << "on or off (1 for on, 0 for off): ";
    cin >> isOn;
}
void SmartLight::displayStatus()
{
    cout << "\nBrand: " << brand;
    cout << "\nBrightness: " << brightness;
    cout << "\nStatus: " << (isOn ? "On" : "Off") << endl;
}
void SmartLight::turnOn()
{
    isOn = 1;
    cout << "The smart light is now ON." << endl;
}
void SmartLight::turnOff()
{
    isOn = 0;
    cout << "The smart light is now OFF." << endl;
}
void SmartLight::increaseBrightness()
{
    if (brightness < 100)
    {
        brightness += 10;
        if (brightness > 100)
            brightness = 100;
        cout << "Brightness increased to " << brightness << "." << endl;
    }
    else
    {
        cout << "Brightness is already at maximum." << endl;
    }
}
void SmartLight::decreaseBrightness()
{
    if (brightness > 0)
    {
        brightness -= 10;
        if (brightness < 0)
            brightness = 0;
        cout << "Brightness decreased to " << brightness << "." << endl;
    }
    else
    {
        cout << "Brightness is already at minimum." << endl;
    }
}
SmartLight::SmartLight()
{
    brand = "xxxx";
    brightness = 50;
    isOn = 0;
}
SmartLight::SmartLight(string b, int br, int on)
{
    brand = b;
    brightness = br;
    if (brightness < 0)
        brightness = 0;
    else if (brightness > 100)
        brightness = 100;
    isOn = on;
}
int main()
{
    SmartLight light1;
    light1.input_detail();
    light1.displayStatus();
    light1.turnOn();
    light1.increaseBrightness();
    light1.decreaseBrightness();
    light1.turnOff();
    return 0;
}
