//
//  KPTableViewCell.h
//  Kiip
//
//  Created by Daniel on 1/20/18.
//  Copyright © 2018 Kiip, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KPNativeRewardView.h"

@protocol KPTableViewCellDelegate
@end

@interface KPTableViewCell : UITableViewCell
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

@end
