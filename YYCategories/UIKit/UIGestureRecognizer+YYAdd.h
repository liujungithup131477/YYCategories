//
//  UIGestureRecognizer+YYAdd.h
//  YYCategories <https://github.com/ibireme/YYCategories>
//
//  Created by ibireme on 13/10/13.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provides extensions for `UIGestureRecognizer`.
 */
@interface UIGestureRecognizer (YYAdd)

/**
 Initializes an allocated gesture-recognizer object with a action block.
 初始化一个带有手势事件的手势对象。做三件事，1，初始化手势对象；2，给手势添加事件；3，将手势保存。
 
 @param block  An action block that to handle the gesture recognized by the 
               receiver. nil is invalid. It is retained by the gesture.手势事件对象。nil是无效的。会被保留。
 
 @return An initialized instance of a concrete UIGestureRecognizer subclass or 
 nil if an error occurred in the attempt to initialize the object.一个具体的UIGestureRecognizer子类的初始化实例如果尝试初始化对象时发生错误，则为零。
 */
- (instancetype)initWithActionBlock:(void (^)(id sender))block;

/**
 Adds an action block to a gesture-recognizer object. It is retained by the 
 gesture.
 将动作块添加到手势识别对象。 该手势会被保存。做两件事，1，给手势添加事件；2，将手势保存。
 
 @param block A block invoked by the action message. nil is not a valid value.
 */
- (void)addActionBlock:(void (^)(id sender))block;

/**
 Remove all action blocks.
 删除所有的手势及相应的手势事件。
 */
- (void)removeAllActionBlocks;

@end

NS_ASSUME_NONNULL_END
