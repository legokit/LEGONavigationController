//
//  LEGONavigationView+StausBarClick.h
//  FilmCamera
//
//  Created by 杨庆人 on 2019/6/1.
//  Copyright © 2019年 The last stand. All rights reserved.
//

#import "LEGONavigationView.h"
typedef void(^stausbarClickCallback)(void);

NS_ASSUME_NONNULL_BEGIN

@interface LEGONavigationView (StausBarClick)
- (void)addStausBarClickCallback:(stausbarClickCallback)callback;
@end

NS_ASSUME_NONNULL_END
