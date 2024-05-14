//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Project1PCH1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Project1PCH1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
	DataModule3->ATTalabalar->Insert();
	Form2->Show();
	Form1->Hide();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
	DataModule3->ATGuruxlar->Insert();
	Form4->Show();
	Form1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
	DataModule3->ATGuruxlar->Edit();
	Form4->Show();
	Form1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
	DataModule3->ATTalabalar->Edit();
	Form2->Show();
	Form1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
	switch (MessageDlg("Rostdan o'chirmoqchimisiz?",mtConfirmation,mbYesNoCancel,0)) {
	  case mrYes: DataModule3->ATTalabalar->Delete();  break;
	  case mrNo: break;
	  case mrCancel:  DataModule3->ATTalabalar->Cancel();  break;
	default:
		;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DBGrid3DblClick(TObject *Sender)
{
	Image1->Picture->LoadFromFile(DBEdit1->Text);
	Image1->Stretch=true;
}
//---------------------------------------------------------------------------
