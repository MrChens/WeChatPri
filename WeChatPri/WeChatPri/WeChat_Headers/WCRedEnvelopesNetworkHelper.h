//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol WCRedEnvelopesNetworkHelperDelegate;

@interface WCRedEnvelopesNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCRedEnvelopesNetworkHelperDelegate> m_delegate;
    NSMutableDictionary *m_dicCGIStartedTime;
}

+ (void)idkeyCmdReport:(unsigned int)arg1 keyName:(id)arg2 value:(unsigned int)arg3;
+ (void)idkeyCmdReport:(unsigned int)arg1 keyName:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak id <WCRedEnvelopesNetworkHelperDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnAsyncBizSubScribe:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnCommonBizHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnEnterpriseHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)WCToAsyncBizSubcribeReq:(id)arg1;
- (void)WCToEnterpriseCommonBizReq:(id)arg1;
- (void)WCToEnterpriseHBBizReq:(id)arg1;
- (void)WCToYearHongbaoRequest:(id)arg1;
- (void)WCToHongbaoCommonRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

