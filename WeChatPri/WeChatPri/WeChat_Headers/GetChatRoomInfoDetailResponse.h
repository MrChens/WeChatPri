//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetChatRoomInfoDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *announcement; // @dynamic announcement;
@property(retain, nonatomic) NSString *announcementEditor; // @dynamic announcementEditor;
@property(nonatomic) unsigned int announcementPublishTime; // @dynamic announcementPublishTime;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int chatRoomInfoVersion; // @dynamic chatRoomInfoVersion;
@property(nonatomic) unsigned int chatRoomStatus; // @dynamic chatRoomStatus;

@end

