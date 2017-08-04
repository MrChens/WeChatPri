//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol QBBeaconAnaNSObjTransToJceBufferProtocol;

@interface QBBeaconRequestPackage : NSObject
{
    BOOL platformId;
    BOOL encryType;
    BOOL zipType;
    int cmd;
    int _eventCnt;
    NSString *appkey;
    NSString *appVersion;
    NSString *sdkId;
    NSString *sdkVersion;
    id <QBBeaconAnaNSObjTransToJceBufferProtocol> sBuffer;
    NSString *osVer;
    NSString *model;
    NSString *reserved;
}

+ (id)initWithData:(id)arg1 cmd:(int)arg2 sBuffer:(id)arg3;
@property(nonatomic) int eventCnt; // @synthesize eventCnt=_eventCnt;
@property(retain, nonatomic) NSString *reserved; // @synthesize reserved;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(retain, nonatomic) id <QBBeaconAnaNSObjTransToJceBufferProtocol> sBuffer; // @synthesize sBuffer;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) NSString *sdkId; // @synthesize sdkId;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey;
@property(nonatomic) BOOL zipType; // @synthesize zipType;
@property(nonatomic) BOOL encryType; // @synthesize encryType;
@property(nonatomic) BOOL platformId; // @synthesize platformId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createWUPModel;

@end

