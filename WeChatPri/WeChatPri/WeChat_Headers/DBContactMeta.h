//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface DBContactMeta : NSObject <WCDBCoding>
{
    unsigned int lastUpdate;
    unsigned int flag;
    unsigned int intCon2;
    unsigned int intCon3;
    NSString *username;
    NSString *strCon1;
    NSString *strCon2;
    NSString *strCon3;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *strCon3; // @synthesize strCon3;
@property(retain, nonatomic) NSString *strCon2; // @synthesize strCon2;
@property(retain, nonatomic) NSString *strCon1; // @synthesize strCon1;
@property(nonatomic) unsigned int intCon3; // @synthesize intCon3;
@property(nonatomic) unsigned int intCon2; // @synthesize intCon2;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(nonatomic) unsigned int lastUpdate; // @synthesize lastUpdate;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_strCon3;
- (const WCDBCondition_22fabacd *)db_strCon2;
- (const WCDBCondition_22fabacd *)db_strCon1;
- (const WCDBCondition_c6db074e *)db_intCon3;
- (const WCDBCondition_c6db074e *)db_intCon2;
- (const WCDBCondition_c6db074e *)db_flag;
- (const WCDBCondition_c6db074e *)db_lastUpdate;
- (const WCDBCondition_22fabacd *)db_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

