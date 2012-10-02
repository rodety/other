#include <QtCore/QCoreApplication>
#include "epicrisis_documento.h"
#include "reporte_operatorio_documento.h"
#include "antecedentes_documento.h"
#include "riesgo_quirurgico_documento.h"
#include "examen_clinico_documento.h"
#include "historia_clinica_documento.h"
#include "clinica_tab_documento.h"
//#include "sshconnection.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*epicrisis_documento *FILE_PDF = new epicrisis_documento();
    FILE_PDF->generateLatex();
   reporte_operatorio_documento *FILE_PDF1 = new reporte_operatorio_documento();
    FILE_PDF1->generateLatex();
    antecedentes_documento * file =  new antecedentes_documento();
            file->generatelatex();
    riesgo_quirurgico_documento *FILE_RIESGO = new riesgo_quirurgico_documento;
    FILE_RIESGO->generatelatex();*/
   examen_clinico_documento *FILE_CLINICO = new examen_clinico_documento;
    FILE_CLINICO->generateLatex();
    /*historia_clinica_documento *FILE_HIS = new historia_clinica_documento;
    FILE_HIS->generateLatex();
    Clinica_Tab_Documento *FILE_CLINI = new Clinica_Tab_Documento;
    FILE_CLINI->generateLatex();*/

    return a.exec();
}
