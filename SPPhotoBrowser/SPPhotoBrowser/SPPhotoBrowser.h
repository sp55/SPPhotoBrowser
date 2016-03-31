//
//  SPPhotoBrowser.h
//  SPPhotoBrowser
//
//  Created by admin on 16/3/31.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class  SPPhotoBrowser;

@protocol SPPhotoBrowserDelegate <NSObject>

@required

- (UIImage *)photoBrowser:(SPPhotoBrowser *)browser placeholderImageForIndex:(NSInteger)index;

@optional

- (NSURL *)photoBrowser:(SPPhotoBrowser *)browser highQualityImageURLForIndex:(NSInteger)index;

@end


@interface SPPhotoBrowser : UIView<UIScrollViewDelegate>

@property (nonatomic, weak) UIView *sourceImagesContainerView;
@property (nonatomic, assign) NSInteger currentImageIndex;
@property (nonatomic, assign) NSInteger imageCount;

@property (nonatomic, weak) id<SPPhotoBrowserDelegate> delegate;

- (void)show;
@end
