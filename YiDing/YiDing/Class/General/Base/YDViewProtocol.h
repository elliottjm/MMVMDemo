//
//  YDViewProtocol.h
//  YiDing
//
//  Created by tjcet on 16/3/21.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YDViewModelProtocol;

@protocol YDViewProtocol <NSObject>

@optional

- (instancetype)initWithViewModel:(id <YDViewModelProtocol>)viewModel;

- (void)yd_bindViewModel;
- (void)yd_setupViews;
- (void)yd_addReturnKeyBoard;

@end

