//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface BakChatCreateQRCodeOfflineRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addrCount; // @dynamic addrCount;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long dataSize; // @dynamic dataSize;
@property(retain, nonatomic) NSString *pcacctName; // @dynamic pcacctName;
@property(retain, nonatomic) NSString *pcname; // @dynamic pcname;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *tickit; // @dynamic tickit;
@property(retain, nonatomic) NSString *wifiName; // @dynamic wifiName;

@end

