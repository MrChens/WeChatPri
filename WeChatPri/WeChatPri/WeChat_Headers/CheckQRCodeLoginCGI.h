//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRsaCertMgrExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"

@class MMTimer, NSData, NSMutableSet, NSString;
@protocol CheckQRCodeLoginDelegate, OS_dispatch_queue;

@interface CheckQRCodeLoginCGI : NSObject <MessageObserverDelegate, IRsaCertMgrExt>
{
    unsigned int m_checkTime;
    NSString *m_uuid;
    NSData *m_notifyKey;
    id <CheckQRCodeLoginDelegate> m_delegate;
    NSObject<OS_dispatch_queue> *m_workerThread;
    NSMutableSet *m_setQRCodeEventID;
    MMTimer *_m_timer;
}

@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer=_m_timer;
@property(retain, nonatomic) NSMutableSet *m_setQRCodeEventID; // @synthesize m_setQRCodeEventID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workerThread; // @synthesize m_workerThread;
@property(nonatomic) __weak id <CheckQRCodeLoginDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSData *m_notifyKey; // @synthesize m_notifyKey;
@property(retain, nonatomic) NSString *m_uuid; // @synthesize m_uuid;
@property(nonatomic) unsigned int m_checkTime; // @synthesize m_checkTime;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkCodeLoginCancel_OnMainThread;
- (void)checkCodeLoginExpired_OnMainThread;
- (void)checkCodeLoginConfirmed_OnMainThread:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)checkCodeLoginScaned_OnMainThread:(id)arg1 nickName:(id)arg2;
- (void)checkCodeLoginFail_OnMainThread;
- (void)checkCodeLoginUUIDExpired_OnMainThread;
- (void)handleResponse:(id)arg1 withRequest:(id)arg2 eventID:(unsigned int)arg3;
- (void)sendCheckQRCodeRequest;
- (void)handleNotifyStatus:(unsigned int)arg1 userName:(id)arg2 nickName:(id)arg3 pwd:(id)arg4 headImageURL:(id)arg5;
- (void)handleNotifyData:(id)arg1;
- (void)stopRequest;
- (void)removeRequestEventID:(unsigned int)arg1;
- (_Bool)isLatestRequestEventID:(unsigned int)arg1;
- (void)addRequestEventID:(unsigned int)arg1;
- (void)stopCheckTimer;
- (void)resetCheckTimer;
- (_Bool)isDataValid;
- (void)clearData;
- (void)internalStopCheckQRCode;
- (void)StopCheckQRCode;
- (void)StartCheckQRCodeWithTime:(unsigned int)arg1 uuid:(id)arg2 notifyKey:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

