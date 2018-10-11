//
//  YDCollectionViewCell.m
//  YiDing
//
//  Created by tjcet on 16/3/21.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import "YDCollectionViewCell.h"

@implementation YDCollectionViewCell

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        
        [self yd_setupViews];
    }
    return self;
}

- (void)yd_setupViews {}

@end
