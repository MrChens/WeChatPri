//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCPayPaidOrderDetailViewControllerDelegate-Protocol.h"

@class NSString;

@interface WebviewJSEventHandler_getH5TransactionRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WCPayPaidOrderDetailViewControllerDelegate>
{
}

- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)showOrderDetail:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendResult:(_Bool)arg1 jsEvent:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

