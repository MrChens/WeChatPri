//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CFishBottleWrap : NSObject
{
    unsigned int m_uiBottleType;
    unsigned int m_uiMsgType;
    NSString *m_nsBottleInfo;
    NSString *m_nsNickName;
    NSString *m_nsUsrInfo;
    unsigned int m_uiThrowCount;
    unsigned int m_uiFishCount;
    unsigned int m_uiDistance;
}

@property(nonatomic) unsigned int m_uiDistance; // @synthesize m_uiDistance;
@property(nonatomic) unsigned int m_uiFishCount; // @synthesize m_uiFishCount;
@property(nonatomic) unsigned int m_uiThrowCount; // @synthesize m_uiThrowCount;
@property(retain, nonatomic) NSString *m_nsUsrInfo; // @synthesize m_nsUsrInfo;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsBottleInfo; // @synthesize m_nsBottleInfo;
@property(nonatomic) unsigned int m_uiMsgType; // @synthesize m_uiMsgType;
@property(nonatomic) unsigned int m_uiBottleType; // @synthesize m_uiBottleType;
- (void).cxx_destruct;
- (id)description;
- (id)ToBottle;
- (void)dealloc;
- (id)init;

@end
