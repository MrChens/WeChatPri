//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

#import "JSEventExt-Protocol.h"

@class NSString;

@interface WCAddressControlMgr : WCBaseControlMgr <JSEventExt>
{
}

- (unsigned int)startGetAddressLogic:(id)arg1 logicDelegate:(id)arg2;
- (void)jsGetLatestAddresss:(id)arg1;
- (void)jsEditAddress:(id)arg1;
- (unsigned int)startGetLatestAddressControlLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startAddressEntranceControlLogic:(id)arg1;
- (unsigned int)startEditAddressControlLogic:(id)arg1 jsEvent:(id)arg2 AuthenticationStruct:(id)arg3;
- (unsigned int)startAddressControlLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startEditAddressControlLogic:(id)arg1;
- (unsigned int)startGetAddressControlLogic:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

