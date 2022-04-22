#include "combobox.h"
#include "ui_combobox.h"
#include <array>
ComboBox::ComboBox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ComboBox)
{
    ui->setupUi(this);
    QString  systemOperation[4] {"Linux","Windows","macOs","FreeBSD"};
    QString  icons[4]  {":assets/so/linux.png", ":assets/so/windows.png", ":assets/so/macos.png",":assets/so/freebsd.png"};
    //nome da pasta que esta nesse diretorio chama assets/so, por isso :assets/so. Precisa adiconar no resource
    int sizeArrayIcons = std::size(systemOperation);
    for(long int i = 0; i < sizeArrayIcons; i++){ // estamos realizando for dessa maneira porque o for auto , pode gerar conflitos ja que estamos lidando com duas variaveis
        ui->comboBox->addItem( QIcon(icons[i]), systemOperation[i]);
        //estamos adicioando de forma dinamica no campo de combo box, um icone  ao lado o nome.
        // como box, parece aquelas caisas aonde clicamos e tem varias opcoes
    };

}

ComboBox::~ComboBox()
{
    delete ui;
}


void ComboBox::on_btn_response_clicked()
{
   ui->label_response->setText("Voce selecionou : <b> " +  ui->comboBox->currentText() + "<\b>" );
   //consigo pegar o current text do campo selecionado no comboBox
}

