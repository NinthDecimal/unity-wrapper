//
//  KPTableView.h
//  Kiip
//
//  Created by Daniel on 1/22/18.
//  Copyright © 2018 Kiip, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KPTableViewCell.h"

@protocol KPTableViewDelegate;

@interface KPTableView : NSObject

@property (nonatomic, weak) id<KPTableViewDelegate> delegate;
+ (instancetype)placerWithTableView:(UITableView *)tableView viewController:(UIViewController *)controller;

- (void)loadAdsForAdUnitID:(NSString *)adUnitID;
- (void)loadAdsForAdUnitID:(NSString *)adUnitID withCustomAdPosition:(NSUInteger)adPosition;

@end



@interface UITableView (KPTableView)

- (void)kp_setAdPlacer:(KPTableView *)placer;
- (KPTableView *)kp_adPlacer;

- (void)kp_setDataSource:(id<UITableViewDataSource>)dataSource;
- (id<UITableViewDataSource>)kp_dataSource;

- (void)kp_setDelegate:(id<UITableViewDelegate>)delegate;
- (id<UITableViewDelegate>)kp_delegate;

/** @name Notifying the Table View Ad Placer of Content Changes */

- (void)kp_beginUpdates;


- (void)kp_endUpdates;


- (void)kp_reloadData;


- (void)kp_insertRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation;


- (void)kp_deleteRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation;


- (void)kp_reloadRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation;


- (void)kp_moveRowAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)newIndexPath;


- (void)kp_insertSections:(NSIndexSet *)sections withRowAnimation:(UITableViewRowAnimation)animation;


- (void)kp_deleteSections:(NSIndexSet *)sections withRowAnimation:(UITableViewRowAnimation)animation;


- (void)kp_reloadSections:(NSIndexSet *)sections withRowAnimation:(UITableViewRowAnimation)animation;


- (void)kp_moveSection:(NSInteger)section toSection:(NSInteger)newSection;


- (UITableViewCell *)kp_cellForRowAtIndexPath:(NSIndexPath *)indexPath;


- (id)kp_dequeueReusableCellWithIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;


- (void)kp_deselectRowAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)animated;


- (NSIndexPath *)kp_indexPathForCell:(UITableViewCell *)cell;

- (NSIndexPath *)kp_indexPathForRowAtPoint:(CGPoint)point;


- (NSIndexPath *)kp_indexPathForSelectedRow;


- (NSArray *)kp_indexPathsForRowsInRect:(CGRect)rect;


- (NSArray *)kp_indexPathsForSelectedRows;

- (NSArray *)kp_indexPathsForVisibleRows;


- (CGRect)kp_rectForRowAtIndexPath:(NSIndexPath *)indexPath;


- (void)kp_scrollToRowAtIndexPath:(NSIndexPath *)indexPath atScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;


- (void)kp_selectRowAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)animated scrollPosition:(UITableViewScrollPosition)scrollPosition;


- (NSArray *)kp_visibleCells;

@end



@protocol KPTableViewDelegate <NSObject>
@optional
-(void)nativeAdWillPresentModalForTableViewAdPlacer:(KPTableView *)placer;
-(void)nativeAdDidDismissModalForTableViewAdPlacer:(KPTableView *)placer;
-(void)nativeAdWillLeaveApplicationFromTableViewAdPlacer:(KPTableView *)placer;
@end




