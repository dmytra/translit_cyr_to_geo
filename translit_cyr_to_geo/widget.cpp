#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupGui();

    setWindowTitle("transliteration CYRilyk to GEOrgian");
}

Widget::~Widget()
{
}

void Widget::setupGui()
{
    // https://stackoverflow.com/questions/3137805/how-to-set-image-on-qpushbutton
    QGridLayout *gridLayout = new QGridLayout;

//    QPushButton *insertTextObjectButtonENG_RUN = new QPushButton("eng|run");
//    connect(insertTextObjectButtonENG_RUN, SIGNAL(clicked()),
//            this, SLOT(funinsertTextObjectButtonENG_RUN()));
//    gridLayout->addWidget(insertTextObjectButtonENG_RUN,0,0,1,1);

    QPushButton *insertTextObjectButtonCYR_RUN = new QPushButton("cyr to geo");
    connect(insertTextObjectButtonCYR_RUN, SIGNAL(clicked()),
            this, SLOT(funinsertTextObjectButtonCYR_RUN()));
    gridLayout->addWidget(insertTextObjectButtonCYR_RUN,0,0,1,1);

    textEdit = new QTextEdit;
    textEdit->setMinimumSize(400,300);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(textEdit);

    mainLayout->addLayout(gridLayout);
    setLayout(mainLayout);
}


void Widget::funinsertTextObjectButtonCYR_RUN()
{
    textEdit->selectAll();
    QString newtext = textEdit->toPlainText();
    newtext = newtext.toUpper();
    textEdit->setText(newtext);
    QChar *data = newtext.data();
    textEdit->clear();
    while (!data->isNull()) {
        // setlocale(LC_ALL, "Russian");
        switch (data->unicode())
        {
            // https://ru.wikipedia.org/wiki/Грузинское_письмо
        // взято https://uk.wikipedia.org/wiki/Кирилиця
        // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
        // http://www.unicode.org/charts/PDF/U0400.pdf
        case    0x0410:     //'А':
            textEdit->insertPlainText("Ა");
            break;
        case 	0x0411:     //'Б':
            textEdit->insertPlainText("Ბ");
            break;
        case    0x0412:     //'В':
            textEdit->insertPlainText("Ვ");
            break;
        case    0x0413:     //'Г':
            textEdit->insertPlainText("Გ");
            break;
        case    0x0414:     //'Д':
            textEdit->insertPlainText("Დ");
            break;
        case    0x0415:     //'Е':
            textEdit->insertPlainText("Ე");
            break;
        case    0x0401:     //'Ё':
            textEdit->insertPlainText("");
            break;
        case    0x0416:     //'Ж':
            textEdit->insertPlainText("Ჟ");
            break;
        case    0x0417:     //'З':
            textEdit->insertPlainText("Ზ");
            break;
        case    0x0418:     //'И':
            textEdit->insertPlainText("Ი");
            break;
        case    0x0419:     //'Й':
            textEdit->insertPlainText("Ჯ");
            break;
        case    0x041A:     //'К':
            textEdit->insertPlainText("Კ");
            break;
        case    0x041B:     //'Л':
            textEdit->insertPlainText("Ლ");
            break;
        case    0x041C:     //'М':
            textEdit->insertPlainText("Მ");
            break;
        case    0x041D:     //'Н':
            textEdit->insertPlainText("Ნ");
            break;
        case    0x041E:     //'О':
            textEdit->insertPlainText("Ო");
            break;
        case    0x041F:     //'П':
            textEdit->insertPlainText("Პ");
            break;
        case    0x0420:     //'Р':
            textEdit->insertPlainText("Რ");
            break;
        case    0x0421:     //'С':
            textEdit->insertPlainText("Ს");
            break;
        case    0x0422:     //'Т':
            textEdit->insertPlainText("Თ");
            break;
        case    0x0423:     //'У':
            textEdit->insertPlainText("Ჲ");
            break;
        case    0x0424:     //'Ф':
            textEdit->insertPlainText("Ჶ");
            break;
        case    0x0425:     //'Х':
            textEdit->insertPlainText("Ხ");
            break;
        case    0x0426:     //'Ц':
            textEdit->insertPlainText("Წ");
            break;
        case    0x0427:     //'Ч':
            textEdit->insertPlainText("Ჭ");
            break;
        case    0x0428:     //'Ш':
            textEdit->insertPlainText("Შ");
            break;
        case    0x0429:     //'Щ':
            textEdit->insertPlainText("Შ");
            break;
        case    0x042A:     //'Ъ':
            textEdit->insertPlainText("");
            break;
        case    0x042B:     //'Ы':
            textEdit->insertPlainText("ი");
            break;
        case    0x042C:     //'Ь':
            textEdit->insertPlainText("");
            break;
        case    0x042D:     //'Э':
            textEdit->insertPlainText("Ჱ");
            break;
        case    0x042E:     //'Ю':
            textEdit->insertPlainText("იუ");
            break;
        case    0x042F:     //'Я':
            textEdit->insertPlainText("ია");
            break;
        case    0x0404:     //'Є':
            textEdit->insertPlainText("Ჲ");
            break;
        case    0x0407:     //'Ї':
            textEdit->insertPlainText("ი");
            break;
        case    0x0406:     //'І':
            textEdit->insertPlainText("Ი");
            break;
        case    0x0490:     //'Ґ':
            textEdit->insertPlainText("გ");
            break;
        case    0x040E:     //'Ў':
            textEdit->insertPlainText("უ");
            break;
        case    0x040B:    //'Ћ':
            textEdit->insertPlainText("ჩ");
            break;

        default:
            textEdit->insertPlainText("_");
        }
        ++data;
    }
}
