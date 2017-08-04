//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, NSTimer;

@interface QBIPListManager : NSObject
{
    _Bool _isDefaultUseProxy;
    _Bool _hadFetchedIplist;
    int _spdy_bProxy;
    NSMutableDictionary *_ssidToIpTypeDicts;
    long long _spdyEnableFlag;
    long long _currentSSID;
    long long _gettingIpListSSID;
    NSTimer *_getIpListTimer;
    NSTimer *_iplistFrequencyControlTimer;
    long long _iplistFrequencyControlCount;
    NSString *_spdyStartIp;
    NSDate *_getIpListDate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *getIpListDate; // @synthesize getIpListDate=_getIpListDate;
@property(nonatomic) _Bool hadFetchedIplist; // @synthesize hadFetchedIplist=_hadFetchedIplist;
@property(retain, nonatomic) NSString *spdyStartIp; // @synthesize spdyStartIp=_spdyStartIp;
@property(nonatomic) long long iplistFrequencyControlCount; // @synthesize iplistFrequencyControlCount=_iplistFrequencyControlCount;
@property(retain, nonatomic) NSTimer *iplistFrequencyControlTimer; // @synthesize iplistFrequencyControlTimer=_iplistFrequencyControlTimer;
@property(retain, nonatomic) NSTimer *getIpListTimer; // @synthesize getIpListTimer=_getIpListTimer;
@property(nonatomic) long long gettingIpListSSID; // @synthesize gettingIpListSSID=_gettingIpListSSID;
@property(nonatomic) long long currentSSID; // @synthesize currentSSID=_currentSSID;
@property(nonatomic) long long spdyEnableFlag; // @synthesize spdyEnableFlag=_spdyEnableFlag;
@property(retain, nonatomic) NSMutableDictionary *ssidToIpTypeDicts; // @synthesize ssidToIpTypeDicts=_ssidToIpTypeDicts;
@property _Bool isDefaultUseProxy; // @synthesize isDefaultUseProxy=_isDefaultUseProxy;
@property int spdy_bProxy; // @synthesize spdy_bProxy=_spdy_bProxy;
- (void).cxx_destruct;
- (void)resetCurrentIpIndexOfType:(int)arg1;
- (_Bool)failCurrentIpOfType:(int)arg1;
- (void)getIpListFrequencyControl;
- (void)clearFrequencyControlTimer;
- (id)getCurrentIpOfType:(int)arg1;
- (void)statSpdyStartIp;
- (void)saveDataToFileAndClear;
- (void)saveIpLists:(id)arg1 apnType:(long long)arg2 ipType:(long long)arg3 totalPollNum:(long long)arg4 lifePeriod:(long long)arg5;
- (void)getIPListWhenAPNChanged:(_Bool)arg1;
- (_Bool)haveToGetIpList;
- (void)getIpListFromServer:(id)arg1;
@property(readonly, nonatomic) _Bool spdyAvailable;
@property(readonly, nonatomic) _Bool cloudAccelerateOn;
- (void)disableSpdy;
- (void)enableSpdy;
- (void)dealloc;
- (id)init;

@end

