//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BlueIDPool : NSObject
{
}

+ (long long)getDIDByType:(long long)arg1 AndMACString:(id)arg2;
+ (long long)getDIDByType:(long long)arg1 AndMACData:(id)arg2;
+ (int)getDeviceTypeByID:(long long)arg1;
+ (int)getAdapterIndex:(long long)arg1;
+ (long long)getDIDByType:(long long)arg1 AndUuid:(struct __CFUUID *)arg2;
+ (long long)getDIDByType:(long long)arg1 AndIDString:(id)arg2;
+ (long long)getNewSessionIdByType:(long long)arg1;

@end

