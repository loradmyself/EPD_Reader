#ifndef UI_REGIONS_MANAGER_H
#define UI_REGIONS_MANAGER_H

#include "Actions.h"
#include "Renderer/Renderer.h"
#include "boards/controls/Actions.h"
// 1. 定义区域结构体
typedef struct {
    int start_x;
    int start_y;
    int end_x;
    int end_y;
    UIAction action; // 点击该区域时触发的动作
} AreaRect;

#define MAX_AREAS 30  // 最大区域数量
extern AreaRect g_area_array[MAX_AREAS];
extern int g_area_count;

void clear_areas(); 
bool add_area(int x, int y, int width, int height); //动态添加区域
bool static_add_area(int x, int y, int width, int height ,int index); //静态添加区域


#endif