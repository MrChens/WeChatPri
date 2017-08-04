//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSURL, QBASIHTTPRequest;

@protocol QBASIHTTPRequestDelegate <NSObject>

@optional
- (void)proxyAuthenticationNeededForRequest:(QBASIHTTPRequest *)arg1;
- (void)authenticationNeededForRequest:(QBASIHTTPRequest *)arg1;
- (void)request:(QBASIHTTPRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)requestRedirected:(QBASIHTTPRequest *)arg1;
- (void)requestFailed:(QBASIHTTPRequest *)arg1;
- (void)requestFinished:(QBASIHTTPRequest *)arg1;
- (void)request:(QBASIHTTPRequest *)arg1 willRedirectToURL:(NSURL *)arg2;
- (void)request:(QBASIHTTPRequest *)arg1 didReceiveResponseHeaders:(NSDictionary *)arg2;
- (void)requestStarted:(QBASIHTTPRequest *)arg1;
@end

