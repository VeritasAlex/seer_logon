#include "ext.h"

QString current_version="6.0.0";

Dm::Idmsoft dm;
HWND Pid;
HWND wPid;

QString new_version;
QString new_content;
QString new_error;
QString new_upurl;
QString new_time;
QString new_news;
QString new_guanggao;

QString dangqianshoufa;
QString dangqianjingling;
QString jinglingjineng;

QString jfjl;//己方精灵
QString dmjl;//对面精灵
QString allpath;

bool fw_allactive;
bool fw_lqactive;//飞王灵巧激活
bool fw_llactive;//飞王凌厉激活
bool fw_cxactive;//飞王持续激活
bool fw_trueactive;//飞王正确激活
QString fw_goal;//飞王战斗目标

bool friend_click;//好友已按下
bool panel_open;//面板已开
int panel_wish;//许愿面板

int searles_lose;//圣瑞战败次数
int searles_fight;//圣瑞挑战次数
int searles_reset;//圣瑞重置次数

bool explode_death;//神王_自爆死
