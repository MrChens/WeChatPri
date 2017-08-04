//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WXCTalkPresentMgr : MMService <MMService>
{
    NSMutableDictionary *_groupIdToTalkRoomDataDic;
    NSMutableDictionary *_serverToClientGroupId;
    NSMutableDictionary *_clientToServerGroupId;
}

+ (id)genClientGroupId;
+ (_Bool)isClientGroupId:(id)arg1;
+ (id)getInviteUserNameFromMemberList:(id)arg1;
+ (id)genFakeVoiceGroupMemWithUuid:(id)arg1 inviteUuid:(id)arg2 memberSession:(int)arg3;
@property(retain, nonatomic) NSMutableDictionary *clientToServerGroupId; // @synthesize clientToServerGroupId=_clientToServerGroupId;
@property(retain, nonatomic) NSMutableDictionary *serverToClientGroupId; // @synthesize serverToClientGroupId=_serverToClientGroupId;
@property(retain, nonatomic) NSMutableDictionary *groupIdToTalkRoomDataDic; // @synthesize groupIdToTalkRoomDataDic=_groupIdToTalkRoomDataDic;
- (void).cxx_destruct;
- (void)notifyModifyGroupInfoResult:(_Bool)arg1 groupId:(id)arg2;
- (void)modifyGroupName:(id)arg1 groupName:(id)arg2;
- (void)onAccountChange;
- (void)updateGroupMapWithRoomDataDic:(id)arg1 clientToServerMap:(id)arg2 serverToClientMap:(id)arg3 FromRommData:(id)arg4;
- (void)updateGroupMapWithRoomData:(id)arg1;
- (id)getServerGroupIdFromGroupId:(id)arg1;
- (id)getClientGroupIdFromGroupId:(id)arg1;
- (_Bool)isGroupId1:(id)arg1 equalToGroupId2:(id)arg2;
- (id)getLocalGroupIdFromGroupId:(id)arg1;
- (int)getMemberSessionByGroupId:(id)arg1;
- (void)clearTalkRoomDataList;
- (void)clearSessionInfo:(id)arg1;
- (void)onBannerMsgNotified:(id)arg1 WxGroupId:(id)arg2;
- (void)onMemberChange:(id)arg1 memberChangeType:(int)arg2 needUpdateProfile:(_Bool)arg3 serverTime:(double)arg4;
- (void)notifyRoomCreate:(id)arg1;
- (void)notifyRoomInfoChange;
- (void)notifySingleRoomInfoChange:(id)arg1;
- (void)updateTalkRoomGroupInfo:(id)arg1 serverGroupId:(id)arg2;
- (void)notifyHasIncomingMutilTalk:(id)arg1;
- (void)checkAndAddTalkRoomData:(id)arg1 needUpdateProfile:(_Bool)arg2;
- (void)addOrReplaceTalkRoomData:(id)arg1 needUpdateProfile:(_Bool)arg2;
- (void)addOrReplaceTalkRoomData:(id)arg1 needUpdateProfile:(_Bool)arg2 updateIfExist:(_Bool)arg3;
- (id)getTalkRoomDataByGroupIdInRoomData:(id)arg1;
- (id)getTalkRoomDataByGroupId:(id)arg1;
- (id)getTalkRoomDataList;
- (void)saveTalkRoomDataCache;
- (void)loadTalkRoomDataCache;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

