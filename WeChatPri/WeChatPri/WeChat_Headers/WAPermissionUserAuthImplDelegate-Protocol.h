//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAPermissionUserAuthImplDelegate <NSObject>
- (void)userAuthFailWithJSAPI:(NSString *)arg1 failHandler:(void (^)(NSString *))arg2 errMsg:(NSString *)arg3 scene:(unsigned long long)arg4;
- (void)userAuthOKWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 scene:(unsigned long long)arg3;
@end

