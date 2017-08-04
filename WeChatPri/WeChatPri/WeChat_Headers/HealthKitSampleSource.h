//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface HealthKitSampleSource : MMObject <PBCoding>
{
    _Bool bIsAppleWatch;
    _Bool bIsLocalDevice;
    _Bool bIsInWhiteList;
    unsigned int uiStepCount;
    NSString *nsBundleId;
    NSString *nsAppName;
}

+ (void)initialize;
@property(nonatomic) _Bool bIsInWhiteList; // @synthesize bIsInWhiteList;
@property(nonatomic) _Bool bIsLocalDevice; // @synthesize bIsLocalDevice;
@property(nonatomic) _Bool bIsAppleWatch; // @synthesize bIsAppleWatch;
@property(nonatomic) unsigned int uiStepCount; // @synthesize uiStepCount;
@property(retain, nonatomic) NSString *nsAppName; // @synthesize nsAppName;
@property(retain, nonatomic) NSString *nsBundleId; // @synthesize nsBundleId;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

