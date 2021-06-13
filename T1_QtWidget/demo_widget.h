#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>

class DemoWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit DemoWidget(QWidget *parent = 0);
    ~DemoWidget();
    
    QLabel *m_lblInfo;
};

