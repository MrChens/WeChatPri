//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayNewFetchViewControllerDelegate <NSObject>

@optional
- (void)WCPayFetchViewControllerAddCard;
- (void)WCPayFetchViewControllerNext:(WCPayControlData *)arg1 FetchAll:(_Bool)arg2;
- (void)WCPayFetchViewControllerCancel:(_Bool)arg1;
@end
