#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initializeGui();

private slots:
    void createPlot();
    void on_gainTestButton_clicked();
    void addPartsToList();
    void on_partList_currentIndexChanged(int index);
    void on_closeButton_clicked();



    void on_homeButton_clicked();

    void on_nextJointButton_clicked();

    void on_previousJointButton_clicked();

    void on_posContButton_toggled(bool checked);

    void on_velContButton_toggled(bool checked);

    void on_torContButton_toggled(bool checked);

    void on_kd_in_editingFinished();

    void on_kp_in_editingFinished();

    void on_ki_in_editingFinished();

    void on_saveGainsButton_clicked();

    void on_gainResetButton_clicked();
    

    void on_partList_highlighted(int index);



    void on_jointList_highlighted(int index);

private:
    Ui::MainWindow *ui;





    //Functions
    void resetYLabel();
    void setCurrentPartAndJoint();
    bool discardChanges();
    void saveGains();
    void refreshGainDisplays();
    bool getPidGains();
    bool setPidGains();

    //Variables
    QString controlType, yPlotLabel;
    bool isOnlyMajorJoints, gainsHaveBeenChanged;
    int partIndex, jointIndex;


    double Kp_new, Kd_new, Ki_new;
    double Kp_old, Kd_old, Ki_old;
};

#endif // MAINWINDOW_H
