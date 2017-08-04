//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSTopHitDelegate-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"

@class FTSTopHitMgr, NSArray, NSMutableArray, NSMutableDictionary, NSString, Package;

@interface FTSMemorySearchMgr : NSObject <IMMLanguageMgrExt, MMKernelExt, MMPackageDownloadMgrExt, IGameCenterExt, FTSTopHitDelegate>
{
    _Bool _hasInited;
    _Bool _isLocalGameCacheUpdating;
    unsigned long long _gameCacheModifyTime;
    NSString *_lastQueryText;
    NSString *_newestQueryText;
    NSMutableArray *_arrLastQueryKeywords;
    NSMutableDictionary *_dicSearchMatchTip;
    NSMutableArray *_arrFeatureResultItem;
    NSMutableDictionary *_dicSourceFeatureSearchItem;
    unsigned int _curFeatureListVersion;
    unsigned int _lastCheckPackageTime;
    Package *_downloadingPackage;
    NSMutableArray *_arrWCGameAllItem;
    NSMutableArray *_arrWCGameResultItem;
    NSMutableArray *_arrDetailPageWCGameResultItem;
    NSString *_newestDetailPageQueryText;
    NSString *_lastDetailPageQueryText;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
    FTSTopHitMgr *_ftsTopHitMgr;
}

@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(retain, nonatomic) NSMutableArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSString *lastDetailPageQueryText; // @synthesize lastDetailPageQueryText=_lastDetailPageQueryText;
@property(retain, nonatomic) NSString *newestDetailPageQueryText; // @synthesize newestDetailPageQueryText=_newestDetailPageQueryText;
@property(retain, nonatomic) NSArray *arrLastQueryKeywords; // @synthesize arrLastQueryKeywords=_arrLastQueryKeywords;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
- (void).cxx_destruct;
- (_Bool)isTopHitFeatureReady;
- (id)getFeatureDictionary;
- (void)onGetAllGameList:(id)arg1 error:(long long)arg2;
- (unsigned long long)getGameCachedModifiedTime;
- (_Bool)shouldUpdateGameCache;
- (void)tryAsyncUpdateLocalGameCache;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)updateVersion:(unsigned int)arg1;
- (unsigned int)getCurrenPackageVersion;
- (id)getFeatureIcon:(unsigned int)arg1;
- (id)getFeatureListFilePath:(id)arg1;
- (id)getFeatureListVersionFile;
- (id)getFeatureListTempZipPayloadPath;
- (id)getFeatureListZipPayloadPath;
- (id)getFeatureListPackageZipFile;
- (id)getFeatureListPackageRootPath;
- (void)onAuthOK;
- (void)delayCheckUpdate;
- (void)doCheckUpdate;
- (id)getPackageKey;
- (void)onLanguageChange;
- (id)getSearchItemForGameDetailPage:(id)arg1 index:(unsigned long long)arg2;
- (id)getSearchItemsForGameDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForGameDetailPage:(id)arg1;
- (unsigned long long)getGameDetailSearchItemCount:(id)arg1;
- (_Bool)hasGameSearchResult:(id)arg1;
- (void)cancelSearchForGameDetailPage;
- (void)asyncSearchTextForGameDetailPage:(id)arg1;
- (id)getWCGameItem:(id)arg1 index:(unsigned long long)arg2;
- (id)getMatchTip:(id)arg1 featureID:(unsigned int)arg2;
- (id)getFeatureItem:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getWCGameSearchItemCount:(id)arg1;
- (unsigned long long)getFeatureSearchItemCount:(id)arg1;
- (_Bool)hasWCGameSearchResult:(id)arg1;
- (_Bool)hasFeatureSearchResult:(id)arg1;
- (_Bool)hasSearchDone:(id)arg1;
- (void)cancelSearch;
- (void)asyncSearchText:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)sortFeatures:(id)arg1 matchTips:(id)arg2;
- (id)getSourceSearchItem;
- (id)removeTopHitFeaturesWithinArray:(id)arg1;
- (id)createWeSportSearchItem;
- (void)initFeatureItem;
- (void)initSearchItem;
- (void)asyncInitFeatureItem;
- (void)asyncInitSearchItem;
- (id)loadSearchItem:(id)arg1;
- (id)convertFeatureItem:(id)arg1;
- (void)doInitWorker;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

