//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface WXCPbVoiceGroupInfoItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSMutableArray *members; // @dynamic members;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(nonatomic) unsigned int routeId; // @dynamic routeId;
@property(retain, nonatomic) NSString *wxchatroom; // @dynamic wxchatroom;

@end

