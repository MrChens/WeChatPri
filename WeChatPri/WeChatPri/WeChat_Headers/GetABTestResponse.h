//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetABTestResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *experimentList; // @dynamic experimentList;
@property(retain, nonatomic) NSMutableArray *expiredexpid; // @dynamic expiredexpid;
@property(nonatomic) unsigned int internalTime; // @dynamic internalTime;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

