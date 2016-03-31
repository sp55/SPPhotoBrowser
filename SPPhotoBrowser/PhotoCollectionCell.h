//
//  PhotoCollectionCell.h
//  SPPhotoBrowser
//
//  Created by admin on 16/3/31.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PhotoModel.h"

@interface PhotoCollectionCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) PhotoModel *item;

@end
