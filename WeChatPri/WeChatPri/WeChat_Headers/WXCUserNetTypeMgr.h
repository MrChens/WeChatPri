//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSMutableDictionary;

@interface WXCUserNetTypeMgr : NSObject
{
    NSMutableDictionary *_userNetTypeCacheDic;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo; // @synthesize telephonyNetworkInfo=_telephonyNetworkInfo;
@property(retain, nonatomic) NSMutableDictionary *userNetTypeCacheDic; // @synthesize userNetTypeCacheDic=_userNetTypeCacheDic;
- (void).cxx_destruct;
- (int)getNetTypeBelowIOS7;
- (int)getNetTypeByNetworkStatus:(_Bool)arg1;
- (int)getNetTypeAboveIOS7;
- (int)getSelfNetType;
- (void)dealloc;
- (id)init;

@end

