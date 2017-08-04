//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSData, NSString;

@interface WAConfigInfo : NSObject <WCDBCoding>
{
    unsigned int type;
    unsigned int version;
    unsigned int updateTime;
    NSString *appID;
    NSData *configData;
    long long m___rowID;
}

+ (id)getWCDBTableHelperDictionary;
+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSData *configData; // @synthesize configData;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_updateTime;
- (const WCDBCondition_91e67114 *)db_configData;
- (const WCDBCondition_c6db074e *)db_version;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_appID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

