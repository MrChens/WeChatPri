//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BaseResp : NSObject
{
    int errCode;
    int type;
    NSString *errStr;
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr;
@property(nonatomic) int errCode; // @synthesize errCode;
- (void).cxx_destruct;
- (id)init;

@end

