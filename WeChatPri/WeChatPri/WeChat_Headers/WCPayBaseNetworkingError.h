//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCPayBaseNetworkingError : MMObject
{
    int _errorCode;
    NSString *_errorDesc;
}

+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2;
+ (id)errorWithErrorDesc:(id)arg1;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
- (void).cxx_destruct;

@end

