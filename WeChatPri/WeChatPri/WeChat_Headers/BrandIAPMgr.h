//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IAPExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface BrandIAPMgr : MMService <PBMessageObserverDelegate, IAPExt, MMService>
{
    _Bool _isPaying;
}

- (void)dealloc;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (int)brandIAPGetResult:(id)arg1;
- (int)brandIAPPay:(id)arg1 ExtInfo:(id)arg2;
- (int)brandIAPRequestProduct:(id)arg1;
- (int)brandIAPPreay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

