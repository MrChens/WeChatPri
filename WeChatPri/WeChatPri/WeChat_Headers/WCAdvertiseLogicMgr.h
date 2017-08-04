//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol WCLogicMgrDelegate;

@interface WCAdvertiseLogicMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *arrUpdateList;
    NSMutableDictionary *dicUpdateSource;
    _Bool bUpdating;
    id <WCLogicMgrDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCLogicMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)responseForSnsADObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3;
- (void)onOperation:(id)arg1 Finished:(long long)arg2;
- (_Bool)responseForSnsADObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForSnsADObjectOpRequest:(id)arg1;
- (void)unInterestAdvertiseDataItem:(id)arg1;
- (_Bool)unLikeAdvertiseDataItem:(id)arg1 source:(int)arg2;
- (_Bool)unCommentAdvertiseDataItem:(id)arg1 commentID:(id)arg2 source:(int)arg3;
- (void)updateAdvertiseDataItemDetail:(id)arg1 source:(int)arg2;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)deleteAdvertiseDataItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

