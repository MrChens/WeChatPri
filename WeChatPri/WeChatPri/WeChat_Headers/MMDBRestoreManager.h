//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WCDBCorruptReportExt-Protocol.h"
#import "WCDBRestoreProtocol-Protocol.h"

@class MMDBRestoreReport, NSString;

@interface MMDBRestoreManager : MMService <MMService, WCDBRestoreProtocol, WCDBCorruptReportExt>
{
    MMDBRestoreReport *m_reporter;
    _Bool m_needBinning;
    _Bool m_pauseBinning;
    int m_restoreCount;
    int m_restoreDoneCount;
}

@property _Bool m_pauseBinning; // @synthesize m_pauseBinning;
@property int m_restoreDoneCount; // @synthesize m_restoreDoneCount;
@property int m_restoreCount; // @synthesize m_restoreCount;
@property _Bool m_needBinning; // @synthesize m_needBinning;
- (void).cxx_destruct;
- (void)ReportDatabaseCorrupt:(id)arg1;
- (Class)classFromTableName:(id)arg1;
- (void)onRepairProgressUpdate:(float)arg1;
- (long long)restoreRequireSize;
- (id)errorDescription:(id)arg1;
- (_Bool)needRestore;
- (_Bool)needBinning;
- (int)binningCount;
- (void)resetInitMark:(_Bool)arg1;
- (_Bool)restoreWithError:(id *)arg1 isAutoRestore:(_Bool)arg2;
- (id)findBinningPathsFrom:(id)arg1;
- (id)binningDirectoriesFrom:(id)arg1;
- (_Bool)binning;
- (void)setupMMDB:(id)arg1;
- (_Bool)shouldCloseMMCommand;
- (void)clearBinning:(_Bool)arg1;
- (void)dealloc;
- (id)reporter;
- (void)onServiceInit;
- (void)checkRemindFromWechatTeam;
- (void)pauseBinning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

