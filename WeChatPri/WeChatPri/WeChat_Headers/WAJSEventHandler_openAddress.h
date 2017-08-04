//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWCAddressControlLogic-Protocol.h"
#import "IWebviewAskAuthorizationLogicExt-Protocol.h"

@class NSString;

@interface WAJSEventHandler_openAddress : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IWCAddressControlLogic>
{
}

- (void)startEditAddress;
- (void)onAddressEditEnd:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

