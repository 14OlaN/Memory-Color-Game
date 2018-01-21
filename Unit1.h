//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *Label1;
        TImage *Z1;
        TImage *Z2;
        TImage *Z4;
        TImage *Z5;
        TImage *Z3;
        TImage *Z5A;
        TImage *Z4A;
        TImage *Z2A;
        TImage *Z3A;
        TImage *Z1A;
        TLabel *Label2;
        TLabel *Scores;
        TTimer *Timer1;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Label1Click(TObject *Sender);
        void __fastcall Z1Click(TObject *Sender);
        void __fastcall Z3Click(TObject *Sender);
        void __fastcall Z4Click(TObject *Sender);
        void __fastcall Z5Click(TObject *Sender);
        void __fastcall Z1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z2MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z2MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z3MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z3MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z4MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z4MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z5MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z5MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Z2Click(TObject *Sender);
        void __fastcall ScoreChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
