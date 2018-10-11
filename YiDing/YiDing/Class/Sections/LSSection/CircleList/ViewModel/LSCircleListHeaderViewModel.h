//
//  LSCircleListHeaderViewModel.h
//  ZhongShui
//
//  Created by tjcet on 16/3/10.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import "YDViewModel.h"

@interface LSCircleListHeaderViewModel : YDViewModel

@property (nonatomic, copy) NSString *title;

@property (nonatomic, strong) NSArray *dataArray;

@property (nonatomic, strong) RACSubject *refreshUISubject;

@property (nonatomic, strong) RACSubject *cellClickSubject;

@end
