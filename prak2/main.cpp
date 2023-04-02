#include <QRegExp>
#include <QStringList>
#include <QDebug>

int main() {
    QRegExp re("^Select ((?!select|from|where).)*,? *((?!select|from|where).)* *from ((?!select|from|where).)* *where *[a-z0-9]+ *(>|<|<>|>=|<=) *([a-z]+[0-9]*|[0-9]*)");



    QStringList strings = QStringList() <<
                       "Select select, col2 from 12 where jopa1 <> 1" <<
                       "Select col1, selec, col33 from test where col1 <> col1";



    foreach( const QString& str, strings ) {
        qDebug() << ( re.exactMatch( str ) ? "matched" : "mismatched" ) << ":" << str;
    }

    return 0;
}
