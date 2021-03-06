//
//  FNTarget_MerchandiseDetail.h
//  ZZRouter
//
//  Created by Minyoung  on 2017/4/13.
//  Copyright © 2017年ZZRouter All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ZZRouterTarget_MerchandiseDetailModule : NSObject

/**
 商祥vc
 @param parameter
 @{
    @"smSeq":<#商品id required#>
    @"serviceId":<#加工服务id optional#>
 }
 @return vc
 */
- (UIViewController *)action_ZZRouterProductDetailViewController_InitializeWithParameter:(NSDictionary *)parameter;

@end
