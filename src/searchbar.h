#ifndef SEARCHBAR_H
#define SEARCHBAR_H

#include <QPushButton>
#include <QWidget>
#include <QPoint>
#include <QLabel>


namespace Ui {
class SearchBar;
}

class SearchBar : public QWidget
{
    Q_OBJECT

public:
    explicit SearchBar(QWidget *parent = nullptr);
    ~SearchBar();
protected:
    bool eventFilter(QObject *obj, QEvent *ev);
private:
    Ui::SearchBar *ui;
    QPoint mDragPosition;
    QPushButton *hideButton;
    QLabel *searchIcon;

signals:
    void returnPressed(QPoint pos, QPoint size, QString res);
};

#endif // SEARCHBAR_H
