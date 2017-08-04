//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol WAPackageDownloadLogicDelegate;

@interface WAPackageDownloadLogic : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, ICdnComMgrExt>
{
    NSMutableDictionary *_dicDownloadStatus;
    NSMutableArray *_arrWaittingTaskQueue;
    NSMutableArray *_arrDownloadingTaskQueue;
    _Bool _bUseSerialMode;
    int _pkgType;
    id <WAPackageDownloadLogicDelegate> m_delegate;
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) int pkgType; // @synthesize pkgType=_pkgType;
@property(nonatomic) _Bool bUseSerialMode; // @synthesize bUseSerialMode=_bUseSerialMode;
@property(nonatomic) __weak id <WAPackageDownloadLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (float)remainingTimeForDownload:(id)arg1 bytesTransferred:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)reportDownloadSpendTime:(double)arg1 isDownloadError:(_Bool)arg2 fileIdentifier:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)getRealFileIdentifier:(id)arg1;
- (void)cleanTmpDirectory;
- (void)cancelAllDownloads;
- (void)raiseDownloadPriorityWithAppid:(id)arg1;
- (void)checkQueue;
- (void)addDownloadTaskWithUrl:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3;
- (_Bool)isDownloadingTaskWithUrlStr:(id)arg1;
- (void)invalidate;
- (void)realStartDownloadWithTask:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

