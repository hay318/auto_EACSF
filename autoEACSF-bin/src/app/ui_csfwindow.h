/********************************************************************************
** Form generated from reading UI file 'csfwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSFWINDOW_H
#define UI_CSFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSFWindow
{
public:
    QAction *action_LoadData;
    QAction *action_SaveData;
    QAction *action_LoadParameter;
    QAction *action_SaveParameter;
    QAction *action_LoadSoftware;
    QAction *action_SaveSoftware;
    QAction *actionAbout;
    QAction *action_Quit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_input;
    QLabel *label_OutputFolderName;
    QPushButton *pushButton_T1img;
    QPushButton *pushButton_T2img;
    QPushButton *pushButton_BrainMask;
    QPushButton *pushButton_VentricleMask;
    QPushButton *pushButton_TissueSeg;
    QLineEdit *lineEdit_T1img;
    QLineEdit *lineEdit_T2img;
    QLineEdit *lineEdit_BrainMask;
    QLineEdit *lineEdit_VentriclMask;
    QLineEdit *lineEdit_TissueSeg;
    QLineEdit *lineEdit_OutputDir;
    QLabel *label_InputPaths;
    QLabel *label_OutpuDirectory;
    QLineEdit *lineEdit_OutputFolderName;
    QPushButton *pushButton_OutputDir;
    QLabel *label_AcPcLevel;
    QSpinBox *spinBox_Index;
    QDoubleSpinBox *doubleSpinBox_mm;
    QRadioButton *radioButton_Index;
    QRadioButton *radioButton_mm;
    QWidget *tab_executables;
    QPushButton *pushButton_ABC;
    QPushButton *pushButton_ANTS;
    QPushButton *pushButton_ITK;
    QPushButton *pushButton_FSLBET;
    QPushButton *pushButton_N4;
    QPushButton *pushButton_ImageMath;
    QPushButton *pushButton_Python;
    QPushButton *pushButton_ABCreset;
    QPushButton *pushButton_ANTSreset;
    QPushButton *pushButton_ITKreset;
    QPushButton *pushButton_FSLBETreset;
    QPushButton *pushButton_N4reset;
    QPushButton *pushButton_ImageMathReset;
    QPushButton *pushButton_PythonRest;
    QLineEdit *lineEdit_ABC;
    QLineEdit *lineEdit_ANTS;
    QLineEdit *lineEdit_BRAINSFit;
    QLineEdit *lineEdit_FSLBET;
    QLineEdit *lineEdit_ImageMath;
    QLineEdit *lineEdit_ITK;
    QLineEdit *lineEdit_N4;
    QLabel *label_executables;
    QPushButton *pushButton_BRAINSFit;
    QLineEdit *lineEdit_Python;
    QPushButton *pushButton_BRAINSFitRest;
    QWidget *tab_RAandSS;
    QRadioButton *radioButton_rigidRegistration;
    QRadioButton *radioButton_preAligned;
    QCheckBox *checkBox_SkullStripping;
    QLabel *label_ReferenceAlignment;
    QLabel *label_SkullStripping;
    QPushButton *pushButton_ReferenceAtlasDir;
    QLineEdit *lineEdit_ReferenceAtlasDir;
    QWidget *tab_TissueSeg;
    QLabel *label_CSFLabel;
    QSpinBox *spinBox_CSFLabel;
    QCheckBox *checkBox_TissueSeg;
    QLabel *label_TissueSeg;
    QLineEdit *lineEdit_TissueSegAtlas;
    QPushButton *pushButton_TissueSegAtlas;
    QWidget *tab_VentricleMasking;
    QLabel *label_VerticleMasking;
    QLabel *label_ROIAtalsT1;
    QLabel *label_ROIAtalsLabel;
    QSpinBox *spinBox_LeftVentricleLabel;
    QSpinBox *spinBox_RightVentricleLabel;
    QLabel *label_LeftVentricleLabel;
    QLabel *label_RightVentricleLabel;
    QLineEdit *lineEdit_ROIAtalsT1;
    QLineEdit *lineEdit_ROIAtalsLabel;
    QCheckBox *checkBox_VerticleMasking;
    QWidget *tab_ANTSregistration;
    QLabel *label_ANTSregistration;
    QLabel *label_RegType1;
    QLabel *label_RegType2;
    QLabel *label_TransformationStep1;
    QLabel *label_TransformationStep2;
    QLabel *label_Iterations1;
    QLabel *label_Iterations2;
    QLabel *label_Metric1;
    QLabel *label_Metric2;
    QLabel *label_Metric3;
    QLabel *label_SimilarityParameter1;
    QLabel *label_SimilarityParameter2;
    QLabel *label_GaussianSigma1;
    QLabel *label_GaussianSigma2;
    QLabel *label_T1Weight;
    QComboBox *comboBox_RegType;
    QSpinBox *spinBox_SimilarityParameter;
    QSpinBox *spinBox_T1Weight;
    QDoubleSpinBox *doubleSpinBox_GaussianSigma;
    QDoubleSpinBox *doubleSpinBox_TransformationStep;
    QLineEdit *lineEdit_Iterations;
    QComboBox *comboBox_Metric;
    QWidget *tab_execution;
    QLabel *label;
    QComboBox *comboBox_Metric_2;
    QListView *listView;
    QPushButton *pushButton_execute;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CSFWindow)
    {
        if (CSFWindow->objectName().isEmpty())
            CSFWindow->setObjectName(QStringLiteral("CSFWindow"));
        CSFWindow->resize(1065, 747);
        action_LoadData = new QAction(CSFWindow);
        action_LoadData->setObjectName(QStringLiteral("action_LoadData"));
        action_SaveData = new QAction(CSFWindow);
        action_SaveData->setObjectName(QStringLiteral("action_SaveData"));
        action_LoadParameter = new QAction(CSFWindow);
        action_LoadParameter->setObjectName(QStringLiteral("action_LoadParameter"));
        action_SaveParameter = new QAction(CSFWindow);
        action_SaveParameter->setObjectName(QStringLiteral("action_SaveParameter"));
        action_LoadSoftware = new QAction(CSFWindow);
        action_LoadSoftware->setObjectName(QStringLiteral("action_LoadSoftware"));
        action_SaveSoftware = new QAction(CSFWindow);
        action_SaveSoftware->setObjectName(QStringLiteral("action_SaveSoftware"));
        actionAbout = new QAction(CSFWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        action_Quit = new QAction(CSFWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        centralwidget = new QWidget(CSFWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1021, 641));
        tab_input = new QWidget();
        tab_input->setObjectName(QStringLiteral("tab_input"));
        label_OutputFolderName = new QLabel(tab_input);
        label_OutputFolderName->setObjectName(QStringLiteral("label_OutputFolderName"));
        label_OutputFolderName->setGeometry(QRect(180, 380, 131, 31));
        pushButton_T1img = new QPushButton(tab_input);
        pushButton_T1img->setObjectName(QStringLiteral("pushButton_T1img"));
        pushButton_T1img->setGeometry(QRect(80, 50, 231, 31));
        pushButton_T2img = new QPushButton(tab_input);
        pushButton_T2img->setObjectName(QStringLiteral("pushButton_T2img"));
        pushButton_T2img->setGeometry(QRect(80, 100, 231, 31));
        pushButton_BrainMask = new QPushButton(tab_input);
        pushButton_BrainMask->setObjectName(QStringLiteral("pushButton_BrainMask"));
        pushButton_BrainMask->setGeometry(QRect(80, 150, 231, 31));
        pushButton_VentricleMask = new QPushButton(tab_input);
        pushButton_VentricleMask->setObjectName(QStringLiteral("pushButton_VentricleMask"));
        pushButton_VentricleMask->setGeometry(QRect(80, 200, 231, 31));
        pushButton_TissueSeg = new QPushButton(tab_input);
        pushButton_TissueSeg->setObjectName(QStringLiteral("pushButton_TissueSeg"));
        pushButton_TissueSeg->setGeometry(QRect(80, 250, 231, 31));
        lineEdit_T1img = new QLineEdit(tab_input);
        lineEdit_T1img->setObjectName(QStringLiteral("lineEdit_T1img"));
        lineEdit_T1img->setGeometry(QRect(320, 50, 421, 33));
        lineEdit_T2img = new QLineEdit(tab_input);
        lineEdit_T2img->setObjectName(QStringLiteral("lineEdit_T2img"));
        lineEdit_T2img->setGeometry(QRect(320, 100, 421, 33));
        lineEdit_BrainMask = new QLineEdit(tab_input);
        lineEdit_BrainMask->setObjectName(QStringLiteral("lineEdit_BrainMask"));
        lineEdit_BrainMask->setGeometry(QRect(320, 150, 421, 33));
        lineEdit_VentriclMask = new QLineEdit(tab_input);
        lineEdit_VentriclMask->setObjectName(QStringLiteral("lineEdit_VentriclMask"));
        lineEdit_VentriclMask->setGeometry(QRect(320, 200, 421, 33));
        lineEdit_TissueSeg = new QLineEdit(tab_input);
        lineEdit_TissueSeg->setObjectName(QStringLiteral("lineEdit_TissueSeg"));
        lineEdit_TissueSeg->setGeometry(QRect(320, 250, 421, 33));
        lineEdit_OutputDir = new QLineEdit(tab_input);
        lineEdit_OutputDir->setObjectName(QStringLiteral("lineEdit_OutputDir"));
        lineEdit_OutputDir->setGeometry(QRect(320, 330, 421, 33));
        label_InputPaths = new QLabel(tab_input);
        label_InputPaths->setObjectName(QStringLiteral("label_InputPaths"));
        label_InputPaths->setGeometry(QRect(20, 20, 131, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_InputPaths->setFont(font);
        label_OutpuDirectory = new QLabel(tab_input);
        label_OutpuDirectory->setObjectName(QStringLiteral("label_OutpuDirectory"));
        label_OutpuDirectory->setGeometry(QRect(20, 300, 131, 31));
        label_OutpuDirectory->setFont(font);
        lineEdit_OutputFolderName = new QLineEdit(tab_input);
        lineEdit_OutputFolderName->setObjectName(QStringLiteral("lineEdit_OutputFolderName"));
        lineEdit_OutputFolderName->setGeometry(QRect(320, 380, 231, 33));
        pushButton_OutputDir = new QPushButton(tab_input);
        pushButton_OutputDir->setObjectName(QStringLiteral("pushButton_OutputDir"));
        pushButton_OutputDir->setGeometry(QRect(80, 330, 231, 31));
        label_AcPcLevel = new QLabel(tab_input);
        label_AcPcLevel->setObjectName(QStringLiteral("label_AcPcLevel"));
        label_AcPcLevel->setGeometry(QRect(20, 430, 91, 21));
        label_AcPcLevel->setFont(font);
        spinBox_Index = new QSpinBox(tab_input);
        spinBox_Index->setObjectName(QStringLiteral("spinBox_Index"));
        spinBox_Index->setGeometry(QRect(220, 460, 71, 31));
        spinBox_Index->setValue(37);
        doubleSpinBox_mm = new QDoubleSpinBox(tab_input);
        doubleSpinBox_mm->setObjectName(QStringLiteral("doubleSpinBox_mm"));
        doubleSpinBox_mm->setGeometry(QRect(220, 500, 71, 31));
        doubleSpinBox_mm->setSingleStep(0.01);
        radioButton_Index = new QRadioButton(tab_input);
        radioButton_Index->setObjectName(QStringLiteral("radioButton_Index"));
        radioButton_Index->setGeometry(QRect(80, 460, 131, 26));
        radioButton_Index->setChecked(true);
        radioButton_mm = new QRadioButton(tab_input);
        radioButton_mm->setObjectName(QStringLiteral("radioButton_mm"));
        radioButton_mm->setGeometry(QRect(80, 500, 121, 26));
        tabWidget->addTab(tab_input, QString());
        tab_executables = new QWidget();
        tab_executables->setObjectName(QStringLiteral("tab_executables"));
        pushButton_ABC = new QPushButton(tab_executables);
        pushButton_ABC->setObjectName(QStringLiteral("pushButton_ABC"));
        pushButton_ABC->setGeometry(QRect(60, 50, 151, 31));
        pushButton_ANTS = new QPushButton(tab_executables);
        pushButton_ANTS->setObjectName(QStringLiteral("pushButton_ANTS"));
        pushButton_ANTS->setGeometry(QRect(60, 100, 151, 31));
        pushButton_ITK = new QPushButton(tab_executables);
        pushButton_ITK->setObjectName(QStringLiteral("pushButton_ITK"));
        pushButton_ITK->setGeometry(QRect(60, 300, 151, 31));
        pushButton_FSLBET = new QPushButton(tab_executables);
        pushButton_FSLBET->setObjectName(QStringLiteral("pushButton_FSLBET"));
        pushButton_FSLBET->setGeometry(QRect(60, 200, 151, 31));
        pushButton_N4 = new QPushButton(tab_executables);
        pushButton_N4->setObjectName(QStringLiteral("pushButton_N4"));
        pushButton_N4->setGeometry(QRect(60, 350, 151, 31));
        pushButton_ImageMath = new QPushButton(tab_executables);
        pushButton_ImageMath->setObjectName(QStringLiteral("pushButton_ImageMath"));
        pushButton_ImageMath->setGeometry(QRect(60, 250, 151, 31));
        pushButton_Python = new QPushButton(tab_executables);
        pushButton_Python->setObjectName(QStringLiteral("pushButton_Python"));
        pushButton_Python->setGeometry(QRect(60, 400, 151, 31));
        pushButton_ABCreset = new QPushButton(tab_executables);
        pushButton_ABCreset->setObjectName(QStringLiteral("pushButton_ABCreset"));
        pushButton_ABCreset->setGeometry(QRect(690, 50, 95, 31));
        pushButton_ANTSreset = new QPushButton(tab_executables);
        pushButton_ANTSreset->setObjectName(QStringLiteral("pushButton_ANTSreset"));
        pushButton_ANTSreset->setGeometry(QRect(690, 100, 95, 31));
        pushButton_ITKreset = new QPushButton(tab_executables);
        pushButton_ITKreset->setObjectName(QStringLiteral("pushButton_ITKreset"));
        pushButton_ITKreset->setGeometry(QRect(690, 150, 95, 31));
        pushButton_FSLBETreset = new QPushButton(tab_executables);
        pushButton_FSLBETreset->setObjectName(QStringLiteral("pushButton_FSLBETreset"));
        pushButton_FSLBETreset->setGeometry(QRect(690, 200, 95, 31));
        pushButton_N4reset = new QPushButton(tab_executables);
        pushButton_N4reset->setObjectName(QStringLiteral("pushButton_N4reset"));
        pushButton_N4reset->setGeometry(QRect(690, 250, 95, 31));
        pushButton_ImageMathReset = new QPushButton(tab_executables);
        pushButton_ImageMathReset->setObjectName(QStringLiteral("pushButton_ImageMathReset"));
        pushButton_ImageMathReset->setGeometry(QRect(690, 300, 95, 31));
        pushButton_PythonRest = new QPushButton(tab_executables);
        pushButton_PythonRest->setObjectName(QStringLiteral("pushButton_PythonRest"));
        pushButton_PythonRest->setGeometry(QRect(690, 350, 95, 31));
        lineEdit_ABC = new QLineEdit(tab_executables);
        lineEdit_ABC->setObjectName(QStringLiteral("lineEdit_ABC"));
        lineEdit_ABC->setGeometry(QRect(220, 50, 461, 33));
        lineEdit_ANTS = new QLineEdit(tab_executables);
        lineEdit_ANTS->setObjectName(QStringLiteral("lineEdit_ANTS"));
        lineEdit_ANTS->setGeometry(QRect(220, 100, 461, 33));
        lineEdit_BRAINSFit = new QLineEdit(tab_executables);
        lineEdit_BRAINSFit->setObjectName(QStringLiteral("lineEdit_BRAINSFit"));
        lineEdit_BRAINSFit->setGeometry(QRect(220, 150, 461, 33));
        lineEdit_FSLBET = new QLineEdit(tab_executables);
        lineEdit_FSLBET->setObjectName(QStringLiteral("lineEdit_FSLBET"));
        lineEdit_FSLBET->setGeometry(QRect(220, 200, 461, 33));
        lineEdit_ImageMath = new QLineEdit(tab_executables);
        lineEdit_ImageMath->setObjectName(QStringLiteral("lineEdit_ImageMath"));
        lineEdit_ImageMath->setGeometry(QRect(220, 250, 461, 33));
        lineEdit_ITK = new QLineEdit(tab_executables);
        lineEdit_ITK->setObjectName(QStringLiteral("lineEdit_ITK"));
        lineEdit_ITK->setGeometry(QRect(220, 300, 461, 33));
        lineEdit_N4 = new QLineEdit(tab_executables);
        lineEdit_N4->setObjectName(QStringLiteral("lineEdit_N4"));
        lineEdit_N4->setGeometry(QRect(220, 350, 461, 33));
        label_executables = new QLabel(tab_executables);
        label_executables->setObjectName(QStringLiteral("label_executables"));
        label_executables->setGeometry(QRect(20, 20, 151, 21));
        label_executables->setFont(font);
        pushButton_BRAINSFit = new QPushButton(tab_executables);
        pushButton_BRAINSFit->setObjectName(QStringLiteral("pushButton_BRAINSFit"));
        pushButton_BRAINSFit->setGeometry(QRect(60, 150, 151, 31));
        lineEdit_Python = new QLineEdit(tab_executables);
        lineEdit_Python->setObjectName(QStringLiteral("lineEdit_Python"));
        lineEdit_Python->setGeometry(QRect(220, 400, 461, 33));
        pushButton_BRAINSFitRest = new QPushButton(tab_executables);
        pushButton_BRAINSFitRest->setObjectName(QStringLiteral("pushButton_BRAINSFitRest"));
        pushButton_BRAINSFitRest->setGeometry(QRect(690, 400, 95, 31));
        tabWidget->addTab(tab_executables, QString());
        tab_RAandSS = new QWidget();
        tab_RAandSS->setObjectName(QStringLiteral("tab_RAandSS"));
        radioButton_rigidRegistration = new QRadioButton(tab_RAandSS);
        radioButton_rigidRegistration->setObjectName(QStringLiteral("radioButton_rigidRegistration"));
        radioButton_rigidRegistration->setGeometry(QRect(60, 50, 211, 26));
        radioButton_rigidRegistration->setChecked(true);
        radioButton_preAligned = new QRadioButton(tab_RAandSS);
        radioButton_preAligned->setObjectName(QStringLiteral("radioButton_preAligned"));
        radioButton_preAligned->setGeometry(QRect(60, 80, 201, 26));
        checkBox_SkullStripping = new QCheckBox(tab_RAandSS);
        checkBox_SkullStripping->setObjectName(QStringLiteral("checkBox_SkullStripping"));
        checkBox_SkullStripping->setGeometry(QRect(50, 220, 381, 26));
        checkBox_SkullStripping->setContextMenuPolicy(Qt::PreventContextMenu);
        checkBox_SkullStripping->setChecked(true);
        label_ReferenceAlignment = new QLabel(tab_RAandSS);
        label_ReferenceAlignment->setObjectName(QStringLiteral("label_ReferenceAlignment"));
        label_ReferenceAlignment->setGeometry(QRect(20, 20, 171, 21));
        label_ReferenceAlignment->setFont(font);
        label_SkullStripping = new QLabel(tab_RAandSS);
        label_SkullStripping->setObjectName(QStringLiteral("label_SkullStripping"));
        label_SkullStripping->setGeometry(QRect(20, 190, 191, 21));
        label_SkullStripping->setFont(font);
        pushButton_ReferenceAtlasDir = new QPushButton(tab_RAandSS);
        pushButton_ReferenceAtlasDir->setObjectName(QStringLiteral("pushButton_ReferenceAtlasDir"));
        pushButton_ReferenceAtlasDir->setGeometry(QRect(60, 120, 201, 31));
        lineEdit_ReferenceAtlasDir = new QLineEdit(tab_RAandSS);
        lineEdit_ReferenceAtlasDir->setObjectName(QStringLiteral("lineEdit_ReferenceAtlasDir"));
        lineEdit_ReferenceAtlasDir->setGeometry(QRect(280, 120, 461, 33));
        tabWidget->addTab(tab_RAandSS, QString());
        tab_TissueSeg = new QWidget();
        tab_TissueSeg->setObjectName(QStringLiteral("tab_TissueSeg"));
        label_CSFLabel = new QLabel(tab_TissueSeg);
        label_CSFLabel->setObjectName(QStringLiteral("label_CSFLabel"));
        label_CSFLabel->setGeometry(QRect(270, 100, 71, 31));
        spinBox_CSFLabel = new QSpinBox(tab_TissueSeg);
        spinBox_CSFLabel->setObjectName(QStringLiteral("spinBox_CSFLabel"));
        spinBox_CSFLabel->setGeometry(QRect(360, 100, 52, 31));
        spinBox_CSFLabel->setValue(3);
        checkBox_TissueSeg = new QCheckBox(tab_TissueSeg);
        checkBox_TissueSeg->setObjectName(QStringLiteral("checkBox_TissueSeg"));
        checkBox_TissueSeg->setGeometry(QRect(30, 30, 241, 26));
        checkBox_TissueSeg->setChecked(true);
        label_TissueSeg = new QLabel(tab_TissueSeg);
        label_TissueSeg->setObjectName(QStringLiteral("label_TissueSeg"));
        label_TissueSeg->setGeometry(QRect(30, 70, 271, 21));
        label_TissueSeg->setFont(font);
        lineEdit_TissueSegAtlas = new QLineEdit(tab_TissueSeg);
        lineEdit_TissueSegAtlas->setObjectName(QStringLiteral("lineEdit_TissueSegAtlas"));
        lineEdit_TissueSegAtlas->setGeometry(QRect(360, 150, 401, 33));
        pushButton_TissueSegAtlas = new QPushButton(tab_TissueSeg);
        pushButton_TissueSegAtlas->setObjectName(QStringLiteral("pushButton_TissueSegAtlas"));
        pushButton_TissueSegAtlas->setGeometry(QRect(80, 150, 261, 31));
        tabWidget->addTab(tab_TissueSeg, QString());
        tab_VentricleMasking = new QWidget();
        tab_VentricleMasking->setObjectName(QStringLiteral("tab_VentricleMasking"));
        label_VerticleMasking = new QLabel(tab_VentricleMasking);
        label_VerticleMasking->setObjectName(QStringLiteral("label_VerticleMasking"));
        label_VerticleMasking->setGeometry(QRect(30, 60, 211, 31));
        label_VerticleMasking->setFont(font);
        label_ROIAtalsT1 = new QLabel(tab_VentricleMasking);
        label_ROIAtalsT1->setObjectName(QStringLiteral("label_ROIAtalsT1"));
        label_ROIAtalsT1->setGeometry(QRect(170, 90, 81, 31));
        label_ROIAtalsLabel = new QLabel(tab_VentricleMasking);
        label_ROIAtalsLabel->setObjectName(QStringLiteral("label_ROIAtalsLabel"));
        label_ROIAtalsLabel->setGeometry(QRect(150, 140, 111, 31));
        spinBox_LeftVentricleLabel = new QSpinBox(tab_VentricleMasking);
        spinBox_LeftVentricleLabel->setObjectName(QStringLiteral("spinBox_LeftVentricleLabel"));
        spinBox_LeftVentricleLabel->setGeometry(QRect(270, 190, 61, 31));
        spinBox_LeftVentricleLabel->setValue(45);
        spinBox_RightVentricleLabel = new QSpinBox(tab_VentricleMasking);
        spinBox_RightVentricleLabel->setObjectName(QStringLiteral("spinBox_RightVentricleLabel"));
        spinBox_RightVentricleLabel->setGeometry(QRect(270, 240, 61, 31));
        spinBox_RightVentricleLabel->setValue(46);
        label_LeftVentricleLabel = new QLabel(tab_VentricleMasking);
        label_LeftVentricleLabel->setObjectName(QStringLiteral("label_LeftVentricleLabel"));
        label_LeftVentricleLabel->setGeometry(QRect(130, 190, 131, 31));
        label_RightVentricleLabel = new QLabel(tab_VentricleMasking);
        label_RightVentricleLabel->setObjectName(QStringLiteral("label_RightVentricleLabel"));
        label_RightVentricleLabel->setGeometry(QRect(120, 240, 141, 31));
        lineEdit_ROIAtalsT1 = new QLineEdit(tab_VentricleMasking);
        lineEdit_ROIAtalsT1->setObjectName(QStringLiteral("lineEdit_ROIAtalsT1"));
        lineEdit_ROIAtalsT1->setGeometry(QRect(270, 90, 421, 33));
        lineEdit_ROIAtalsLabel = new QLineEdit(tab_VentricleMasking);
        lineEdit_ROIAtalsLabel->setObjectName(QStringLiteral("lineEdit_ROIAtalsLabel"));
        lineEdit_ROIAtalsLabel->setGeometry(QRect(270, 140, 421, 33));
        checkBox_VerticleMasking = new QCheckBox(tab_VentricleMasking);
        checkBox_VerticleMasking->setObjectName(QStringLiteral("checkBox_VerticleMasking"));
        checkBox_VerticleMasking->setGeometry(QRect(20, 30, 371, 26));
        checkBox_VerticleMasking->setChecked(true);
        tabWidget->addTab(tab_VentricleMasking, QString());
        tab_ANTSregistration = new QWidget();
        tab_ANTSregistration->setObjectName(QStringLiteral("tab_ANTSregistration"));
        label_ANTSregistration = new QLabel(tab_ANTSregistration);
        label_ANTSregistration->setObjectName(QStringLiteral("label_ANTSregistration"));
        label_ANTSregistration->setGeometry(QRect(20, 20, 171, 21));
        label_ANTSregistration->setFont(font);
        label_RegType1 = new QLabel(tab_ANTSregistration);
        label_RegType1->setObjectName(QStringLiteral("label_RegType1"));
        label_RegType1->setGeometry(QRect(60, 60, 151, 21));
        label_RegType2 = new QLabel(tab_ANTSregistration);
        label_RegType2->setObjectName(QStringLiteral("label_RegType2"));
        label_RegType2->setGeometry(QRect(60, 90, 171, 21));
        QFont font1;
        font1.setItalic(true);
        label_RegType2->setFont(font1);
        label_TransformationStep1 = new QLabel(tab_ANTSregistration);
        label_TransformationStep1->setObjectName(QStringLiteral("label_TransformationStep1"));
        label_TransformationStep1->setGeometry(QRect(60, 140, 141, 21));
        label_TransformationStep2 = new QLabel(tab_ANTSregistration);
        label_TransformationStep2->setObjectName(QStringLiteral("label_TransformationStep2"));
        label_TransformationStep2->setGeometry(QRect(60, 170, 291, 21));
        label_TransformationStep2->setFont(font1);
        label_Iterations1 = new QLabel(tab_ANTSregistration);
        label_Iterations1->setObjectName(QStringLiteral("label_Iterations1"));
        label_Iterations1->setGeometry(QRect(60, 220, 66, 21));
        label_Iterations2 = new QLabel(tab_ANTSregistration);
        label_Iterations2->setObjectName(QStringLiteral("label_Iterations2"));
        label_Iterations2->setGeometry(QRect(60, 250, 241, 21));
        label_Iterations2->setFont(font1);
        label_Metric1 = new QLabel(tab_ANTSregistration);
        label_Metric1->setObjectName(QStringLiteral("label_Metric1"));
        label_Metric1->setGeometry(QRect(60, 290, 111, 21));
        label_Metric2 = new QLabel(tab_ANTSregistration);
        label_Metric2->setObjectName(QStringLiteral("label_Metric2"));
        label_Metric2->setGeometry(QRect(60, 320, 431, 21));
        label_Metric2->setFont(font1);
        label_Metric3 = new QLabel(tab_ANTSregistration);
        label_Metric3->setObjectName(QStringLiteral("label_Metric3"));
        label_Metric3->setGeometry(QRect(60, 340, 371, 21));
        label_Metric3->setFont(font1);
        label_SimilarityParameter1 = new QLabel(tab_ANTSregistration);
        label_SimilarityParameter1->setObjectName(QStringLiteral("label_SimilarityParameter1"));
        label_SimilarityParameter1->setGeometry(QRect(60, 390, 311, 21));
        label_SimilarityParameter2 = new QLabel(tab_ANTSregistration);
        label_SimilarityParameter2->setObjectName(QStringLiteral("label_SimilarityParameter2"));
        label_SimilarityParameter2->setGeometry(QRect(60, 420, 421, 21));
        label_SimilarityParameter2->setFont(font1);
        label_GaussianSigma1 = new QLabel(tab_ANTSregistration);
        label_GaussianSigma1->setObjectName(QStringLiteral("label_GaussianSigma1"));
        label_GaussianSigma1->setGeometry(QRect(60, 460, 161, 21));
        label_GaussianSigma2 = new QLabel(tab_ANTSregistration);
        label_GaussianSigma2->setObjectName(QStringLiteral("label_GaussianSigma2"));
        label_GaussianSigma2->setGeometry(QRect(60, 490, 231, 21));
        label_GaussianSigma2->setFont(font1);
        label_T1Weight = new QLabel(tab_ANTSregistration);
        label_T1Weight->setObjectName(QStringLiteral("label_T1Weight"));
        label_T1Weight->setGeometry(QRect(60, 540, 81, 21));
        comboBox_RegType = new QComboBox(tab_ANTSregistration);
        comboBox_RegType->setObjectName(QStringLiteral("comboBox_RegType"));
        comboBox_RegType->setGeometry(QRect(480, 80, 151, 31));
        spinBox_SimilarityParameter = new QSpinBox(tab_ANTSregistration);
        spinBox_SimilarityParameter->setObjectName(QStringLiteral("spinBox_SimilarityParameter"));
        spinBox_SimilarityParameter->setGeometry(QRect(560, 420, 71, 31));
        spinBox_SimilarityParameter->setValue(4);
        spinBox_T1Weight = new QSpinBox(tab_ANTSregistration);
        spinBox_T1Weight->setObjectName(QStringLiteral("spinBox_T1Weight"));
        spinBox_T1Weight->setGeometry(QRect(560, 540, 71, 31));
        spinBox_T1Weight->setValue(1);
        doubleSpinBox_GaussianSigma = new QDoubleSpinBox(tab_ANTSregistration);
        doubleSpinBox_GaussianSigma->setObjectName(QStringLiteral("doubleSpinBox_GaussianSigma"));
        doubleSpinBox_GaussianSigma->setGeometry(QRect(560, 480, 71, 31));
        doubleSpinBox_GaussianSigma->setSingleStep(0.01);
        doubleSpinBox_TransformationStep = new QDoubleSpinBox(tab_ANTSregistration);
        doubleSpinBox_TransformationStep->setObjectName(QStringLiteral("doubleSpinBox_TransformationStep"));
        doubleSpinBox_TransformationStep->setGeometry(QRect(560, 160, 71, 31));
        doubleSpinBox_TransformationStep->setSingleStep(0.01);
        doubleSpinBox_TransformationStep->setValue(0.25);
        lineEdit_Iterations = new QLineEdit(tab_ANTSregistration);
        lineEdit_Iterations->setObjectName(QStringLiteral("lineEdit_Iterations"));
        lineEdit_Iterations->setGeometry(QRect(482, 250, 151, 33));
        comboBox_Metric = new QComboBox(tab_ANTSregistration);
        comboBox_Metric->setObjectName(QStringLiteral("comboBox_Metric"));
        comboBox_Metric->setGeometry(QRect(480, 330, 151, 31));
        tabWidget->addTab(tab_ANTSregistration, QString());
        tab_execution = new QWidget();
        tab_execution->setObjectName(QStringLiteral("tab_execution"));
        label = new QLabel(tab_execution);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 66, 31));
        comboBox_Metric_2 = new QComboBox(tab_execution);
        comboBox_Metric_2->setObjectName(QStringLiteral("comboBox_Metric_2"));
        comboBox_Metric_2->setGeometry(QRect(110, 30, 71, 31));
        listView = new QListView(tab_execution);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 70, 731, 481));
        tabWidget->addTab(tab_execution, QString());
        pushButton_execute = new QPushButton(centralwidget);
        pushButton_execute->setObjectName(QStringLiteral("pushButton_execute"));
        pushButton_execute->setGeometry(QRect(910, 660, 95, 31));
        CSFWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CSFWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1065, 27));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        CSFWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CSFWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CSFWindow->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        label_SimilarityParameter1->setBuddy(label_SimilarityParameter1);
#endif // QT_NO_SHORTCUT

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu->addAction(action_LoadData);
        menu->addAction(action_SaveData);
        menu->addSeparator();
        menu->addAction(action_LoadParameter);
        menu->addAction(action_SaveParameter);
        menu->addSeparator();
        menu->addAction(action_LoadSoftware);
        menu->addAction(action_SaveSoftware);
        menu->addSeparator();
        menu->addAction(action_Quit);
        menuHelp->addAction(actionAbout);

        retranslateUi(CSFWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(CSFWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CSFWindow)
    {
        CSFWindow->setWindowTitle(QApplication::translate("CSFWindow", "CSFWindow", 0));
        action_LoadData->setText(QApplication::translate("CSFWindow", "Load  Data Configuration", 0));
        action_SaveData->setText(QApplication::translate("CSFWindow", "Save  Data Configuration", 0));
        action_LoadParameter->setText(QApplication::translate("CSFWindow", "Load  Parameter Configuration", 0));
        action_SaveParameter->setText(QApplication::translate("CSFWindow", "Save Parameter Configuration", 0));
        action_LoadSoftware->setText(QApplication::translate("CSFWindow", "Load  Software Configuration", 0));
        action_SaveSoftware->setText(QApplication::translate("CSFWindow", "Save  Software Configuration", 0));
        actionAbout->setText(QApplication::translate("CSFWindow", "About", 0));
        action_Quit->setText(QApplication::translate("CSFWindow", "Quit", 0));
        label_OutputFolderName->setText(QApplication::translate("CSFWindow", "Output folder name", 0));
        pushButton_T1img->setText(QApplication::translate("CSFWindow", "T1 image", 0));
        pushButton_T2img->setText(QApplication::translate("CSFWindow", "T2 image (optional)", 0));
        pushButton_BrainMask->setText(QApplication::translate("CSFWindow", "Brain Mask (optional)", 0));
        pushButton_VentricleMask->setText(QApplication::translate("CSFWindow", "Ventricle Mask (optional)", 0));
        pushButton_TissueSeg->setText(QApplication::translate("CSFWindow", "Tissue Segmentation (optional)", 0));
        label_InputPaths->setText(QApplication::translate("CSFWindow", "Input Paths", 0));
        label_OutpuDirectory->setText(QApplication::translate("CSFWindow", "Output Directory", 0));
        pushButton_OutputDir->setText(QApplication::translate("CSFWindow", "Output Directory", 0));
        label_AcPcLevel->setText(QApplication::translate("CSFWindow", "AC PC Level", 0));
        radioButton_Index->setText(QApplication::translate("CSFWindow", "Option 1: Index", 0));
        radioButton_mm->setText(QApplication::translate("CSFWindow", "Option 2: mm", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_input), QApplication::translate("CSFWindow", "Input", 0));
        pushButton_ABC->setText(QApplication::translate("CSFWindow", "ABC", 0));
        pushButton_ANTS->setText(QApplication::translate("CSFWindow", "ANTS", 0));
        pushButton_ITK->setText(QApplication::translate("CSFWindow", "ITK Transform Tools", 0));
        pushButton_FSLBET->setText(QApplication::translate("CSFWindow", "FSLBET", 0));
        pushButton_N4->setText(QApplication::translate("CSFWindow", "N4", 0));
        pushButton_ImageMath->setText(QApplication::translate("CSFWindow", "ImageMath", 0));
        pushButton_Python->setText(QApplication::translate("CSFWindow", "Python", 0));
        pushButton_ABCreset->setText(QApplication::translate("CSFWindow", "Reset", 0));
        pushButton_ANTSreset->setText(QApplication::translate("CSFWindow", "Reset", 0));
        pushButton_ITKreset->setText(QApplication::translate("CSFWindow", "Reset", 0));
        pushButton_FSLBETreset->setText(QApplication::translate("CSFWindow", "Reset", 0));
        pushButton_N4reset->setText(QApplication::translate("CSFWindow", "Reset", 0));
        pushButton_ImageMathReset->setText(QApplication::translate("CSFWindow", "Reset", 0));
        pushButton_PythonRest->setText(QApplication::translate("CSFWindow", "Reset", 0));
        lineEdit_ABC->setText(QString());
        label_executables->setText(QApplication::translate("CSFWindow", "Executables", 0));
        pushButton_BRAINSFit->setText(QApplication::translate("CSFWindow", "BRAINSFit", 0));
        pushButton_BRAINSFitRest->setText(QApplication::translate("CSFWindow", "Reset", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_executables), QApplication::translate("CSFWindow", "Executables", 0));
        radioButton_rigidRegistration->setText(QApplication::translate("CSFWindow", "Perform rigid registration", 0));
        radioButton_preAligned->setText(QApplication::translate("CSFWindow", "My data is pre-aligned", 0));
        checkBox_SkullStripping->setText(QApplication::translate("CSFWindow", "Perform automatic skull-stripping", 0));
        label_ReferenceAlignment->setText(QApplication::translate("CSFWindow", "1. Reference Alignment", 0));
        label_SkullStripping->setText(QApplication::translate("CSFWindow", "2. Skull Stripping", 0));
        pushButton_ReferenceAtlasDir->setText(QApplication::translate("CSFWindow", "Reference Atlas Directory", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_RAandSS), QApplication::translate("CSFWindow", "1. Reference Alignment | 2. Skull Stripping", 0));
        label_CSFLabel->setText(QApplication::translate("CSFWindow", "CSF-Label", 0));
        checkBox_TissueSeg->setText(QApplication::translate("CSFWindow", "Perform tissue segmentation", 0));
        label_TissueSeg->setText(QApplication::translate("CSFWindow", "<html><head/><body><p>Tissue Segmentation Parameters</p></body></html>", 0));
        pushButton_TissueSegAtlas->setText(QApplication::translate("CSFWindow", "Tissue Segmentation Atlas Directory", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_TissueSeg), QApplication::translate("CSFWindow", "3. Tissue Segmentation", 0));
        label_VerticleMasking->setText(QApplication::translate("CSFWindow", "Ventricle Masking Parameters", 0));
        label_ROIAtalsT1->setText(QApplication::translate("CSFWindow", "ROI Atlas T1", 0));
        label_ROIAtalsLabel->setText(QApplication::translate("CSFWindow", "ROI Atlas Label", 0));
        label_LeftVentricleLabel->setText(QApplication::translate("CSFWindow", "Left Ventricle Label", 0));
        label_RightVentricleLabel->setText(QApplication::translate("CSFWindow", "Right Ventricle Label", 0));
        checkBox_VerticleMasking->setText(QApplication::translate("CSFWindow", "Perform ventircle masking", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_VentricleMasking), QApplication::translate("CSFWindow", "4. Ventricle Masking", 0));
        label_ANTSregistration->setText(QApplication::translate("CSFWindow", "ANTS Registration Parameters", 0));
        label_RegType1->setText(QApplication::translate("CSFWindow", "Registration Type", 0));
        label_RegType2->setText(QApplication::translate("CSFWindow", "ANTS Registration Type", 0));
        label_TransformationStep1->setText(QApplication::translate("CSFWindow", "Transformation Step", 0));
        label_TransformationStep2->setText(QApplication::translate("CSFWindow", "Diffeomorphic gradient descent step length", 0));
        label_Iterations1->setText(QApplication::translate("CSFWindow", "Iterations", 0));
        label_Iterations2->setText(QApplication::translate("CSFWindow", "ANTS Iterations for diffeomorphism", 0));
        label_Metric1->setText(QApplication::translate("CSFWindow", "Similarity Metric", 0));
        label_Metric2->setText(QApplication::translate("CSFWindow", "ANTS Similarity Metric type: CC=Cross-Correlation,", 0));
        label_Metric3->setText(QApplication::translate("CSFWindow", "MI=Mutual Information, MSQ=Mean Square Difference", 0));
        label_SimilarityParameter1->setText(QApplication::translate("CSFWindow", "Similarity Parameter", 0));
        label_SimilarityParameter2->setText(QApplication::translate("CSFWindow", "Region Radius for CC, number of bins for MI, etc.", 0));
        label_GaussianSigma1->setText(QApplication::translate("CSFWindow", "Gaussian Sigma", 0));
        label_GaussianSigma2->setText(QApplication::translate("CSFWindow", "ANTS Gaussian Sigma", 0));
        label_T1Weight->setText(QApplication::translate("CSFWindow", "T1 Weight", 0));
        comboBox_RegType->clear();
        comboBox_RegType->insertItems(0, QStringList()
         << QApplication::translate("CSFWindow", "GreedyDiffeo", 0)
         << QApplication::translate("CSFWindow", "Rigid", 0)
         << QApplication::translate("CSFWindow", "Affine", 0)
         << QApplication::translate("CSFWindow", "SpatioTempDiffeo", 0)
        );
        lineEdit_Iterations->setText(QApplication::translate("CSFWindow", "100x50x25", 0));
        comboBox_Metric->clear();
        comboBox_Metric->insertItems(0, QStringList()
         << QApplication::translate("CSFWindow", "CC", 0)
         << QApplication::translate("CSFWindow", "MI", 0)
         << QApplication::translate("CSFWindow", "MSQ", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_ANTSregistration), QApplication::translate("CSFWindow", "5. ANTS Registration", 0));
        label->setText(QApplication::translate("CSFWindow", "Run it on:", 0));
        comboBox_Metric_2->clear();
        comboBox_Metric_2->insertItems(0, QStringList()
         << QApplication::translate("CSFWindow", "local", 0)
         << QApplication::translate("CSFWindow", "killdevil", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_execution), QApplication::translate("CSFWindow", "6. Execution", 0));
        pushButton_execute->setText(QApplication::translate("CSFWindow", "Execute", 0));
        menu->setTitle(QApplication::translate("CSFWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("CSFWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class CSFWindow: public Ui_CSFWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSFWINDOW_H
