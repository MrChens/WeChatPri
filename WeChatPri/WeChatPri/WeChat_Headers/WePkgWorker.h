//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBProtocolWorker.h"

@interface WePkgWorker : QBProtocolWorker
{
}

+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)arg1;
+ (_Bool)qbProxyProtocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(_Bool)arg2;
- (void)qbProxyProtocolDidStopLoading;
- (id)qbProxyProtocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)qbProxyProtocolDidFailWithError:(id)arg1;
- (void)qbProxyProtocolDidFinishLoading;
- (id)qbProxyProtocolDidReceiveData:(id)arg1;
- (_Bool)qbProxyProtocolDidReceiveResponse:(inout id *)arg1 error:(out id *)arg2;
- (void)qbProxyProtocolDidStartLoading;
- (_Bool)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidInitialized;

@end

