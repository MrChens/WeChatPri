//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class AppMsg, BaseRequest, NSString;

@interface SendAppMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *commentUrl; // @dynamic commentUrl;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *fromSence; // @dynamic fromSence;
@property(nonatomic) unsigned int hitMd5; // @dynamic hitMd5;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) AppMsg *msg; // @dynamic msg;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(nonatomic) unsigned int reqTime; // @dynamic reqTime;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

