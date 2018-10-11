//
//  LSCircleListCollectionCell.h
//  ZhongShui
//
//  Created by tjcet on 16/3/10.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import "YDCollectionViewCell.h"
#import "LSCircleListCollectionCellViewModel.h"

@interface LSCircleListCollectionCell : YDCollectionViewCell

@property (nonatomic, strong) LSCircleListCollectionCellViewModel *viewModel;

/**
 *  加入新圈子
 */
@property (nonatomic, strong) NSString *type;

@end
