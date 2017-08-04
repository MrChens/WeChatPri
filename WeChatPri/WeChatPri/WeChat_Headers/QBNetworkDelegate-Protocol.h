//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSCachedURLResponse, NSData, NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, QBNetwork;

@protocol QBNetworkDelegate <NSObject>

@optional
- (NSString *)qbNetworkOriginHost:(QBNetwork *)arg1;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)qbNetwork:(QBNetwork *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)qbNetworkShouldUseCredentialStorage:(QBNetwork *)arg1;
- (NSCachedURLResponse *)qbNetwork:(QBNetwork *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (void)qbNetwork:(QBNetwork *)arg1 didFailWithError:(NSError *)arg2;
- (void)qbNetworkDidFinishLoading:(QBNetwork *)arg1;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveData:(NSData *)arg2;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (NSURLRequest *)qbNetwork:(QBNetwork *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

