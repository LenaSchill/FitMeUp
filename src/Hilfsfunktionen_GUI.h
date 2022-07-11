
#pragma once
#include <iostream>
std::string textBoxAuslesen(::System::Windows::Forms::TextBox^ box);
std::string datumAuslesen(::System::Windows::Forms::MaskedTextBox^ box);
int NumericUpDownAuslesen(::System::Windows::Forms::NumericUpDown^ numeric);
bool radioButtonAuslesen(::System::Windows::Forms::RadioButton^ radio);
bool isEmpty(array<::System::Windows::Forms::TextBox^>^ boxen, int size);
std::string comboBoxAuslesen(::System::Windows::Forms::ComboBox^ combo);