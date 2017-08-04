//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSBrowseReportHelper, NSMutableSet;

@interface FTSReportMgr : NSObject
{
    NSMutableSet *_resultHittedKeywordSet;
    NSMutableSet *_resultHittedKeywordSetForSubSearch;
    FTSBrowseReportHelper *_mainBrowseHelper;
    FTSBrowseReportHelper *_subBrowseHelper;
}

@property(retain, nonatomic) FTSBrowseReportHelper *subBrowseHelper; // @synthesize subBrowseHelper=_subBrowseHelper;
@property(retain, nonatomic) FTSBrowseReportHelper *mainBrowseHelper; // @synthesize mainBrowseHelper=_mainBrowseHelper;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSetForSubSearch; // @synthesize resultHittedKeywordSetForSubSearch=_resultHittedKeywordSetForSubSearch;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSet; // @synthesize resultHittedKeywordSet=_resultHittedKeywordSet;
- (void).cxx_destruct;
- (void)reportIDKeyWithFTSDBUpgradeForCC;
- (void)createChatRoomOperationKVReport:(_Bool)arg1;
- (void)weAppKVReportForScene:(_Bool)arg1 searchText:(id)arg2 opType:(int)arg3 opContent:(id)arg4 resultCount:(unsigned int)arg5 clickPos:(unsigned int)arg6;
- (void)cancelSearch;
- (unsigned int)getReportDeviceCode;
- (void)reportKVContactSearchInfo:(id)arg1;
- (void)reportIDKeyContactSearchTime:(unsigned int)arg1;
- (void)startBrowseSubSearchResult;
- (void)startBrowseMainSearchResult;
- (unsigned int)searchFavCount:(id)arg1;
- (_Bool)searchMatchFavItems:(id)arg1;
- (_Bool)searchMatchMemoryMsg:(id)arg1;
- (_Bool)searchMatchIndexMsg:(id)arg1;
- (unsigned int)searchMsgCount:(id)arg1;
- (_Bool)searchMatchMsg:(id)arg1;
- (unsigned int)searchGameCount:(id)arg1;
- (_Bool)searchMatchGame:(id)arg1;
- (unsigned int)searchFeatureCount:(id)arg1;
- (_Bool)searchMatchFeature:(id)arg1;
- (unsigned int)searchBrandContactCount:(id)arg1;
- (_Bool)searchMatchBrandContact:(id)arg1;
- (unsigned int)searchAddressBookCount:(id)arg1;
- (_Bool)searchMatchAddressBookContact:(id)arg1;
- (unsigned int)searchGroupCount:(id)arg1;
- (_Bool)searchMatchGroupContact:(id)arg1;
- (unsigned int)searchNormalContactCount:(id)arg1;
- (_Bool)searchMatchNormalContact:(id)arg1;
- (unsigned int)searchTopHitCount:(id)arg1;
- (_Bool)searchMatchTopHit:(id)arg1;
- (_Bool)searchMemoryDone:(id)arg1;
- (_Bool)searchFavDone:(id)arg1;
- (_Bool)searchMessageDone:(id)arg1;
- (void)reportGlobalSearchResult:(id)arg1;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2 isInMainPage:(_Bool)arg3 isClickMore:(_Bool)arg4;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)logGuidePageClick:(unsigned long long)arg1;
- (void)logNewHitResult:(id)arg1 hasWebSearchCellShow:(_Bool)arg2 clickType:(unsigned int)arg3 cellStyle:(unsigned int)arg4;
- (void)clearCacheHitKeywordForSubSearch;
- (void)tryLogResultNoActionForSubSearch:(id)arg1 hasResult:(_Bool)arg2 hasTopHit:(_Bool)arg3 searchType:(int)arg4;
- (void)logHitResultForSubSearch:(id)arg1 searchType:(int)arg2 hasTopHit:(_Bool)arg3;
- (void)clearCacheHitKeyword;
- (_Bool)hasSearchResultToLogForHomePage;
- (void)tryLogResultNoActionWithTopHit:(_Bool)arg1;
- (void)logHitResult:(id)arg1 hasTopHit:(_Bool)arg2;
- (void)logResultActionItem:(id)arg1 actionType:(unsigned long long)arg2 searchType:(unsigned long long)arg3 hasShownTophit:(_Bool)arg4;
- (void)addSubSearchFTSLog:(id)arg1;
- (void)logInviteAddressFriend:(int)arg1;
- (void)logAddAddressFriend:(int)arg1;
- (void)logBeginSearch:(int)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (id)init;

@end

