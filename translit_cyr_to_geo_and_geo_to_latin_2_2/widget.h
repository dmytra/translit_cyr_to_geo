#ifndef WIDGET_H
#define WIDGET_H

#include <QGridLayout>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>

#include <QWidget>

QT_BEGIN_NAMESPACE
class QTextEdit;
class QPushButton;
class QLabel;
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void funinsertTextObjectButtonCYR_GEO();
    void funinsertTextObjectButtonGEO_ENG();

private:
    void setupGui();

private:
    QTextEdit *textEdit;
    QLabel *fileNameLabel;
    QLabel *linkLabel;
    QPushButton *insertTextObjectButtonCYR_GEO;
    QPushButton *insertTextObjectButtonGEO_ENG;
};
#endif // WIDGET_H
