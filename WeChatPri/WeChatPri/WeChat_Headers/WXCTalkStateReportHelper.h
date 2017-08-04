//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableString, NSString;

@interface WXCTalkStateReportHelper : NSObject
{
    unsigned int _uiStopStatus;
    unsigned int _uiRoomType;
    unsigned int _uiRoomId;
    unsigned int _uiMemberIdx;
    unsigned int _uiIsUserAbort;
    unsigned int _uiIsConnecting;
    unsigned int _uiIsConnected;
    int _uiDeviceFail;
    unsigned int _uiIsTalked;
    unsigned int _uiIsSingleToMulti;
    unsigned int _uiSingleRoomId;
    unsigned int _uiUsePreConnect;
    int _uiPreConnectSuccess;
    unsigned int _uiMemberListSize;
    int _iPlayVolume;
    int _iAudioRecordReadNum;
    NSString *_sGroupId;
    NSString *_sClientGroupId;
    unsigned long long _ullRoomKey;
    unsigned long long _iDialUsedTime;
    unsigned long long _iConnectUsedTime;
    unsigned long long _iCallTime;
    unsigned long long _ullSingleRoomKey;
    unsigned long long _iCancelInviteTime;
    unsigned long long _iAnswerTime;
    unsigned long long _uiAudioTime;
    unsigned long long _uiVideoTime;
    NSMutableString *_mLogInfo;
    unsigned long long _helpDialStartTime;
    unsigned long long _helpDialRealStartTime;
    unsigned long long _helpConnectedTime;
    unsigned long long _helpReceiveFirstAudioPkgTime;
    unsigned long long _helpCancelDialTime;
    unsigned long long _helpAnswerTime;
    unsigned long long _helpRejectTime;
    NSDictionary *_multiTalkActionDict;
    NSDictionary *_multiTalkNetDict;
}

+ (id)GenTalkDialLog:(id)arg1;
+ (void)doReport:(id)arg1;
+ (id)defaultInstance;
@property(retain, nonatomic) NSDictionary *multiTalkNetDict; // @synthesize multiTalkNetDict=_multiTalkNetDict;
@property(retain, nonatomic) NSDictionary *multiTalkActionDict; // @synthesize multiTalkActionDict=_multiTalkActionDict;
@property(nonatomic) unsigned long long helpRejectTime; // @synthesize helpRejectTime=_helpRejectTime;
@property(nonatomic) unsigned long long helpAnswerTime; // @synthesize helpAnswerTime=_helpAnswerTime;
@property(nonatomic) unsigned long long helpCancelDialTime; // @synthesize helpCancelDialTime=_helpCancelDialTime;
@property(nonatomic) unsigned long long helpReceiveFirstAudioPkgTime; // @synthesize helpReceiveFirstAudioPkgTime=_helpReceiveFirstAudioPkgTime;
@property(nonatomic) unsigned long long helpConnectedTime; // @synthesize helpConnectedTime=_helpConnectedTime;
@property(nonatomic) unsigned long long helpDialRealStartTime; // @synthesize helpDialRealStartTime=_helpDialRealStartTime;
@property(nonatomic) unsigned long long helpDialStartTime; // @synthesize helpDialStartTime=_helpDialStartTime;
@property(nonatomic) int iAudioRecordReadNum; // @synthesize iAudioRecordReadNum=_iAudioRecordReadNum;
@property(nonatomic) int iPlayVolume; // @synthesize iPlayVolume=_iPlayVolume;
@property(retain, nonatomic) NSMutableString *mLogInfo; // @synthesize mLogInfo=_mLogInfo;
@property(nonatomic) unsigned int uiMemberListSize; // @synthesize uiMemberListSize=_uiMemberListSize;
@property(nonatomic) int uiPreConnectSuccess; // @synthesize uiPreConnectSuccess=_uiPreConnectSuccess;
@property(nonatomic) unsigned int uiUsePreConnect; // @synthesize uiUsePreConnect=_uiUsePreConnect;
@property(nonatomic) unsigned long long uiVideoTime; // @synthesize uiVideoTime=_uiVideoTime;
@property(nonatomic) unsigned long long uiAudioTime; // @synthesize uiAudioTime=_uiAudioTime;
@property(nonatomic) unsigned long long iAnswerTime; // @synthesize iAnswerTime=_iAnswerTime;
@property(nonatomic) unsigned long long iCancelInviteTime; // @synthesize iCancelInviteTime=_iCancelInviteTime;
@property(nonatomic) unsigned long long ullSingleRoomKey; // @synthesize ullSingleRoomKey=_ullSingleRoomKey;
@property(nonatomic) unsigned int uiSingleRoomId; // @synthesize uiSingleRoomId=_uiSingleRoomId;
@property(nonatomic) unsigned int uiIsSingleToMulti; // @synthesize uiIsSingleToMulti=_uiIsSingleToMulti;
@property(nonatomic) unsigned long long iCallTime; // @synthesize iCallTime=_iCallTime;
@property(nonatomic) unsigned long long iConnectUsedTime; // @synthesize iConnectUsedTime=_iConnectUsedTime;
@property(nonatomic) unsigned long long iDialUsedTime; // @synthesize iDialUsedTime=_iDialUsedTime;
@property(nonatomic) unsigned int uiIsTalked; // @synthesize uiIsTalked=_uiIsTalked;
@property(nonatomic) int uiDeviceFail; // @synthesize uiDeviceFail=_uiDeviceFail;
@property(nonatomic) unsigned int uiIsConnected; // @synthesize uiIsConnected=_uiIsConnected;
@property(nonatomic) unsigned int uiIsConnecting; // @synthesize uiIsConnecting=_uiIsConnecting;
@property(nonatomic) unsigned int uiIsUserAbort; // @synthesize uiIsUserAbort=_uiIsUserAbort;
@property(nonatomic) unsigned int uiMemberIdx; // @synthesize uiMemberIdx=_uiMemberIdx;
@property(nonatomic) unsigned long long ullRoomKey; // @synthesize ullRoomKey=_ullRoomKey;
@property(nonatomic) unsigned int uiRoomId; // @synthesize uiRoomId=_uiRoomId;
@property(nonatomic) unsigned int uiRoomType; // @synthesize uiRoomType=_uiRoomType;
@property(copy, nonatomic) NSString *sClientGroupId; // @synthesize sClientGroupId=_sClientGroupId;
@property(copy, nonatomic) NSString *sGroupId; // @synthesize sGroupId=_sGroupId;
@property(nonatomic) unsigned int uiStopStatus; // @synthesize uiStopStatus=_uiStopStatus;
- (void).cxx_destruct;
- (void)appendLogInfoData:(id)arg1;
- (void)addMultiTalkAckReport:(id)arg1 roomId:(unsigned int)arg2 ret:(int)arg3 type:(int)arg4 netSceneStatus:(int)arg5;
- (void)addMultiTalkRejectFailedReport:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 ret:(int)arg4 netSceneStatus:(int)arg5;
- (void)addMultiTalkAckFailedReport:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 ret:(int)arg4 netSceneStatus:(int)arg5;
- (void)addMultiTalkNotifyFailedReportData:(int)arg1 type:(int)arg2 groupId:(id)arg3 roomId:(unsigned int)arg4 roomKey:(unsigned long long)arg5;
- (void)addMultiTalkNotifyReportData:(int)arg1 type:(int)arg2;
- (void)addMultilTalkActionReportData:(int)arg1 ret:(int)arg2 type:(int)arg3 netSceneStatus:(int)arg4;
- (void)reportSingle2MultiInfo:(id)arg1;
- (void)reportUserAbort;
- (void)reportOnTalkEnd;
- (void)reportOnRealDialStart;
- (void)reportOnDialStart;
- (void)reportOnAnswer;
- (void)reportOnReceiveFirstAudioPkg;
- (void)reportOnDataConnected;
- (void)reset;
- (void)reportState;
- (id)init;

@end

