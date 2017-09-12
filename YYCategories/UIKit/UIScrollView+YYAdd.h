//
//  UIScrollView+YYAdd.h
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
 Provides extensions for `UIScrollView`.
 提供 UIScrollView 的 滑动到顶部，底部，左边，右边的功能，根据属性 contentOffset，contentSize，contentInset，bounds属性来处理。
 */
@interface UIScrollView (YYAdd)

/**
 Scroll content to top with animation.
 以动画的方式滚动到顶部。
 */
- (void)scrollToTop;

/**
 Scroll content to bottom with animation.
 以动画的方式滚动到底部。
 */
- (void)scrollToBottom;

/**
 Scroll content to left with animation.
 以动画的方式滚动到最左侧。
 */
- (void)scrollToLeft;

/**
 Scroll content to right with animation.
 以动画的方式滚动到最右侧。
 */
- (void)scrollToRight;

/**
 Scroll content to top.
 滚动到顶部，可以设置是否要动画。
 
 @param animated  Use animation. 是否需要动画。
 */
- (void)scrollToTopAnimated:(BOOL)animated;

/**
 Scroll content to bottom.
 滚动到底部，可以设置是否需要动画。
 
 @param animated  Use animation.是否需要动画。
 */
- (void)scrollToBottomAnimated:(BOOL)animated;

/**
 Scroll content to left.
 滚动到最左侧，可以设置是否需要动画。
 
 @param animated  Use animation.是否需要动画。
 */
- (void)scrollToLeftAnimated:(BOOL)animated;

/**
 Scroll content to right.
 滚动到最右侧，可以设置是否需要动画。
 
 @param animated  Use animation.是否需要动画。
 */
- (void)scrollToRightAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
