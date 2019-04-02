#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "StateSpace.hpp"
#include <Eigen>

#include "math.h"

#define STATES   	3 	 //Number of States
#define INPUTS   	1	 //Number of Inputs
#define OUTPUTS		1 	 //Number of Outputs
#define INERTIA 	0.01 //Rotor Interia
#define FRICTION	0.1  //viscous coefficient of friction
#define SMALL_K		0.01 //
#define RESISTANCE 	1	 //armature resistance
#define INDUCTANCE 	0.5  //armature inductance

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void selectionChanged();
    void mousePress();
    void mouseWheel();
    void subconstructor();
    void on_plotButton_clicked();

    void mySwitch(const double& var);
    double dVc(const double& Vc, const double& Il);
    double dIl(const double& Vc, const double& Vin);

    double rk4(const double& Vc, const double& Vin, const double&Il, const bool& ifVc){
        double delta1vc = deltat * dVc(Vc, Il);
        double delta1il = deltat * dIl(Vc, Vin);
        double delta2vc = deltat * dVc(Vc + 0.5*delta1vc, Il + 0.5*delta1il);
        double delta2il = deltat * dIl(Vc + 0.5*delta1vc, Vin);
        double delta3vc = deltat * dVc(Vc + 0.5*delta2vc, Il + 0.5*delta2il);
        double delta3il = deltat * dIl(Vc + 0.5*delta2vc, Vin);
        double delta4vc = deltat * dVc(Vc + delta3vc, Il + delta3il);
        double delta4il = deltat * dIl(Vc + delta3vc, Vin);

        if(ifVc){
            return (delta1vc + 2*(delta2vc + delta3vc) + delta4vc)/6;
        }
        else{
            return (delta1il + 2*(delta2il + delta3il) + delta4il)/6;
        }
    }
    void on_dutyRatioSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;

//    const double PI = 3.14159265358979323;

    const int frequency = 1e6;
    const double period = 1.0/frequency;
    double dutyRatio = 0.5;
    bool switchState = 0;

    const double vIn = 10;
    const double inductance = 20e-6;
    const double capacitance = 1e-6;
    const double resistance = 10;
    double vSteady = 0;
    const double samplingStart = 0.00015;

    const long double deltat = 1e-9;
    const double timelength = 250*period;
    const int ITER_MAX = static_cast<int>(timelength/deltat);

    QVector<double> time, sw, vc, il, xtime, xcurrent;
};

#endif // MAINWINDOW_H
