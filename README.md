# Combo Box
Praticando o componente combo box

## Motivacao 
Praticar mais sobre o framework QT entender o uso do combo Box

## Feature

- Adicionei de forma dinâmica os valores no combo box
- Esse componente e parecido com aquelas caixas aonde selecionada, aparece varias opções
- Usei o recurso de resource, para acessar no código precisa usar  :{nome do arquivo}/{nome da imagem} 
- Lembrando que o resource precisa ser adicionado na interface grafica do Qt Desing
- Gosto muito de aplicar o for Each, que utilização do conceito da palavra  auto, para esta situação imagino que não seria bom, porque estamos lidando com dois arrays
- Para pegar o tamanho do array usei uma biblioteca padrão do C++  array, nela possiu  método chamado size
- Para adicionar ícones usamos a palavra reservada QIcon e o caminho da imagem
- No comobox nessa situação ficou com um ícone do lado esquerdo e o nome do lado direito
- Consigo pegar o texto selecionado no combo box com   a palavra reservada text() 



``` c ++

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
    int sizeArrayIcons = std::size(systemOperation);
    for(long int i = 0; i < sizeArrayIcons; i++){
        ui->comboBox->addItem( QIcon(icons[i]), systemOperation[i]);
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

```

## ScreenShoot

![comoBOxSelect.jpeg](https://github.com/kenjimaeda54/comboBox-QT/blob/develop/comoBoxSelect.jpeg)
![comoboOption.jpeg](https://github.com/kenjimaeda54/comboBox-QT/blob/develop/comoboOption.jpeg)



