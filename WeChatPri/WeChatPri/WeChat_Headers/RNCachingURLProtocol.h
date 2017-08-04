//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSMutableData, NSURLConnection, NSURLResponse;

@interface RNCachingURLProtocol : NSURLProtocol
{
    NSURLConnection *connection_;
    NSMutableData *data_;
    NSURLResponse *response_;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=response_;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=data_;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=connection_;
- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (_Bool)useCache;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)stopLoading;
- (void)startLoading;

@end

