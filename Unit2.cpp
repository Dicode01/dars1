//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
	DataModule3->ATTalabalar->Post();
	Form2->Close();
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	OpenPictureDialog1->Execute();
	Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
	DBEdit4->Text= OpenPictureDialog1->FileName;

}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
	DataModule3->ATTalabalar->Cancel();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	 DataModule3->ATTalabalar->Cancel();
	 Form1->Show();
}
//---------------------------------------------------------------------------
