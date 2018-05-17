//
//  KPNativeRewardView.h
//  Kiip
//
//  Created by Daniel on 1/19/18.
//  Copyright © 2018 Kiip, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, viewType) {
    MEDIUM_RECTANGLE = 0,
    FLUID_RECTANGLE = 1
};


@protocol KPNativeViewDelegate
@required

- (void)removeView;

@end;

@interface KPNativeRewardView  : UIView
- (instancetype) initWithCGpoint:(CGPoint)point;
- (instancetype) initWithCGpoint:(CGPoint)point setViewType:(viewType)type;

@property (nonatomic, weak) id <KPNativeViewDelegate> delegate;


@end
