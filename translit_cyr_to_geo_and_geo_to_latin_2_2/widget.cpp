#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupGui();

    setWindowTitle("transliteration  cyr_to_geo and geo_to_latin");
}

Widget::~Widget()
{
}

void Widget::setupGui()
{
    // https://stackoverflow.com/questions/3137805/how-to-set-image-on-qpushbutton
    QGridLayout *gridLayout = new QGridLayout;

    QPushButton *insertTextObjectButtonGEO_ENG = new QPushButton("georgian to latin");
    connect(insertTextObjectButtonGEO_ENG, SIGNAL(clicked()),
            this, SLOT(funinsertTextObjectButtonGEO_ENG()));
    gridLayout->addWidget(insertTextObjectButtonGEO_ENG,0,0,1,1);

    QPushButton *insertTextObjectButtonCYR_GEO = new QPushButton("cyrilic/latin to georgian");
    connect(insertTextObjectButtonCYR_GEO, SIGNAL(clicked()),
            this, SLOT(funinsertTextObjectButtonCYR_GEO()));
    gridLayout->addWidget(insertTextObjectButtonCYR_GEO,0,1,1,1);

    linkLabel = new QLabel("Eample transliteration: <a href=\"https://translit.cc/ge/\">translit.cc/ge</a>");
    linkLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    linkLabel->setOpenExternalLinks(true);
    gridLayout->addWidget(linkLabel,1,0,1,2);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(gridLayout);

    textEdit = new QTextEdit;
    textEdit->setMinimumSize(600,400);
    mainLayout->addWidget(textEdit);

    setLayout(mainLayout);
}

// ##################### GEO to ENG

void Widget::funinsertTextObjectButtonGEO_ENG()
{
    textEdit->selectAll();
    QString newtext = textEdit->toPlainText();
    //newtext = newtext.toUpper();
    textEdit->setText(newtext);
    QChar *data = newtext.data();
    textEdit->clear();
    while (!data->isNull()) {
        // setlocale(LC_ALL, "Russian");
        switch (data->unicode())
        {
// GEORGIAN LETTER to ENGLISH to         https://en.wikipedia.org/wiki/English_alphabet
// основной алфавит — «мхедрули»  => to ENGLISH >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо

        // переднлпно Range: The Unicode Standard,10A0–10FF
        //https://unicode.org/charts/PDF/U10A0.pdf
        // https://translit.cc/ge/ t'ranslit'erat'ion ts'ჲrilჲk' t'o georgian
        case    0x10D0 ://'ა':    //'A':
            textEdit->insertPlainText("A"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D1 ://'ბ':    //'B':
            textEdit->insertPlainText("B"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10EC ://'წ':    //'C':
            textEdit->insertPlainText("C"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D3 ://'დ':    //'D':
            textEdit->insertPlainText("D"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D4 ://'ე':    //'E':
            textEdit->insertPlainText("E"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F6 ://'ჶ':    //'F':
            textEdit->insertPlainText("F"); // в лазском языке — [f] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D2 ://'გ':    //'G':
            textEdit->insertPlainText("G"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F0 ://'ჰ':    //'H':
            textEdit->insertPlainText("H"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D8 ://'ი':    //'I':
            textEdit->insertPlainText("I"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10EB ://'ძ':    //'J':
            textEdit->insertPlainText("J"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D9 ://'კ':    //'K':
            textEdit->insertPlainText("K"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DA ://'ლ':    //'L':
            textEdit->insertPlainText("L"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DB ://'მ':    //'M':
            textEdit->insertPlainText("M"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DC ://'ნ':    //'N':
            textEdit->insertPlainText("N"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DD ://'ო':    //'O':
            textEdit->insertPlainText("O"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DE ://'პ':    //'P':
            textEdit->insertPlainText("P"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E7 ://'ყ':    //'Q':
            textEdit->insertPlainText("Q"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E0 ://'რ':    //'R':
            textEdit->insertPlainText("R"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E1 ://'ს':    //'S':
            textEdit->insertPlainText("S"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E2 ://'ტ':    //'T':
            textEdit->insertPlainText("T"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E3 ://'უ':    //'U':
            textEdit->insertPlainText("U"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D5 ://'ვ':    //'V':
            textEdit->insertPlainText("V"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F3 ://'ჳ':    //'W':
            textEdit->insertPlainText("W"); // [uɪ], в сванском языке — [w]   >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10EE ://'ხ':    //'X':
            textEdit->insertPlainText("X"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F2 ://'ჲ':    //'Y':
            textEdit->insertPlainText("Y"); // [je], в мегрельском, лазском и сванском языках — [j], в абхазском — [ʲ] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D6 ://'ზ':    //'Z':
            textEdit->insertPlainText("Z"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;

        // namber arabik
        case    '0':    //' ':
            textEdit->insertPlainText("0");
            break;
        case    '1':    //' ':
            textEdit->insertPlainText("1");
            break;
        case    '2':    //' ':
            textEdit->insertPlainText("2");
            break;
        case    '3':    //' ':
            textEdit->insertPlainText("3");
            break;
        case    '4':    //' ':
            textEdit->insertPlainText("4");
            break;
        case    '5':    //' ':
            textEdit->insertPlainText("5");
            break;
        case    '6':    //' ':
            textEdit->insertPlainText("6");
            break;
        case    '7':    //' ':
            textEdit->insertPlainText("7");
            break;
        case    '8':    //' ':
            textEdit->insertPlainText("8");
            break;
        case    '9':    //' ':
            textEdit->insertPlainText("9");
            break;

// spec simbol
        case    ' ':    //' ':
            textEdit->insertPlainText(" ");
            break;
        case    '(':    //' ':
            textEdit->insertPlainText("(");
            break;
        case    ')':    //' ':
            textEdit->insertPlainText(")");
            break;
        case    '.':    //' ':
            textEdit->insertPlainText(".");
            break;
        case    ',':    //' ':
            textEdit->insertPlainText(",");
            break;
        case    '-':    //' ':
            textEdit->insertPlainText("-");
            break;
        case    '+':    //' ':
            textEdit->insertPlainText("+");
            break;
        case    '=':    //' ':
            textEdit->insertPlainText("=");
            break;


        default:
            textEdit->insertPlainText("_");
        }
        ++data;
    }
}

// ######################### CYR to GEO

void Widget::funinsertTextObjectButtonCYR_GEO()
{
    textEdit->selectAll();
    QString newtext = textEdit->toPlainText();
    //newtext = newtext.toUpper();
    textEdit->setText(newtext);
    QChar *data = newtext.data();
    textEdit->clear();
    while (!data->isNull()) {
        // setlocale(LC_ALL, "Russian");
        switch (data->unicode())
        {
// взято https://uk.wikipedia.org/wiki/Кирилиця
// ///////////big letter/////////
// соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
//+ https://ru.wikipedia.org/wiki/Грузинское_письмо
// переднлпно Range: The Unicode Standard,
// http://www.unicode.org/charts/PDF/U0400.pdf
        case    0x0410:     //'А':
            textEdit->insertPlainText("ა"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case 	0x0411:     //'Б':
            textEdit->insertPlainText("ბ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0412:     //'В':
            textEdit->insertPlainText("ვ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0413:     //'Г':
            textEdit->insertPlainText("გ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0414:     //'Д':
            textEdit->insertPlainText("დ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0415:     //'Е':
            textEdit->insertPlainText("Ე"); //+ https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x0401:     //'Ё':
            textEdit->insertPlainText("");
            break;
        case    0x0416:     //'Ж':
            textEdit->insertPlainText("ჟ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0417:     //'З':
            textEdit->insertPlainText("ზ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0418:     //'И':
            textEdit->insertPlainText("ი"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0419:     //'Й':
            textEdit->insertPlainText("Ჯ");
            break;
        case    0x041A:     //'К':
            textEdit->insertPlainText("კ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x041B:     //'Л':
            textEdit->insertPlainText("ლ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x041C:     //'М':
            textEdit->insertPlainText("მ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x041D:     //'Н':
            textEdit->insertPlainText("ნ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x041E:     //'О':
            textEdit->insertPlainText("Ო"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x041F:     //'П':
            textEdit->insertPlainText("პ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0420:     //'Р':
            textEdit->insertPlainText("რ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0421:     //'С':
            textEdit->insertPlainText("ს"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0422:     //'Т':
            textEdit->insertPlainText("ტ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0423:     //'У':
            textEdit->insertPlainText("უ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0424:     //'Ф':
            textEdit->insertPlainText("Ჶ");
            break;
        case    0x0425:     //'Х':
            textEdit->insertPlainText("ხ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0426:     //'Ц':
            textEdit->insertPlainText("ც"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0427:     //'Ч':
            textEdit->insertPlainText("ჩ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0428:     //'Ш':
            textEdit->insertPlainText("შ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0429:     //'Щ':
            textEdit->insertPlainText("Შ"); // ------
            break;
        case    0x042A:     //'Ъ':
            textEdit->insertPlainText(""); // ------
            break;
        case    0x042B:     //'Ы':
            textEdit->insertPlainText("ი"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x042C:     //'Ь':
            textEdit->insertPlainText(""); // ------
            break;
        case    0x042D:     //'Э':
            textEdit->insertPlainText("ე"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x042E:     //'Ю':
            textEdit->insertPlainText("იუ"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x042F:     //'Я':
            textEdit->insertPlainText("ია"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0404:     //'Є':
            textEdit->insertPlainText("იე"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0407:     //'Ї':
            textEdit->insertPlainText("ი"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0406:     //'І':
            textEdit->insertPlainText("ი"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0490:     //'Ґ':
            textEdit->insertPlainText("გ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x040E:     //'Ў':
            textEdit->insertPlainText("უ");
            break;
        case    0x040B:    //'Ћ':
            textEdit->insertPlainText("ჭ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;


// взято https://uk.wikipedia.org/wiki/Кирилиця
// ///////////small letter/////////
// соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
//+ https://ru.wikipedia.org/wiki/Грузинское_письмо
// переднлпно Range: The Unicode Standard,
// http://www.unicode.org/charts/PDF/U0400.pdf
        case    0x0430:     //'а':
            textEdit->insertPlainText("ა"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case 	0x0431:     //'б':
            textEdit->insertPlainText("ბ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0432:     //'в':
            textEdit->insertPlainText("ვ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0433:     //'г':
            textEdit->insertPlainText("გ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0434:     //'д':
            textEdit->insertPlainText("დ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0435:     //'е':
            textEdit->insertPlainText("Ე"); //+ https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x0451:     //'ё':
            textEdit->insertPlainText("");
            break;
        case    0x0436:     //'ж':
            textEdit->insertPlainText("ჟ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0437:     //'з':
            textEdit->insertPlainText("ზ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0438:     //'и':
            textEdit->insertPlainText("ი"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0439:     //'й':
            textEdit->insertPlainText("Ჯ");
            break;
        case    0x043A:     //'к':
            textEdit->insertPlainText("კ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x043B:     //'л':
            textEdit->insertPlainText("ლ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x043C:     //'м':
            textEdit->insertPlainText("მ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x043D:     //'н':
            textEdit->insertPlainText("ნ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x043E:     //'о':
            textEdit->insertPlainText("Ო"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x043F:     //'п':
            textEdit->insertPlainText("პ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0440:     //'р':
            textEdit->insertPlainText("რ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0441:     //'с':
            textEdit->insertPlainText("ს"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0442:     //'т':
            textEdit->insertPlainText("ტ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0443:     //'у':
            textEdit->insertPlainText("უ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0444:     //'ф':
            textEdit->insertPlainText("Ჶ");
            break;
        case    0x0445:     //'х':
            textEdit->insertPlainText("ხ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0446:     //'ц':
            textEdit->insertPlainText("ც"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0447:     //'ч':
            textEdit->insertPlainText("ჩ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0448:     //'ш':
            textEdit->insertPlainText("შ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0449:     //'щ':
            textEdit->insertPlainText("Შ"); // ------
            break;
        case    0x044A:     //'ъ':
            textEdit->insertPlainText(""); // ------
            break;
        case    0x044B:     //'ы':
            textEdit->insertPlainText("ი"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x044C:     //'ь':
            textEdit->insertPlainText(""); // ------
            break;
        case    0x044D:     //'э':
            textEdit->insertPlainText("ე"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x044E:     //'ю':
            textEdit->insertPlainText("იუ"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x044F:     //'я':
            textEdit->insertPlainText("ია"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0454:     //'є':
            textEdit->insertPlainText("იე"); // ------соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0457:     //'ї':
            textEdit->insertPlainText("ი"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0456:     //'i':
            textEdit->insertPlainText("ი"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x0491:     //'ґ':
            textEdit->insertPlainText("გ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;
        case    0x045E:     //'ў':
            textEdit->insertPlainText("უ");
            break;
        case    0x045B:    //'Ћ':
            textEdit->insertPlainText("ჭ"); // соответствие https://gruzinskij.ru/без-рубрики/probaalfevita.html
            break;


// big ===>>> ENGLISH LETTER to GEORGIAN        https://en.wikipedia.org/wiki/English_alphabet
        // основной алфавит — «мхедрули»  => to ENGLISH >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо
        case    'A':    //'A':
            textEdit->insertPlainText("ა"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'B':    //'B':
            textEdit->insertPlainText("ბ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'C':    //'C':
            textEdit->insertPlainText("წ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'D':    //'D':
            textEdit->insertPlainText("დ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'E':    //'E':
            textEdit->insertPlainText("ე"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'F':    //'F':
            textEdit->insertPlainText("ჶ"); // в лазском языке — [f] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'G':    //'G':
            textEdit->insertPlainText("გ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'H':    //'H':
            textEdit->insertPlainText("ჰ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'I':    //'I':
            textEdit->insertPlainText("ი"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'J':    //'J':
            textEdit->insertPlainText("ძ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'K':    //'K':
            textEdit->insertPlainText("კ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'L':    //'L':
            textEdit->insertPlainText("ლ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'M':    //'M':
            textEdit->insertPlainText("მ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'N':    //'N':
            textEdit->insertPlainText("ნ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'O':    //'O':
            textEdit->insertPlainText("ო"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'P':    //'P':
            textEdit->insertPlainText("პ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'Q':    //'Q':
            textEdit->insertPlainText("ყ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'R':    //'R':
            textEdit->insertPlainText("რ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'S':    //'S':
            textEdit->insertPlainText("ს"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'T':    //'T':
            textEdit->insertPlainText("ტ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'U':    //'U':
            textEdit->insertPlainText("უ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'V':    //'V':
            textEdit->insertPlainText("ვ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'W':    //'W':
            textEdit->insertPlainText("ჳ"); // [uɪ], в сванском языке — [w]   >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'X':    //'X':
            textEdit->insertPlainText("ხ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'Y':    //'Y':
            textEdit->insertPlainText("ჲ"); // [je], в мегрельском, лазском и сванском языках — [j], в абхазском — [ʲ] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'Z':    //'Z':
            textEdit->insertPlainText("ზ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;

// small ===>>> ENGLISH LETTER to GEORGIAN        https://en.wikipedia.org/wiki/English_alphabet
// основной алфавит — «мхедрули»  => to ENGLISH >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо
        case    'a':    //'A':
            textEdit->insertPlainText("ა"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'b':    //'B':
            textEdit->insertPlainText("ბ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'c':    //'C':
            textEdit->insertPlainText("წ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'd':    //'D':
            textEdit->insertPlainText("დ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'e':    //'E':
            textEdit->insertPlainText("ე"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'f':    //'F':
            textEdit->insertPlainText("ჶ"); // в лазском языке — [f] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'g':    //'G':
            textEdit->insertPlainText("გ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'h':    //'H':
            textEdit->insertPlainText("ჰ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'i':    //'I':
            textEdit->insertPlainText("ი"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'j':    //'J':
            textEdit->insertPlainText("ძ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'k':    //'K':
            textEdit->insertPlainText("კ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'l':    //'L':
            textEdit->insertPlainText("ლ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'm':    //'M':
            textEdit->insertPlainText("მ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'n':    //'N':
            textEdit->insertPlainText("ნ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'o':    //'O':
            textEdit->insertPlainText("ო"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'p':    //'P':
            textEdit->insertPlainText("პ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'q':    //'Q':
            textEdit->insertPlainText("ყ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'r':    //'R':
            textEdit->insertPlainText("რ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    's':    //'S':
            textEdit->insertPlainText("ს"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    't':    //'T':
            textEdit->insertPlainText("ტ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'u':    //'U':
            textEdit->insertPlainText("უ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'v':    //'V':
            textEdit->insertPlainText("ვ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'w':    //'W':
            textEdit->insertPlainText("ჳ"); // [uɪ], в сванском языке — [w]   >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'x':    //'X':
            textEdit->insertPlainText("ხ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'y':    //'Y':
            textEdit->insertPlainText("ჲ"); // [je], в мегрельском, лазском и сванском языках — [j], в абхазском — [ʲ] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    'z':    //'Z':
            textEdit->insertPlainText("ზ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;

// spec simbol
        case    ' ':    //' ':
            textEdit->insertPlainText(" ");
            break;
        case    '(':    //' ':
            textEdit->insertPlainText("(");
            break;
        case    ')':    //' ':
            textEdit->insertPlainText(")");
            break;
        case    '.':    //' ':
            textEdit->insertPlainText(".");
            break;
        case    ',':    //' ':
            textEdit->insertPlainText(",");
            break;
        case    '-':    //' ':
            textEdit->insertPlainText("-");
            break;
        case    '+':    //' ':
            textEdit->insertPlainText("+");
            break;
        case    '=':    //' ':
            textEdit->insertPlainText("=");
            break;

// namber arabik
        case    '0':    //' ':
            textEdit->insertPlainText("0");
            break;
        case    '1':    //' ':
            textEdit->insertPlainText("1");
            break;
        case    '2':    //' ':
            textEdit->insertPlainText("2");
            break;
        case    '3':    //' ':
            textEdit->insertPlainText("3");
            break;
        case    '4':    //' ':
            textEdit->insertPlainText("4");
            break;
        case    '5':    //' ':
            textEdit->insertPlainText("5");
            break;
        case    '6':    //' ':
            textEdit->insertPlainText("6");
            break;
        case    '7':    //' ':
            textEdit->insertPlainText("7");
            break;
        case    '8':    //' ':
            textEdit->insertPlainText("8");
            break;
        case    '9':    //' ':
            textEdit->insertPlainText("9");
            break;


// GEORGIAN LETTER to GEORGIAN LETTER        https://en.wikipedia.org/wiki/English_alphabet
// основной алфавит — «мхедрули»  => to ENGLISH >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо

// переднлпно Range: The Unicode Standard,10A0–10FF
//https://unicode.org/charts/PDF/U10A0.pdf
// https://translit.cc/ge/ t'ranslit'erat'ion ts'ჲrilჲk' t'o georgian
        case    0x10D0 ://'ა':    //'A':
            textEdit->insertPlainText("ა"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D1 ://'ბ':    //'B':
            textEdit->insertPlainText("ბ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10EC ://'წ':    //'C':
            textEdit->insertPlainText("ბ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D3 ://'დ':    //'D':
            textEdit->insertPlainText("დ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D4 ://'ე':    //'E':
            textEdit->insertPlainText("ე"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F6 ://'ჶ':    //'F':
            textEdit->insertPlainText("ჶ"); // в лазском языке — [f] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D2 ://'გ':    //'G':
            textEdit->insertPlainText("გ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F0 ://'ჰ':    //'H':
            textEdit->insertPlainText("ჰ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D8 ://'ი':    //'I':
            textEdit->insertPlainText("ი"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10EB ://'ძ':    //'J':
            textEdit->insertPlainText("ძ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D9 ://'კ':    //'K':
            textEdit->insertPlainText("კ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DA ://'ლ':    //'L':
            textEdit->insertPlainText("ლ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DB ://'მ':    //'M':
            textEdit->insertPlainText("მ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DC ://'ნ':    //'N':
            textEdit->insertPlainText("ნ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DD ://'ო':    //'O':
            textEdit->insertPlainText("ო"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10DE ://'პ':    //'P':
            textEdit->insertPlainText("პ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E7 ://'ყ':    //'Q':
            textEdit->insertPlainText("ყ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E0 ://'რ':    //'R':
            textEdit->insertPlainText("რ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E1 ://'ს':    //'S':
            textEdit->insertPlainText("ს"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E2 ://'ტ':    //'T':
            textEdit->insertPlainText("ტ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10E3 ://'უ':    //'U':
            textEdit->insertPlainText("უ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D5 ://'ვ':    //'V':
            textEdit->insertPlainText("ვ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F3 ://'ჳ':    //'W':
            textEdit->insertPlainText("ჳ"); // [uɪ], в сванском языке — [w]   >>>> https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10EE ://'ხ':    //'X':
            textEdit->insertPlainText("ხ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10F2 ://'ჲ':    //'Y':
            textEdit->insertPlainText("ჲ"); // [je], в мегрельском, лазском и сванском языках — [j], в абхазском — [ʲ] https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;
        case    0x10D6 ://'ზ':    //'Z':
            textEdit->insertPlainText("ზ"); // https://ru.wikipedia.org/wiki/Грузинское_письмо
            break;


        default:
            textEdit->insertPlainText("_");
        }
        ++data;
    }
}
