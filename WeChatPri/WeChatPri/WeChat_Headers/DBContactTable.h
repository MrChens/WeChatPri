//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class DBContactBrand, DBContactChatRoom, DBContactHeadImage, DBContactLocal, DBContactOther, DBContactProfile, DBContactRemark, DBContactSocial, NSString;

@interface DBContactTable : NSObject <WCDBCoding>
{
    unsigned int type;
    unsigned int certificationFlag;
    unsigned int imgStatus;
    NSString *userName;
    NSString *encodeUserName;
    DBContactLocal *dbContactLocal;
    DBContactOther *dbContactOther;
    DBContactRemark *dbContactRemark;
    DBContactHeadImage *dbContactHeadImage;
    DBContactProfile *dbContactProfile;
    DBContactSocial *dbContactSocial;
    DBContactChatRoom *dbContactChatRoom;
    DBContactBrand *dbContactBrand;
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
@property(retain, nonatomic) DBContactBrand *dbContactBrand; // @synthesize dbContactBrand;
@property(retain, nonatomic) DBContactChatRoom *dbContactChatRoom; // @synthesize dbContactChatRoom;
@property(retain, nonatomic) DBContactSocial *dbContactSocial; // @synthesize dbContactSocial;
@property(retain, nonatomic) DBContactProfile *dbContactProfile; // @synthesize dbContactProfile;
@property(retain, nonatomic) DBContactHeadImage *dbContactHeadImage; // @synthesize dbContactHeadImage;
@property(retain, nonatomic) DBContactRemark *dbContactRemark; // @synthesize dbContactRemark;
@property(retain, nonatomic) DBContactOther *dbContactOther; // @synthesize dbContactOther;
@property(retain, nonatomic) DBContactLocal *dbContactLocal; // @synthesize dbContactLocal;
@property(retain, nonatomic) NSString *encodeUserName; // @synthesize encodeUserName;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_ccdac511 *)db_dbContactBrand;
- (const WCDBCondition_4ac13cdf *)db_dbContactChatRoom;
- (const WCDBCondition_6800d679 *)db_dbContactSocial;
- (const WCDBCondition_f2837fb8 *)db_dbContactProfile;
- (const WCDBCondition_b9289f6f *)db_dbContactHeadImage;
- (const WCDBCondition_4c69d9ed *)db_dbContactRemark;
- (const WCDBCondition_dc97b27b *)db_dbContactOther;
- (const WCDBCondition_b66c908b *)db_dbContactLocal;
- (const WCDBCondition_22fabacd *)db_encodeUserName;
- (const WCDBCondition_c6db074e *)db_imgStatus;
- (const WCDBCondition_c6db074e *)db_certificationFlag;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

