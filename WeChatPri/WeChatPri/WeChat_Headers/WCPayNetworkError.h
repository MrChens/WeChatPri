//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCPayNetworkError : NSObject
{
    long long _errorCode;
    NSString *_errorMessage;
    NSDictionary *_userInfo;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)description;
- (id)convertToNSError;
- (void)dealloc;

@end

