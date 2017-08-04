//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMAppAttachFileMgrExt-Protocol.h"

@class CdnTaskInfo, NSMutableArray, NSMutableDictionary, NSString;
@protocol OpenDownloadCDNMgrDelegate;

@interface OpenDownloadCDNMgr : NSObject <MMAppAttachFileMgrExt, ICdnComMgrExt>
{
    NSMutableArray *_arrFileInfo;
    CdnTaskInfo *_curTaskInfo;
    id <OpenDownloadCDNMgrDelegate> m_delegate;
    NSMutableDictionary *_msgInfoDict;
}

@property(retain, nonatomic) NSMutableDictionary *msgInfoDict; // @synthesize msgInfoDict=_msgInfoDict;
@property(nonatomic) id <OpenDownloadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)handleCheckDwonloadOK:(id)arg1 withResp:(id)arg2;
- (void)handleCheckDownloadError:(id)arg1;
- (void)onCheckBigFileDownloadResult:(_Bool)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)checkBigFileDownload:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)StopDownloadByUsr:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopCurDownload;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)DownloadFail:(int)arg1 expired:(_Bool)arg2;
- (void)DownloadOk;
- (void)modMsgByBitSetInMainQueue:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)CheckQueue;
- (void)Pop;
- (id)GetTop;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

