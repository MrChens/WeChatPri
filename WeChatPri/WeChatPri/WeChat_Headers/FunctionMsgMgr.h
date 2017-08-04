//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CMMDB, NSRecursiveLock, NSString;

@interface FunctionMsgMgr : MMService <IMsgExt, PBMessageObserverDelegate, MMService>
{
    NSRecursiveLock *m_oLock;
    _Bool m_bGettingMsg;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oDBLock;
}

- (void).cxx_destruct;
- (void)saveAddMsg:(id)arg1;
- (id)loadAddMsg;
- (void)removeAddMsg:(id)arg1;
- (id)getAddMsg:(id)arg1;
- (void)insertAddMsg:(id)arg1 funcMsgId:(id)arg2;
- (void)showMessageWrap:(id)arg1;
- (void)showAddMsg:(id)arg1 version:(unsigned long long)arg2 time:(unsigned int)arg3;
- (id)getFunctionMsg:(id)arg1;
- (void)updateFunctionMsg:(id)arg1 opType:(unsigned int)arg2;
- (void)removeFunctionMsg:(id)arg1;
- (void)insertFunctionMsg:(id)arg1;
- (void)saveFunctionMsg:(id)arg1;
- (id)loadFunctionMsg;
- (void)revokeMsg:(id)arg1;
- (void)handleGetFuncMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetMsgFail:(id)arg1 buf:(id)arg2;
- (void)requestCgi:(id)arg1;
- (void)saveFunctionNewXml:(id)arg1;
- (id)loadFunctionNewXml;
- (id)getPBPath;
- (void)updateFunctionNewXml:(id)arg1 retryCount:(unsigned int)arg2 nextRetry:(unsigned int)arg3 customBuf:(id)arg4;
- (void)updateFunctionNewXml:(id)arg1 opType:(unsigned int)arg2 version:(unsigned long long)arg3;
- (id)removeFunctionNewXml:(id)arg1 version:(unsigned long long)arg2;
- (id)removeFunctionNewXml:(id)arg1;
- (id)getFunctionNewXml:(id)arg1;
- (void)insertFunctionNewXml:(id)arg1;
- (void)tryNextTask;
- (void)handleFunctionNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (void)test;
- (void)InitDB:(id)arg1 Lock:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

