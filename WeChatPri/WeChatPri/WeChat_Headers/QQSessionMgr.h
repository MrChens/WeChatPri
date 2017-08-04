//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IAudioSenderExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INewArrivalExt-Protocol.h"
#import "IQQContactMgrExt-Protocol.h"
#import "ISessionStorageDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "QQOfflineServerTipsCgiDelegate-Protocol.h"
#import "SessionDelegate-Protocol.h"

@class MMBaseSessionStorage, NSMutableDictionary, NSString, QQOfflineServerTips, QQOfflineServerTipsCgi;

@interface QQSessionMgr : MMService <ISessionStorageDelegate, IMsgExt, MMService, SessionDelegate, IQQContactMgrExt, IAudioSenderExt, INewArrivalExt, IMMNewSessionMgrExt, QQOfflineServerTipsCgiDelegate>
{
    QQOfflineServerTips *m_serverTipsCache;
    QQOfflineServerTipsCgi *m_serverTipsCgi;
    MMBaseSessionStorage *m_sessionStorage;
    NSMutableDictionary *m_dictUsrname2CellData;
}

@property(retain, nonatomic) QQOfflineServerTipsCgi *m_serverTipsCgi; // @synthesize m_serverTipsCgi;
@property(retain, nonatomic) QQOfflineServerTips *m_serverTipsCache; // @synthesize m_serverTipsCache;
- (void).cxx_destruct;
- (void)deleteOldVersionSessionCache;
- (id)importSessions;
- (int)updateSessionInfo:(id)arg1;
- (void)updateCellData:(id)arg1;
- (void)updateDraft:(id)arg1 draft:(id)arg2;
- (id)sessionCellDataWithUsrName:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (void)deleteAllSessions;
- (void)deleteSessionAtIndex:(unsigned int)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (void)onGetQQofflineServerTipsMsg:(id)arg1 Scheme:(id)arg2 DownloadUrl:(id)arg3;
- (void)launchOrDownloadQQ;
- (void)clearServerTips;
- (id)getServerTipsDonwloadUrl;
- (id)getServerTipsScheme;
- (id)getServerTipsMsg;
- (void)startRequestNewServerTips;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)unRegisterExt;
- (void)registerExt;
- (void)isUser:(id)arg1 hasSpecalSessionInfo:(id *)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)isMessage:(id)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(id)arg1 Handled:(_Bool *)arg2;
- (void)onSyncQQContactEnd;
- (void)onDeleteQQContact:(id)arg1;
- (void)onModifyQQContact:(id)arg1;
- (void)onNewQQContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnMsgSent:(id)arg1;
- (void)OnAddMsg:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onQQNewArrivalCountChange:(unsigned int)arg1;
- (_Bool)zeroNewArrivalCount;
- (unsigned int)getNewArrivalCount;
- (id)getNewArrivalList;
- (id)GetLastMessage;
- (unsigned int)GetTotalUnreadCount;
- (void)fireListener:(int)arg1 withSessionInfo:(id)arg2;
- (id)genMainFrameSessionInfo;
- (void)syncAllContact;
- (void)syncSessionContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

