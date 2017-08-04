//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "NotifyFromMainCtrlDelegate-Protocol.h"

@class CBottleExtendCode, CBottleSetting, CMMDB, NSMutableArray, NSMutableData, NSMutableDictionary, NSRecursiveLock, NSString;

@interface BottleMgr : MMService <MMService, NotifyFromMainCtrlDelegate, MessageObserverDelegate>
{
    CBottleExtendCode *m_oCode;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    unsigned int m_uiThrowCount;
    unsigned int m_uiFishCount;
    NSMutableData *m_dtThumbBuffer;
    NSMutableData *m_dtContentBuffer;
    NSMutableDictionary *m_dicThrow;
    NSMutableDictionary *m_dicOpen;
    NSMutableArray *m_arrWording;
    CBottleSetting *m_oSetting;
    _Bool m_bBan;
}

@property(retain, nonatomic) NSMutableArray *m_arrWording; // @synthesize m_arrWording;
@property(retain, nonatomic) CBottleSetting *m_oSetting; // @synthesize m_oSetting;
- (void).cxx_destruct;
- (void)onServiceReloadData;
- (void)dealloc;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)SafeCallThrowAndFishNumChanged;
- (void)handleOpenBottleOK:(id)arg1;
- (void)handleFishBottleOK:(id)arg1;
- (void)handleThrowBottleOK:(id)arg1;
- (unsigned int)GetFishCount;
- (unsigned int)GetThrowCount;
- (void)GetThrowAndFishCount;
- (void)FishBottle;
- (void)FishThenOpenBottle:(unsigned int)arg1;
- (void)createOpenBottleEvent:(unsigned int)arg1;
- (void)OpenBottle:(unsigned int)arg1;
- (void)setVoiceMsgReadByLocalID:(unsigned int)arg1 andMsgWrap:(id)arg2;
- (id)getThrowBottleWording;
- (void)throwBack:(id)arg1;
- (unsigned int)throwBottle:(id)arg1 MsgWrap:(id)arg2;
- (void)createThrowBottleEvent:(unsigned int)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DeleteBottleByLocalID:(unsigned int)arg1 backed:(_Bool)arg2;
- (_Bool)DeleteBottle:(id)arg1 backed:(_Bool)arg2;
- (void)DeleteBottle:(id)arg1;
- (void)setBottle:(id)arg1 fromDBBottle:(id)arg2;
- (void)fillBottleQueryProperty:(vector_24c76cbd *)arg1;
- (void)callOnUpdateBottle:(id)arg1;
- (void)updateBottle:(id)arg1;
- (unsigned int)AddBottleToDB:(id)arg1;
- (void)checkBottle:(id)arg1;
- (id)GetAllBottles;
- (id)GetBottleByLocalID:(unsigned int)arg1;
- (unsigned int)GetSvrIDByLocalID:(unsigned int)arg1;
- (id)getSvrUsrNameByLocalUsrName:(id)arg1;
- (id)getLocalUsrNameBySvrUsrName:(id)arg1;
- (void)setBottleUsrInfo:(id)arg1;
- (void)spliteSvrUsrName:(id)arg1 encryptUsrName:(id *)arg2 bottleID:(id *)arg3;
- (id)getSvrUsrNameByLocalID:(unsigned int)arg1;
- (unsigned int)getMsgTypeByBottleDataType:(unsigned int)arg1;
- (unsigned int)getMsgTypeByDataType:(unsigned int)arg1;
- (_Bool)isBeBanned;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (void)onServiceInit;
- (id)init;
- (id)GetBottleIDFromContactName:(id)arg1;
- (void)SaveSetting;
- (id)GetSetting;
- (void)LoadSetting;
- (void)GenTestData;
- (void)testThrow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

