#include "touchpanel1.h"
#include "ui_touchpanel1.h"

TouchPanel1::TouchPanel1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TouchPanel1)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowFullScreen);
}

TouchPanel1::~TouchPanel1()
{
    delete ui;
}

void TouchPanel1::on_navPanel_pressed()      { system("/home/marcus-s/Private/Scripts/ed_keypress.sh 1"); }
##void TouchPanel1::on_navPanel_released()     { system("/home/marcus-s/Private/Scripts/ed_keyup.sh 1"); }

void TouchPanel1::on_commPanel_pressed()     { system("/home/marcus-s/Private/Scripts/ed_keypress.sh 2"); }
##void TouchPanel1::on_commPanel_released()    { system("/home/marcus-s/Private/Scripts/ed_keyup.sh 2"); }

void TouchPanel1::on_vehiclePanel_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh 3"); }
##void TouchPanel1::on_vehiclePanel_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh 3"); }

void TouchPanel1::on_modulePanel_pressed()   { system("/home/marcus-s/Private/Scripts/ed_keypress.sh 4"); }
##void TouchPanel1::on_modulePanel_released()  { system("/home/marcus-s/Private/Scripts/ed_keyup.sh 4"); }

void TouchPanel1::on_hud_prv_tab_pressed()   { system("/home/marcus-s/Private/Scripts/ed_keypress.sh q"); }
##void TouchPanel1::on_hud_prv_tab_released()  { system("/home/marcus-s/Private/Scripts/ed_keyup.sh q"); }

void TouchPanel1::on_hud_next_tab_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh e"); }
##void TouchPanel1::on_hud_next_tab_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh e"); }

void TouchPanel1::on_hud_nav_left_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh Left"); }
##void TouchPanel1::on_hud_nav_left_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh Left"); }

void TouchPanel1::on_hud_nav_right_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh Right"); }
##void TouchPanel1::on_hud_nav_right_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh Right"); }

void TouchPanel1::on_hud_nav_up_pressed()    { system("/home/marcus-s/Private/Scripts/ed_keypress.sh Up"); }
##void TouchPanel1::on_hud_nav_up_released()   { system("/home/marcus-s/Private/Scripts/ed_keyup.sh Up"); }

void TouchPanel1::on_hud_nav_down_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh Down"); }
##void TouchPanel1::on_hud_nav_down_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh Down"); }

void TouchPanel1::on_hud_confirm_pressed()   { system("/home/marcus-s/Private/Scripts/ed_keypress.sh space"); }
##void TouchPanel1::on_hud_confirm_released()  { system("/home/marcus-s/Private/Scripts/ed_keyup.sh space"); }

void TouchPanel1::on_nav_systemmap_pressed() { system("/home/marcus-s/Private/Scripts/ed_keypress.sh 5"); }
##void TouchPanel1::on_nav_systemmap_released(){ system("/home/marcus-s/Private/Scripts/ed_keyup.sh 5"); }

void TouchPanel1::on_nav_galaxymap_pressed() { system("/home/marcus-s/Private/Scripts/ed_keypress.sh 6"); }
##void TouchPanel1::on_nav_galaxymap_released(){ system("/home/marcus-s/Private/Scripts/ed_keyup.sh 6"); }

void TouchPanel1::on_supercruise_jump_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh j"); }
##void TouchPanel1::on_supercruise_jump_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh j"); }

void TouchPanel1::on_velocity_minus_pressed() { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F1"); }
##void TouchPanel1::on_velocity_minus_released(){ system("/home/marcus-s/Private/Scripts/ed_keyup.sh F1"); }

void TouchPanel1::on_velocity_plus_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F2"); }
##void TouchPanel1::on_velocity_plus_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F2"); }

void TouchPanel1::on_full_stop_pressed()      { system("/home/marcus-s/Private/Scripts/ed_keypress.sh Home"); }
##void TouchPanel1::on_full_stop_released()     { system("/home/marcus-s/Private/Scripts/ed_keyup.sh Home"); }

void TouchPanel1::on_vel_25_pressed()         { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F9"); }
##void TouchPanel1::on_vel_25_released()        { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F9"); }

void TouchPanel1::on_vel_50_pressed()         { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F10"); }
##void TouchPanel1::on_vel_50_released()        { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F10"); }

void TouchPanel1::on_vel_75_pressed()         { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F11"); }
##void TouchPanel1::on_vel_75_released()        { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F11"); }

void TouchPanel1::on_vel_100_pressed()        { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F12"); }
##void TouchPanel1::on_vel_100_released()       { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F12"); }

void TouchPanel1::on_prv_firegr_pressed()     { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F5"); }
##void TouchPanel1::on_prv_firegr_released()    { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F5"); }

void TouchPanel1::on_next_firegr_pressed()    { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F6"); }
##void TouchPanel1::on_next_firegr_released()   { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F6"); }

void TouchPanel1::on_landing_gear_pressed()   { system("/home/marcus-s/Private/Scripts/ed_keypress.sh l"); }
##void TouchPanel1::on_landing_gear_released()  { system("/home/marcus-s/Private/Scripts/ed_keyup.sh l"); }

void TouchPanel1::on_fss_mode_pressed()       { system("/home/marcus-s/Private/Scripts/ed_keypress.sh F4"); }
##void TouchPanel1::on_fss_mode_released()      { system("/home/marcus-s/Private/Scripts/ed_keyup.sh F4"); }

void TouchPanel1::on_orbitlines_pressed()     { system("/home/marcus-s/Private/Scripts/ed_keypress.sh o"); }
##void TouchPanel1::on_orbitlines_released()    { system("/home/marcus-s/Private/Scripts/ed_keyup.sh o"); }

void TouchPanel1::on_fire_main_pressed()      { system("/home/marcus-s/Private/Scripts/ed_keypress.sh n"); }
##void TouchPanel1::on_fire_main_released()     { system("/home/marcus-s/Private/Scripts/ed_keyup.sh n"); }

void TouchPanel1::on_fire_2nd_pressed()       { system("/home/marcus-s/Private/Scripts/ed_keypress.sh b"); }
##void TouchPanel1::on_fire_2nd_released()      { system("/home/marcus-s/Private/Scripts/ed_keyup.sh b"); }

void TouchPanel1::on_lights_pressed()         { system("/home/marcus-s/Private/Scripts/ed_keypress.sh Insert"); }
##void TouchPanel1::on_lights_released()        { system("/home/marcus-s/Private/Scripts/ed_keyup.sh Insert"); }

void TouchPanel1::on_hud_confirm_2_pressed()  { system("/home/marcus-s/Private/Scripts/ed_keypress.sh BackSpace"); }
##void TouchPanel1::on_hud_confirm_2_released() { system("/home/marcus-s/Private/Scripts/ed_keyup.sh BackSpace"); }




