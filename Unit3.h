//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule3 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOTable *ATFakultet;
	TDataSource *DSFakultet;
	TADOTable *ATGuruxlar;
	TADOTable *ATTalabalar;
	TDataSource *DSGuruxlar;
	TDataSource *DSTalabalar;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule3 *DataModule3;
//---------------------------------------------------------------------------
#endif
