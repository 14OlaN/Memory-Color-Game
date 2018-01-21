//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "mmsystem.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int number[1000];
bool game = false;
int amount = 0;
int points = 0;
AnsiString score2;
void reset() {
        game = false;
        amount = 0;
        points = 0;
        Form1->Label2->Visible = false;
        Form1->Scores->Visible = false;
        Form1->Label1->Caption = "START";
}
void sequence() {
        Application->ProcessMessages();
        Sleep(1000);
        Form1->Z1->Picture->LoadFromFile("img/p1.bmp");
        Form1->Z2->Picture->LoadFromFile("img/p2.bmp");
        Form1->Z3->Picture->LoadFromFile("img/p3.bmp");
        Form1->Z4->Picture->LoadFromFile("img/p4.bmp");
        Form1->Z5->Picture->LoadFromFile("img/p5.bmp");
        Form1->Z1->Enabled = false;
        Form1->Z2->Enabled = false;
        Form1->Z3->Enabled = false;
        Form1->Z4->Enabled = false;
        Form1->Z5->Enabled = false;
        Form1->Label1->Caption = "Countdown:  3";
        Application->ProcessMessages();
        Sleep(1000);
        Form1->Label1->Caption = "Countdown:  2";
        Application->ProcessMessages();
        Sleep(1000);
        Form1->Label1->Caption = "Countdown:  1";
        Application->ProcessMessages();
        Sleep(1000);
        Form1->Label1->Font->Size = 20;
        Form1->Label1->Caption = "Repeat the sequence of the lights";
        amount++;
        Application->ProcessMessages();
        Sleep(1000);
        for (int i=0; i<amount; i++){
                switch (number[i]){
                case 1:
                sndPlaySound("snd/d1.wav", SND_ASYNC);
                Form1->Z1A->Visible = true;
                break;
                case 2:
                sndPlaySound("snd/d2.wav", SND_ASYNC);
                Form1->Z2A->Visible = true;
                break;
                case 3:
                sndPlaySound("snd/d3.wav", SND_ASYNC);
                Form1->Z3A->Visible = true;
                break;
                case 4:
                sndPlaySound("snd/d4.wav", SND_ASYNC);
                Form1->Z4A->Visible = true;
                break;
                case 5:
                sndPlaySound("snd/d5.wav", SND_ASYNC);
                Form1->Z5A->Visible = true;
                break;
                }
        Application->ProcessMessages();
        if(points%3 == 0 && points < 16){
                int i = points/3;
                Sleep(1000-(i*100));
        }
        Form1->Z1A->Visible = false;
        Form1->Z2A->Visible = false;
        Form1->Z3A->Visible = false;
        Form1->Z4A->Visible = false;
        Form1->Z5A->Visible = false;
        Application->ProcessMessages();
        if(points%3 == 0 && points < 16){
                int i = points/3;
                Sleep(1000-(i*100));
        }
        }
        
        Form1->Z1->Enabled = true;
        Form1->Z2->Enabled = true;
        Form1->Z3->Enabled = true;
        Form1->Z4->Enabled = true;
        Form1->Z5->Enabled = true;
        Form1->Label1->Caption = "Repeat the sequence of the lights";
        points = 0;
        Form1->Timer1->Enabled = true;
        Form1->Label2->Visible = true;
        Form1->Scores->Visible = true;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
randomize();
for(int i = 0; i<1000; i++) {
         number[i] = random(5)+1;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label1Click(TObject *Sender)
{
if (Label1->Caption == "Game Over!") {
        reset();
}
else if(game == false) {
        game = true;
        sndPlaySound("snd/start.wav", SND_ASYNC);
        sequence();
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Z1Click(TObject *Sender)
{
if(game == true){
        points++;
        score2= IntToStr(points);
        Form1->Scores->Caption = score2;
        if(number[points-1]!=1) {
                amount--;
                Label1->Caption = "Game Over!";
                sndPlaySound("snd/koniec.wav", SND_ASYNC);
                game=false;
        }
        if(points==amount && game == true){
                Label1->Caption = "Good job";
                sequence();
        }
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Z3Click(TObject *Sender)
{
if(game == true){
        points++;
        score2= IntToStr(points);
        Form1->Scores->Caption = score2;
        if(number[points-1]!=3) {
                amount--;
                Label1->Caption = "Game Over!";
                sndPlaySound("snd/koniec.wav", SND_ASYNC);
                game=false;
        }
        if(points==amount && game == true){
                Label1->Caption = "Good job";
                sequence();
        }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z4Click(TObject *Sender)
{
if(game == true){
        points++;
        score2= IntToStr(points);
        Form1->Scores->Caption = score2;
        if(number[points-1]!=4) {
                amount--;
                Label1->Caption = "Game Over!";
                sndPlaySound("snd/koniec.wav", SND_ASYNC);
                game=false;
        }
        if(points==amount && game == true){
                Label1->Caption = "Good job";
                sequence();
        }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z5Click(TObject *Sender)
{
if(game == true){
        points++;
        score2= IntToStr(points);
        Form1->Scores->Caption = score2;
        if(number[points-1]!=5) {
                amount--;
                Label1->Caption = "Game Over!";
                sndPlaySound("snd/koniec.wav", SND_ASYNC);
                game=false;
        }
        if(points==amount && game == true){
                Label1->Caption = "Good job";
                sequence();
        }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z1->Picture->LoadFromFile("img/p1a.bmp");
sndPlaySound("snd/d1.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z1->Picture->LoadFromFile("img/p1.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z2->Picture->LoadFromFile("img/p2a.bmp");
sndPlaySound("snd/d2.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z2->Picture->LoadFromFile("img/p2.bmp");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Z3MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z3->Picture->LoadFromFile("img/p3a.bmp");
sndPlaySound("snd/d3.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z3MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z3->Picture->LoadFromFile("img/p3.bmp");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Z4MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z4->Picture->LoadFromFile("img/p4a.bmp");
sndPlaySound("snd/d4.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z4MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z4->Picture->LoadFromFile("img/p4.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z5MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z5->Picture->LoadFromFile("img/p5a.bmp");
sndPlaySound("snd/d5.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z5MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Z5->Picture->LoadFromFile("img/p5.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z2Click(TObject *Sender)
{
if(game == true){
        points++;
        score2= IntToStr(points);
        Form1->Scores->Caption = "";
        if(number[points-1]!=2) {
                amount--;
                Label1->Caption = "Game Over!";
                sndPlaySound("snd/koniec.wav", SND_ASYNC);
                game=false;
        }
        if(points==amount && game == true){
                Label1->Caption = "Good job";
                sequence();
        }
}
}
//---------------------------------------------------------------------------






