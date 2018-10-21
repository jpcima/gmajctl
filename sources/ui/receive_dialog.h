// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef receive_dialog_h
#define receive_dialog_h
#include <FL/Fl.H>
#include <stdint.h>
class Patch_Bank;
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Box.H>

class Receive_Dialog {
public:
  Receive_Dialog(Patch_Bank &pbank); 
private:
  void begin_receive(); 
  void end_receive(); 
  static void on_midi_input(const uint8_t *msg, size_t len, void *user_data); 
  static void on_update_tick(void *user_data); 
public:
  int show(const char *title);
private:
  inline void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
  inline void cb_OK_i(Fl_Button*, void*);
  static void cb_OK(Fl_Button*, void*);
public:
  Fl_Value_Output *val_rx_programs;
  Fl_Value_Output *val_rx_messages;
private:
  Patch_Bank *pbank_ = nullptr; 
  Fl_Double_Window *window_ = nullptr; 
  bool accept_ = false; 
  unsigned rx_programs_ = 0; 
  unsigned rx_messages_ = 0; 
};
#endif
