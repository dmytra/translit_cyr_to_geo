#include "widget.h"
#include <QHBoxLayout>
#include <QComboBox>
#include <QFile>
#include <QList>
#include <QListIterator>
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout;
    QComboBox* comboBox1 = new QComboBox;
    QLabel* lblGeo = new QLabel("Georgian Range: 10A0–10FF");

    QComboBox* comboBox2 = new QComboBox;
    QLabel* lblCyr = new QLabel("Cyrillic Range: 0400–04FF");
//
    QList<QString> strGeorgian;
    QList<QString> strUnicode;


// ################################
    QFile file(":/Georgian_Range_10A0–10FF");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream in(&file);
    int i=0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if(i<88) strGeorgian.push_back(line);
        if(i>=88) strUnicode.push_back(line);
        i++;
        //qDebug() << line;
    }
    }
    file.close();
    QListIterator<QString> itGeo(strGeorgian);
    QListIterator<QString> itUni(strUnicode);
    while (itGeo.hasNext()&&itUni.hasNext()) {
    //itUni.hasNext();
    //qDebug() << itGeo.next() + " " + itUni.next();
    comboBox1->addItem(itGeo.next() + "\t" + itUni.next());
    //+ " " + itUni.next()
    }

//
    QList<QString> strCyr;
    QList<QString> strCyrUnicode;


// ################################
    QFile filecyr(":/Cyrillic_Range_0400–04FF");
        if (filecyr.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream incyr(&filecyr);
            int i=1;
            while (!incyr.atEnd()) {
                QString line = incyr.readLine();
                if(i%2!=0) strCyr.push_back(line);
                else
                strCyrUnicode.push_back(line);
                i++;
                qDebug() << line;
            }
        }
        filecyr.close();
        QListIterator<QString> itCyr(strCyr);
        QListIterator<QString> itCyrUni(strCyrUnicode);
        while (itCyr.hasNext()&&itCyrUni.hasNext()) {
            comboBox2->addItem(itCyr.next() + "\t" + itCyrUni.next());
        }
//#############################
    layout->addWidget(lblGeo);
    layout->addWidget(comboBox1);
    layout->addWidget(lblCyr);
    layout->addWidget(comboBox2);
    setLayout(layout);
}

Widget::~Widget()
{
}

