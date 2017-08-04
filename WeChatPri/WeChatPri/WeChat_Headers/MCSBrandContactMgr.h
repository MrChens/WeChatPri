//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMConfigMgrExt-Protocol.h"

@class NSMutableArray, NSString;

@interface MCSBrandContactMgr : NSObject <MMConfigMgrExt>
{
    NSMutableArray *_arrMCSItems;
    unsigned int _lastUpdateTime;
    _Bool _bNeedSave;
}

- (void).cxx_destruct;
- (void)onMMDynamicConfigUpdated;
- (void)onAppTerminate;
- (void)onClearData;
- (void)onReloadData;
- (void)onEnterBackGround;
- (void)trySaveData;
- (void)loadLocalData;
- (id)pathForMCSFile;
- (void)addScore:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)getMCSArray;
- (void)cleanData;
- (void)tryUpdateData;
- (void)setDeclineFactor;
- (id)getMCSInfo;
- (void)initData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

