//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResDownloadMgrDelegate-Protocol.h"

@class MMResBatchDownloadTaskContext, MMResourceDownloadMgr, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol MMResBatchDownloadMgrDelegate;

@interface MMResBatchDownloadTask : NSObject <MMResDownloadMgrDelegate>
{
    NSArray *_needDownloadUrlList;
    unsigned int _batchTaskId;
    MMResBatchDownloadTaskContext *_context;
    NSMutableArray *_leftUrlList;
    NSMutableDictionary *_failedUrl2FailedCnt;
    NSMutableArray *_errMsgList;
    id <MMResBatchDownloadMgrDelegate> _mgrDelegate;
    MMResourceDownloadMgr *_resDownloadMgr;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dictUrlInfo;
}

@property(nonatomic) MMResourceDownloadMgr *resDownloadMgr; // @synthesize resDownloadMgr=_resDownloadMgr;
@property(nonatomic) id <MMResBatchDownloadMgrDelegate> mgrDelegate; // @synthesize mgrDelegate=_mgrDelegate;
@property(readonly, retain, nonatomic) MMResBatchDownloadTaskContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned int batchTaskId; // @synthesize batchTaskId=_batchTaskId;
@property(readonly, retain, nonatomic) NSArray *needDownloadUrlList; // @synthesize needDownloadUrlList=_needDownloadUrlList;
- (void).cxx_destruct;
- (void)addErrMsgForCode:(long long)arg1 url:(id)arg2;
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)startBatchDownload;
- (void)dealloc;
- (id)initWithUrlList:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

