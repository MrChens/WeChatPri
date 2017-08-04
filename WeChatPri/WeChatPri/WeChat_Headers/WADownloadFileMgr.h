//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WADownloadFileMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSMutableDictionary *_dicAppID2DownloadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)clearAllDownloadHandler;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (id)getDownloadHandler:(id)arg1;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (_Bool)abortDownloadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)genDownloadTaskID;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

