//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SafeModeReportData : NSObject <PBCoding>
{
    _Bool isKVReport;
    _Bool isReportNow;
    _Bool isKeyLog;
    int ID;
    int key;
    int value;
    NSString *ext;
}

+ (void)initialize;
@property(nonatomic) _Bool isKeyLog; // @synthesize isKeyLog;
@property(nonatomic) _Bool isReportNow; // @synthesize isReportNow;
@property(retain, nonatomic) NSString *ext; // @synthesize ext;
@property(nonatomic) _Bool isKVReport; // @synthesize isKVReport;
@property(nonatomic) int value; // @synthesize value;
@property(nonatomic) int key; // @synthesize key;
@property(nonatomic) int ID; // @synthesize ID;
- (void).cxx_destruct;
- (id)initWithID:(int)arg1 ext:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
- (id)initWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

