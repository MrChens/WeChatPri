//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, WCPayControlData;

@protocol WCPayFillCardNumberViewControllerDelegate <NSObject>
- (void)FillCardNumberConfirmWithImage:(UIImage *)arg1 cardNumber:(NSString *)arg2 data:(WCPayControlData *)arg3;
- (void)FillCardNumberNext:(WCPayControlData *)arg1;
- (void)FillCardNumberCancel:(_Bool)arg1;

@optional
- (void)FillCardNumberShowedAllFavorInfo;
- (void)FillCardNumberBackToRefreshCardList;
@end

