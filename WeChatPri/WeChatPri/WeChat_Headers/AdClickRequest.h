//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class AdShareInfo, BaseRequest, NSString;

@interface AdClickRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adType; // @dynamic adType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bssid; // @dynamic bssid;
@property(nonatomic) unsigned int clickAction; // @dynamic clickAction;
@property(nonatomic) int clickpos; // @dynamic clickpos;
@property(retain, nonatomic) NSString *descxml; // @dynamic descxml;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) AdShareInfo *shareInfo; // @dynamic shareInfo;
@property(retain, nonatomic) NSString *snsStatext; // @dynamic snsStatext;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) unsigned long long timestampMs; // @dynamic timestampMs;
@property(retain, nonatomic) NSString *viewid; // @dynamic viewid;

@end

