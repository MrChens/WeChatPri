//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCADQuestionExp, WCDataItem;

@protocol WCAdvertiseActionFloatForABTestDelegate <NSObject>

@optional
- (void)onDontLikeWithChoose:(WCDataItem *)arg1;
- (void)onDontLikeWithOtherReason:(WCDataItem *)arg1 QuestionExp:(WCADQuestionExp *)arg2;
- (void)onClickTipBtn:(WCDataItem *)arg1;
- (void)onHideAdvertise:(WCDataItem *)arg1;
@end

