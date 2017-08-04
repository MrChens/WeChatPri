//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesItemDB, NSMutableArray;
@protocol FavoritesBatchDelMgrDelegate;

@interface FavoritesBatchDelMgr : MMObject <PBMessageObserverDelegate>
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchDelArray;
    NSMutableArray *_failArray;
    id <FavoritesBatchDelMgrDelegate> _delegate;
    _Bool _isDeling;
}

@property(nonatomic) __weak id <FavoritesBatchDelMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkFailQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleBatchDelFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)TryStartBatchDel;
- (void)addBatchDelFavoritesItemList:(id)arg1;
- (void)dealloc;
- (_Bool)loadBatchDelQueue;
- (void)initDB:(id)arg1;
- (id)init;

@end

