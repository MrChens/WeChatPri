//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCSnsPreLoadInfo : MMObject <PBCoding>
{
    _Bool sightAutoDownloadOn3GPlus;
    _Bool sightAutoDownloadOnWifi;
    NSString *layerId;
    NSString *expId;
}

+ (void)initialize;
@property(nonatomic) _Bool sightAutoDownloadOnWifi; // @synthesize sightAutoDownloadOnWifi;
@property(nonatomic) _Bool sightAutoDownloadOn3GPlus; // @synthesize sightAutoDownloadOn3GPlus;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
- (void).cxx_destruct;
- (_Bool)parsePreLoadInfo:(id)arg1;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

