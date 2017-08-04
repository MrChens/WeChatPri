//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "NSURLConnectionDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol PublicWifiScanListLogicDelegate;

@interface PublicWifiScanListLogic : APBase <NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    unsigned int _bExpiredTime;
    id <PublicWifiScanListLogicDelegate> _delegate;
    NSMutableDictionary *_wifiMap;
    NSMutableArray *_queryWifiList;
}

@property(nonatomic) unsigned int bExpiredTime; // @synthesize bExpiredTime=_bExpiredTime;
@property(retain, nonatomic) NSMutableArray *queryWifiList; // @synthesize queryWifiList=_queryWifiList;
@property(retain, nonatomic) NSMutableDictionary *wifiMap; // @synthesize wifiMap=_wifiMap;
@property(nonatomic) __weak id <PublicWifiScanListLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCacheTime:(unsigned int)arg1;
- (void)handleGetWifiListResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendGetWifiList:(id)arg1;
- (void)pickNeedToStore:(id)arg1;
- (void)storeToWifiMap:(id)arg1;
- (void)checkWfiMap;
- (id)filterByWifiMap:(id)arg1;
- (void)initWifiMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

