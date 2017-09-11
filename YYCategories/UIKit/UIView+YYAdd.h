//
//  UIView+YYAdd.h
//  YYCategories <https://github.com/ibireme/YYCategories>
//
//  Created by ibireme on 13/4/3.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provides extensions for `UIView`.
 */
@interface UIView (YYAdd)

/**
 Create a snapshot image of the complete view hierarchy.
 获取屏幕快照，完整屏幕的快照。
 */
- (nullable UIImage *)snapshotImage;

/**
 Create a snapshot image of the complete view hierarchy.
 @discussion It's faster than "snapshotImage", but may cause screen updates.
 See -[UIView drawViewHierarchyInRect:afterScreenUpdates:] for more information.
 
 获取屏幕快照，完整屏幕的快照。
 @discussion 它比“snapshotImage”快，但可能会导致屏幕更新。
 See -[UIView drawViewHierarchyInRect:afterScreenUpdates:] for more information.
 */
- (nullable UIImage *)snapshotImageAfterScreenUpdates:(BOOL)afterUpdates;

/**
 创建完整视图层次结构的快照PDF。
 Create a snapshot PDF of the complete view hierarchy.
 */
- (nullable NSData *)snapshotPDF;

/**
 Shortcut to set the view.layer's shadow
 快捷方式设置view.layer的阴影
 
 @param color  Shadow Color
 @param offset Shadow offset
 @param radius Shadow radius
 */
- (void)setLayerShadow:(nullable UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;

/**
 Remove all subviews.
 
 @warning Never call this method inside your view's drawRect: method.
 @warning 不要在视图的drawRect：方法中调用此方法。
 */
- (void)removeAllSubviews;

/**
 Returns the view's view controller (may be nil).
 */
@property (nullable, nonatomic, readonly) UIViewController *viewController;

/**
 返回屏幕上的可见alpha，考虑到超级视图和窗口。
 Returns the visible alpha on screen, taking into account superview and window.
 */
@property (nonatomic, readonly) CGFloat visibleAlpha;

/**
 Converts a point from the receiver's coordinate system to that of the specified view or window.将点从消息接收者的坐标系转换为指定的视图或窗口。
 
 @param point A point specified in the local coordinate system (bounds) of the receiver.在消息接收者的局部坐标系（边界）中指定的点。
 @param view  The view or window into whose coordinate system point is to be converted.If view is nil, this method instead converts to window base coordinates.将point点从消息接收者转换到想转换的视图上，对应的视图。如果视图为零，则该方法转换为窗口基坐标。
 @return The point converted to the coordinate system of view.返回转换后的坐标点。
 */
- (CGPoint)convertPoint:(CGPoint)point toViewOrWindow:(nullable UIView *)view;

/**
 Converts a point from the coordinate system of a given view or window to that of the receiver.将点从给定视图或窗口的坐标系转换为消息接收者的坐标。
 
 @param point A point specified in the local coordinate system (bounds) of view.在局部坐标系（view）中指定的点。
 @param view  The view or window with point in its coordinate system. 
 If view is nil, this method instead converts from window base coordinates.视图或窗口与其坐标系中的点，point 点所在视图。如果视图为nil，则该方法将转换为窗口基坐标。
 @return The point converted to the local coordinate system (bounds) of the receiver.转换为消息接收者坐标系的点。
 */
- (CGPoint)convertPoint:(CGPoint)point fromViewOrWindow:(nullable UIView *)view;

/**
 Converts a rectangle from the receiver's coordinate system to that of another view or window.
 将矩形从接收器的坐标系转换为另一个视图或窗口的坐标系。
 
 @param rect A rectangle specified in the local coordinate system (bounds) of the receiver.在消息的接收者的坐标系（边界）中指定的矩形。
 @param view The view or window that is the target of the conversion operation. If view is nil, this method instead converts to window base coordinates.作为转换操作目标的视图或窗口。 如果视图为零，则该方法转换为窗口基坐标。
 @return The converted rectangle.转换到 view 上的矩形。
 */
- (CGRect)convertRect:(CGRect)rect toViewOrWindow:(nullable UIView *)view;

/**
 Converts a rectangle from the coordinate system of another view or window to that of the receiver.
 将矩形从view 视图或窗口的坐标系转换为接收器的坐标系。
 
 @param rect A rectangle specified in the local coordinate system (bounds) of view. 在视图的局部坐标系（bounds）中指定的矩形。
 @param view The view or window with rect in its coordinate system.
    If view is nil, this method instead converts from window base coordinates.
    在其坐标系中具有rect的视图或窗口。如果视图为nil，则该方法将转换为窗口基坐标。
 @return The converted rectangle.转换到消息接收者的矩形。
 */
- (CGRect)convertRect:(CGRect)rect fromViewOrWindow:(nullable UIView *)view;


@property (nonatomic) CGFloat left;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat top;         ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat right;       ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat bottom;      ///< Shortcut for frame.origin.y + frame.size.height
@property (nonatomic) CGFloat width;       ///< Shortcut for frame.size.width.
@property (nonatomic) CGFloat height;      ///< Shortcut for frame.size.height.
@property (nonatomic) CGFloat centerX;     ///< Shortcut for center.x
@property (nonatomic) CGFloat centerY;     ///< Shortcut for center.y
@property (nonatomic) CGPoint origin;      ///< Shortcut for frame.origin.
@property (nonatomic) CGSize  size;        ///< Shortcut for frame.size.

@end

NS_ASSUME_NONNULL_END
