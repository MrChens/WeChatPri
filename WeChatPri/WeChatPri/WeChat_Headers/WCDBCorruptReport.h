//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDBCorruptReport : NSObject
{
    _Bool m_hasDirectReport;
    unsigned int m_corruptNum;
}

@property _Bool m_hasDirectReport; // @synthesize m_hasDirectReport;
@property unsigned int m_corruptNum; // @synthesize m_corruptNum;
- (void)reportCorruptOnMainThread:(id)arg1;
- (void)ClearCorruptNumWithDBID:(unsigned int)arg1;
- (void)DirectReportCorruptWithDBID:(unsigned int)arg1 dbObject:(id)arg2 dbPath:(id)arg3 errorCode:(unsigned int)arg4 important:(_Bool)arg5;
- (void)RecordCorruptWithDBID:(unsigned int)arg1 dbObject:(id)arg2 dbPath:(id)arg3 errorCode:(unsigned int)arg4 important:(_Bool)arg5;

@end

