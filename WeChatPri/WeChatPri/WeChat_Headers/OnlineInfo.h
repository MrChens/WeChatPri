//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData, NSString, SKBuiltinBuffer_t;

@interface OnlineInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)GetWordingForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *clientKey; // @dynamic clientKey;
@property(nonatomic) unsigned int deviceHelperType; // @dynamic deviceHelperType;
@property(retain, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(nonatomic) unsigned int deviceType; // @dynamic deviceType;
@property(nonatomic) unsigned int onlineStatus; // @dynamic onlineStatus;
@property(retain, nonatomic) NSString *wordingXml; // @dynamic wordingXml;

@end

