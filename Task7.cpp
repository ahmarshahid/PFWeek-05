#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int flowrate1;
    int flowrate2;
    float time;
    int volumeofpool;
    float volume1;
    float volume2;
    float volumeofwater;
    float overflow;
    float percentageofextent;
    float pipe1contribute;
    float pipe2contribute;
    cout << "Enter the flow rate of pipe 1 :";
    cin >> flowrate1;
    cout << "Enter the flow rate of pipe 2 :";
    cin >> flowrate2;
    cout << "Enter the time the pipes was left on :";
    cin >> time;
    cout << "Enter the volume of pool :";
    cin >> volumeofpool;
    volume1 = flowrate1 * time;
    volume2 = flowrate2 * time;
    volumeofwater = volume1 + volume2;
    if (volumeofwater > volumeofpool)
    {
        overflow = volumeofwater - volumeofpool;
        cout << "For " << time << " hours the pool overflows with " << overflow << " liters" << endl;
    }
    if (volumeofwater < volumeofpool)
    {
        percentageofextent = floor((volumeofwater / volumeofpool) * 100);
        pipe1contribute = floor((volume1 / volumeofwater) * 100);
        pipe2contribute = floor((volume2 / volumeofwater) * 100);

        cout << "The pool is " << percentageofextent << "% full. pipe 1 contibutes : " << pipe1contribute << "% and pipe 2 contributes : " << pipe2contribute << "%" << endl;
    }
}