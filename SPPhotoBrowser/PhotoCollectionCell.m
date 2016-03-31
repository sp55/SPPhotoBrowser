//
//  PhotoCollectionCell.m
//  SPPhotoBrowser
//
//  Created by admin on 16/3/31.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import "PhotoCollectionCell.h"
#import "UIImageView+WebCache.h"
@implementation PhotoCollectionCell

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        [self setupView];
    }
    return self;
}

- (void)setupView
{
    UIImageView *imageView = [UIImageView new];
    [self.contentView addSubview:imageView];
    self.imageView = imageView;
    
    self.backgroundColor = [UIColor orangeColor];
}

- (void)setItem:(PhotoModel *)item
{
    _item = item;
    
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:item.thumbnail_pic]];
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    
    self.imageView.frame = self.bounds;
}


@end
