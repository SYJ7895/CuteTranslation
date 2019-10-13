#ifndef FLOATBUTTON_H
#define FLOATBUTTON_H

#include <QWidget>
#include "picker.h"
namespace Ui {
class FloatButton;
}

class FloatButton : public QWidget
{
    Q_OBJECT

public:
    explicit FloatButton(QWidget *parent = nullptr);

    ~FloatButton();

private:
    Ui::FloatButton *ui;
    Picker *picker;
    void onMouseButtonPressed(int x, int y);
    void onMouseButtonReleased(int x, int y);
};

#endif // FLOATBUTTON_H
