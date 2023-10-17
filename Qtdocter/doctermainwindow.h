#ifndef DOCTERMAINWINDOW_H
#define DOCTERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class DocterMainWindow;
}

class DocterMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DocterMainWindow(QWidget *parent = 0);
    ~DocterMainWindow();

private:
    Ui::DocterMainWindow *ui;
};

#endif // DOCTERMAINWINDOW_H
