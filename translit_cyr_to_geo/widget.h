#ifndef WIDGET_H
#define WIDGET_H

#include <QGridLayout>
#include <QPushButton>
#include <QTextEdit>

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
    void funinsertTextObjectButtonCYR_RUN();

private:
    void setupGui();

private:
    QTextEdit *textEdit;
    QLabel *fileNameLabel;
    QPushButton *insertTextObjectButtonCYR_RUN;
};
#endif // WIDGET_H
