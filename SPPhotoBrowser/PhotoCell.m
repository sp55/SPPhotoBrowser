//
//  PhotoCell.m
//  SPPhotoBrowser
//
//  Created by admin on 16/3/31.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import "PhotoCell.h"

@implementation PhotoCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self setupView];
    }
    return self;
}
//赋值
- (void)setupView
{
    PhotoGroupView *photosGroup = [[PhotoGroupView alloc]init];
    [self.contentView addSubview:photosGroup];
    self.photosGroup = photosGroup;
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    
    self.photosGroup.center = CGPointMake(self.frame.size.width * 0.5, self.frame.size.height * 0.5);
}



@end
