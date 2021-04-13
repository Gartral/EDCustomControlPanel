#ifndef TOUCHPANEL1_H
#define TOUCHPANEL1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TouchPanel1; }
QT_END_NAMESPACE

class TouchPanel1 : public QMainWindow
{
    Q_OBJECT

public:
    TouchPanel1(QWidget *parent = nullptr);
    ~TouchPanel1();

private slots:

    void on_navPanel_pressed();

##    void on_navPanel_released();

    void on_commPanel_pressed();

##    void on_commPanel_released();

    void on_vehiclePanel_pressed();

##    void on_vehiclePanel_released();

    void on_modulePanel_pressed();

##    void on_modulePanel_released();

    void on_hud_prv_tab_pressed();

##    void on_hud_prv_tab_released();

    void on_hud_next_tab_pressed();

##    void on_hud_next_tab_released();

    void on_hud_nav_left_pressed();

##    void on_hud_nav_left_released();

    void on_hud_nav_right_pressed();

##    void on_hud_nav_right_released();

    void on_hud_nav_up_pressed();

##    void on_hud_nav_up_released();

    void on_hud_nav_down_pressed();

##    void on_hud_nav_down_released();

    void on_hud_confirm_pressed();

##    void on_hud_confirm_released();

    void on_nav_systemmap_pressed();

##    void on_nav_systemmap_released();

    void on_nav_galaxymap_pressed();

##    void on_nav_galaxymap_released();

    void on_supercruise_jump_pressed();

##    void on_supercruise_jump_released();

    void on_velocity_minus_pressed();

    void on_velocity_plus_pressed();

    void on_full_stop_pressed();

##    void on_full_stop_released();

    void on_vel_25_pressed();

##    void on_vel_25_released();

    void on_vel_50_pressed();

##    void on_vel_50_released();

    void on_vel_75_pressed();

##    void on_vel_75_released();

    void on_vel_100_pressed();

##    void on_vel_100_released();

    void on_prv_firegr_pressed();

##    void on_prv_firegr_released();

    void on_next_firegr_pressed();

##    void on_next_firegr_released();

    void on_landing_gear_pressed();

##    void on_landing_gear_released();

    void on_fss_mode_pressed();

##    void on_fss_mode_released();

    void on_orbitlines_pressed();

##    void on_orbitlines_released();

    void on_fire_main_pressed();

    void on_fire_2nd_pressed();

    void on_lights_pressed();

##    void on_lights_released();

    void on_velocity_minus_released();

##    void on_velocity_plus_released();

    void on_hud_confirm_2_pressed();

##    void on_hud_confirm_2_released();

##    void on_fire_2nd_released();

##    void on_fire_main_released();

private:
    Ui::TouchPanel1 *ui;
};
#endif // TOUCHPANEL1_H
