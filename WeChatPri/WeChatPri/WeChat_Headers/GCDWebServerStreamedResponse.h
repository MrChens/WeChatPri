//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerResponse.h"

@interface GCDWebServerStreamedResponse : GCDWebServerResponse
{
    CDUnknownBlockType _block;
}

+ (id)responseWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
+ (id)responseWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)asyncReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
- (id)initWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;

@end

