//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonTabItem : NSObject
{
    unsigned int downloadStatus;
    int type;
    NSString *packageId;
    NSString *iconUrl;
    NSString *panelUrl;
    NSString *_accessibilityName;
    NSObject *_m_userInfo;
}

@property(retain, nonatomic) NSObject *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) NSString *accessibilityName; // @synthesize accessibilityName=_accessibilityName;
@property(retain, nonatomic) NSString *panelUrl; // @synthesize panelUrl;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) unsigned int downloadStatus; // @synthesize downloadStatus;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

