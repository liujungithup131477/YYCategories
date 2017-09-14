//
//  UIScreen+YYAdd.h
//  YYCategories <https://github.com/ibireme/YYCategories>
//
//  Created by ibireme on 13/4/5.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provides extensions for `UIScreen`.
 */
@interface UIScreen (YYAdd)

/**
 Main screen's scale
 主屏幕的 scale，可以获取异步线程的 scale
 
 @return screen's scale
 */
+ (CGFloat)screenScale;

/**
 Returns the bounds of the screen for the current device orientation.
 返回当前设备方向的 bounds。
 
 @return A rect indicating the bounds of the screen.
 @see    boundsForOrientation:
         Returns the bounds of the screen for a given device orientation. `UIScreen`'s `bounds` method always returns the bounds of the screen of it in the portrait orientation.
        返回给定设备方向的屏幕范围。 `UIScreen`的`bounds`方法总是以纵向方向返回屏幕的界限。
 */
- (CGRect)currentBounds NS_EXTENSION_UNAVAILABLE_IOS("");

/**
 Returns the bounds of the screen for a given device orientation.
 `UIScreen`'s `bounds` method always returns the bounds of the
 screen of it in the portrait orientation.
 返回给定设备方向的屏幕范围。 `UIScreen`的`bounds`方法总是以纵向方向返回屏幕的界限。
 
 @param orientation  The orientation to get the screen's bounds.获得屏幕 bounds 的方向。
 @return A rect indicating the bounds of the screen.orientation方向下的screen's bounds。
 @see  currentBounds
 */
- (CGRect)boundsForOrientation:(UIInterfaceOrientation)orientation;

/**
 The screen's real size in pixel (width is always smaller than height).
 This value may not be very accurate in an unknown device, or simulator.
 e.g. (768,1024)
 获取当前屏幕的分辨率。
 */
@property (nonatomic, readonly) CGSize sizeInPixel;

/**
 The screen's PPI.
 屏幕的PPI。
 This value may not be very accurate in an unknown device, or simulator.
 Default value is 96.
 该值在未知设备或模拟器中可能不是非常准确。
   默认值为96。
 */
@property (nonatomic, readonly) CGFloat pixelsPerInch;

@end

NS_ASSUME_NONNULL_END
