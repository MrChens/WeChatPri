//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;

@interface WePkgCheckUpdateMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *_arrCheckingPkgIds;
}

- (void).cxx_destruct;
- (void)callFailExtForPkgId:(id)arg1 errCode:(int)arg2;
- (void)callSuccessExtForPkgId:(id)arg1 updateConfig:(id)arg2;
- (void)copyPkgResponseToUpdateConfig:(id)arg1 UpdateConfig:(id)arg2 OldVersion:(id)arg3 ResonpseMd5:(id)arg4;
- (void)removeFromCheckingArr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSuccessResp:(id)arg1 regConfig:(id)arg2 ResonpseMd5:(id)arg3;
- (_Bool)isSameAsLastOne:(id)arg1 RegularRespMd5:(id)arg2 PkgId:(id)arg3;
- (void)handleRespCGIWarp:(id)arg1;
- (_Bool)sendReq:(id)arg1 Scene:(int)arg2;
- (_Bool)checkUpdateForPkgId:(id)arg1 Scene:(int)arg2;
- (id)init;

@end

