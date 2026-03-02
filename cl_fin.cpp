#include <iostream>
using namespace std;

class SmartLight
{
    string brand;
    int brightness;
    int isOn;

public:
    SmartLight();
    SmartLight(string b, int br, int on);
    ~SmartLight();

    void input_detail();
    void displayStatus();
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreaseBrightness();
};

SmartLight::SmartLight()
{
    brand = "xxxx";
    brightness = 50;
    isOn = 0;
}

SmartLight::SmartLight(string b, int br, int on)
{
    brand = b;

    if (br < 0)
        brightness = 0;
    else if (br > 100)
        brightness = 100;
    else
        brightness = br;

    isOn = on;
}

SmartLight::~SmartLight()
{
    cout << "SmartLight object destroyed." << endl;
}

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

    cout << "On or Off (1 for on, 0 for off): ";
    cin >> isOn;
}

void SmartLight::displayStatus()
{
    cout << "\nBrand: " << brand;
    cout << "\nBrightness: " << brightness;

    if (isOn)
        cout << "\nStatus: ON" << endl;
    else
        cout << "\nStatus: OFF" << endl;
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