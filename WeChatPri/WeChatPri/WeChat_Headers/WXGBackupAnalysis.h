//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BackupInfoReport;

@interface WXGBackupAnalysis : NSObject
{
    BackupInfoReport *m_backupInfoReport;
    BackupInfoReport *m_recoverInfoReport;
}

+ (id)compareItemReport:(id)arg1 withReport:(id)arg2;
+ (id)compareReport:(id)arg1 withReport:(id)arg2;
+ (id)getStringForInfoReport:(id)arg1;
+ (id)mergeReport:(id)arg1;
+ (void)resetTheStateOfAnalysis:(_Bool)arg1;
+ (_Bool)getShouldAnalysis;
+ (void)deleteInfo;
- (void).cxx_destruct;
- (id)getRecoverInfoReport;
- (id)getBackupInfoReport;
- (void)syncRecoverInfo;
- (void)syncBackupInfo;
- (void)addRecoverInfoItem:(id)arg1;
- (void)addBackupInfoItem:(id)arg1;
- (id)init;

@end

