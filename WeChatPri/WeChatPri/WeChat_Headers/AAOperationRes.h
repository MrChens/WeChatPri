//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface AAOperationRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int maxPayerNum; // @dynamic maxPayerNum;
@property(nonatomic) unsigned long long maxPerAmount; // @dynamic maxPerAmount;
@property(nonatomic) unsigned int maxReceiverNum; // @dynamic maxReceiverNum;
@property(nonatomic) unsigned long long maxTotalAmount; // @dynamic maxTotalAmount;
@property(nonatomic) unsigned int maxTotalNum; // @dynamic maxTotalNum;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

