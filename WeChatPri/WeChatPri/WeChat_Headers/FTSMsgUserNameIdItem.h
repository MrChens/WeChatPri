//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface FTSMsgUserNameIdItem : NSObject <WCDBCoding>
{
    unsigned int userNameId;
    unsigned int validFlag;
    unsigned int tableId;
    unsigned int preCursorMesId;
    unsigned int nextCursorMesId;
    NSString *userName;
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
@property(nonatomic) unsigned int nextCursorMesId; // @synthesize nextCursorMesId;
@property(nonatomic) unsigned int preCursorMesId; // @synthesize preCursorMesId;
@property(nonatomic) unsigned int tableId; // @synthesize tableId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int validFlag; // @synthesize validFlag;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_nextCursorMesId;
- (const WCDBCondition_c6db074e *)db_preCursorMesId;
- (const WCDBCondition_c6db074e *)db_tableId;
- (const WCDBCondition_22fabacd *)db_userName;
- (const WCDBCondition_c6db074e *)db_validFlag;
- (const WCDBCondition_c6db074e *)db_userNameId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

