//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnDownloadTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    unsigned int m_uiFileLength;
    NSString *m_nsTransInfo;
    int m_nRetCode;
    int m_nHttpStatusCode;
    unsigned int m_uiScene;
    NSString *m_nsFileID;
    NSString *m_nsExtInfo;
    _Bool m_isPartialEnd;
    struct C2CDownloadResult result;
    unsigned int recvedLength;
    unsigned long long startTime;
    unsigned long long endTime;
}

@property(nonatomic) struct C2CDownloadResult result; // @synthesize result;
@property(nonatomic) unsigned int recvedLength; // @synthesize recvedLength;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(nonatomic) _Bool m_isPartialEnd; // @synthesize m_isPartialEnd;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) int m_nHttpStatusCode; // @synthesize m_nHttpStatusCode;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo;
@property(nonatomic) unsigned int m_uiFileLength; // @synthesize m_uiFileLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

