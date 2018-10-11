//
//  YDViewModel.m
//  YiDing
//
//  Created by tjcet on 16/3/21.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import "YDViewModel.h"

@implementation YDViewModel

@synthesize request  = _request;

+ (instancetype)allocWithZone:(struct _NSZone *)zone {
    
    YDViewModel *viewModel = [super allocWithZone:zone];
    
    if (viewModel) {
        
        [viewModel yd_initialize];
    }
    return viewModel;
}

- (instancetype)initWithModel:(id)model {
    
    self = [super init];
    if (self) {
    }
    return self;
}

- (CMRequest *)request {
    
    if (!_request) {
        
        _request = [CMRequest request];
    }
    return _request;
}

- (void)yd_initialize {}


@end
