//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMBizFileMatchNode, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFolderWrap : NSObject <PBCoding>
{
    unsigned int m_fileNum;
    int m_scanStatus;
    int m_onlyBizType;
    int m_storeTimeType;
    unsigned int m_subFolderNum;
    unsigned int m_subTotalFolderNum;
    unsigned int m_subTotalFileNum;
    int m_onlyFileTypeInUse;
    NSString *m_name;
    NSMutableArray *m_arrChildFolder;
    unsigned long long m_fileSize;
    NSMutableDictionary *m_dicBizStat;
    NSMutableArray *m_arrNotScanFileName;
    unsigned long long m_subTotalFileSize;
    MMBizFileMatchNode *m_bizMatchNode;
}

+ (void)initialize;
@property(retain, nonatomic) MMBizFileMatchNode *m_bizMatchNode; // @synthesize m_bizMatchNode;
@property(nonatomic) int m_onlyFileTypeInUse; // @synthesize m_onlyFileTypeInUse;
@property(nonatomic) unsigned long long m_subTotalFileSize; // @synthesize m_subTotalFileSize;
@property(nonatomic) unsigned int m_subTotalFileNum; // @synthesize m_subTotalFileNum;
@property(nonatomic) unsigned int m_subTotalFolderNum; // @synthesize m_subTotalFolderNum;
@property(nonatomic) unsigned int m_subFolderNum; // @synthesize m_subFolderNum;
@property(nonatomic) int m_storeTimeType; // @synthesize m_storeTimeType;
@property(retain, nonatomic) NSMutableArray *m_arrNotScanFileName; // @synthesize m_arrNotScanFileName;
@property(nonatomic) int m_onlyBizType; // @synthesize m_onlyBizType;
@property(retain, nonatomic) NSMutableDictionary *m_dicBizStat; // @synthesize m_dicBizStat;
@property(nonatomic) int m_scanStatus; // @synthesize m_scanStatus;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum;
@property(retain, nonatomic) NSMutableArray *m_arrChildFolder; // @synthesize m_arrChildFolder;
@property(retain, nonatomic) NSString *m_name; // @synthesize m_name;
- (void).cxx_destruct;
- (void)sumSubFolderData:(id)arg1;
- (void)markScanFinish;
- (_Bool)isScanFinish;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

