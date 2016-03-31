//
//  SPPhotoBrowserConfig.h
//  SPPhotoBrowser
//
//  Created by admin on 16/3/31.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

//#ifndef SPPhotoBrowserConfig_h
//#define SPPhotoBrowserConfig_h


typedef enum {
    SPWaitingViewModeLoopDiagram, // 环形
    SPWaitingViewModePieDiagram // 饼型
} SPWaitingViewMode;

// 图片保存成功提示文字
#define SPPhotoBrowserSaveImageSuccessText @"保存成功 ";

// 图片保存失败提示文字
#define SPPhotoBrowserSaveImageFailText @"保存失败 ";

// browser背景颜色
#define SPPhotoBrowserBackgrounColor [UIColor colorWithRed:0 green:0 blue:0 alpha:0.95]

// browser中图片间的margin
#define SPPhotoBrowserImageViewMargin 10

// browser中显示图片动画时长
#define SPPhotoBrowserShowImageAnimationDuration 0.4f

// browser中显示图片动画时长
#define SPPhotoBrowserHideImageAnimationDuration 0.4f

// 图片下载进度指示进度显示样式（SPWaitingViewModeLoopDiagram 环形，SPWaitingViewModePieDiagram 饼型）
#define SPWaitingViewProgressMode SPWaitingViewModeLoopDiagram

// 图片下载进度指示器背景色
#define SPWaitingViewBackgroundColor [UIColor colorWithRed:0 green:0 blue:0 alpha:0.7]

// 图片下载进度指示器内部控件间的间距
#define SPWaitingViewItemMargin 10



//#endif /* SPPhotoBrowserConfig_h */

