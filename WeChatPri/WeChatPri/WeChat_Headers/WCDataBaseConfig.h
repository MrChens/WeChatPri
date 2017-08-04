//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCDBConfigCheckpoint, WCDBConfigCorrupt, WCDBConfigHash, WCDBConfigMultiHandles, WCDBConfigMultiThread, WCDBConfigPerformance, WCDBConfigPerformanceOptimization, WCDBConfigResultCache, WCDBConfigSwitch, WCDBConfigTrash, WCDBConfigWalFrame;

@interface WCDataBaseConfig : NSObject
{
    WCDBConfigHash *m_hash;
    WCDBConfigMultiHandles *m_multiHandles;
    WCDBConfigCorrupt *m_corrupt;
    WCDBConfigPerformance *m_performance;
    WCDBConfigPerformanceOptimization *m_performanceOptimization;
    WCDBConfigSwitch *m_switch;
    WCDBConfigCheckpoint *m_checkpoint;
    WCDBConfigMultiThread *m_multiThread;
    WCDBConfigTrash *m_trash;
    WCDBConfigResultCache *m_resultCache;
    WCDBConfigWalFrame *m_walFrame;
}

+ (id)decode;
+ (void)encode:(id)arg1;
+ (id)sharedConfig;
+ (id)configPath;
+ (void)initialize;
@property(retain, nonatomic) WCDBConfigWalFrame *m_walFrame; // @synthesize m_walFrame;
@property(retain, nonatomic) WCDBConfigResultCache *m_resultCache; // @synthesize m_resultCache;
@property(retain, nonatomic) WCDBConfigTrash *m_trash; // @synthesize m_trash;
@property(retain, nonatomic) WCDBConfigMultiThread *m_multiThread; // @synthesize m_multiThread;
@property(retain, nonatomic) WCDBConfigCheckpoint *m_checkpoint; // @synthesize m_checkpoint;
@property(retain, nonatomic) WCDBConfigSwitch *m_switch; // @synthesize m_switch;
@property(retain, nonatomic) WCDBConfigPerformanceOptimization *m_performanceOptimization; // @synthesize m_performanceOptimization;
@property(retain, nonatomic) WCDBConfigPerformance *m_performance; // @synthesize m_performance;
@property(retain, nonatomic) WCDBConfigCorrupt *m_corrupt; // @synthesize m_corrupt;
@property(retain, nonatomic) WCDBConfigMultiHandles *m_multiHandles; // @synthesize m_multiHandles;
@property(retain, nonatomic) WCDBConfigHash *m_hash; // @synthesize m_hash;
- (void).cxx_destruct;
- (void)synchronize;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

