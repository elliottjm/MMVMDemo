//
//  YDTableVIewCellProtocol.h
//  YiDing
//
//  Created by tjcet on 16/3/21.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YDTableVIewCellProtocol <NSObject>
@optional

- (void)yd_setupViews;
- (void)yd_bindViewModel;

@end
