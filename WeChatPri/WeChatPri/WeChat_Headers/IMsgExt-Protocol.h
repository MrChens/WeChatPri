//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMessageWrap, NSArray, NSDictionary, NSSet, NSString;

@protocol IMsgExt

@optional
- (void)onChatNewMsgSent:(CMessageWrap *)arg1;
- (void)OnSendSight:(NSString *)arg1;
- (void)OnBeginDownloadAppData:(CMessageWrap *)arg1;
- (void)OnBeginDownloadVideo:(CMessageWrap *)arg1;
- (void)OnBeginDownloadImage:(CMessageWrap *)arg1;
- (void)OnMsgDownloadAppAttachCancel:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoCancel:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoCommonFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoSuccess:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnUpdateVideoStatus:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnGetNewXmlMsg:(NSString *)arg1 Type:(NSString *)arg2 MsgWrap:(CMessageWrap *)arg3 IsPull:(_Bool)arg4;
- (void)OnGetNewXmlMsg:(NSString *)arg1 Type:(NSString *)arg2 MsgWrap:(CMessageWrap *)arg3;
- (void)OnMsgDownloadThumbFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadThumbOK:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgNotAddDBSession:(NSString *)arg1 MsgList:(NSArray *)arg2;
- (void)OnShowPush:(CMessageWrap *)arg1;
- (void)OnAddMsgForSpecialSession:(NSString *)arg1 MsgList:(NSArray *)arg2;
- (void)OnMsgNotAddDBNotify:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnAddMsgListForSession:(NSDictionary *)arg1 NotifyUsrName:(NSSet *)arg2;
- (void)OnUnReadCountChange:(NSString *)arg1;
- (void)OnDelMsg:(NSString *)arg1 DelAll:(_Bool)arg2;
- (void)OnRevokeMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(NSString *)arg4 EducationMsg:(NSString *)arg5;
- (void)OnDelMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnDelMsg:(NSString *)arg1;
- (void)OnModMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnAddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnPreAddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnChangeMsg:(NSString *)arg1 OpCode:(unsigned int)arg2;
@end

