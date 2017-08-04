//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IHeadImageExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "IStoreEmotionSingleDownloadMgrExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WebSearchImageTaskDelegate-Protocol.h"

@class CLLocation, LocationRetriever, NSMutableArray, NSMutableDictionary, NSString, WebSearchActionResultItem, WebSearchBoxCtrlInfo;
@protocol WebSearchMgrDelegate;

@interface FTSWebSearchMgr : MMObject <WebSearchImageTaskDelegate, IStoreEmotionSingleDownloadMgrExt, WCFacadeExt, IHeadImageExt, PBMessageObserverDelegate, LocationRetrieveDelegate, MMResourceMgrExt, IMMLanguageMgrExt>
{
    _Bool _isActive;
    _Bool _isWorking;
    _Bool _isWorkingForSearchGuide;
    _Bool _isWorkingForSuggestion;
    unsigned int _lastEventID;
    unsigned int _lastEventIDForSearchGuide;
    unsigned int _lastEventIDForSuggestion;
    unsigned long long _businessType;
    LocationRetriever *_locationRetriver;
    CLLocation *_location;
    _Bool _bWaitingLocationForRecmdRequest;
    NSMutableDictionary *_dicSearchData;
    NSMutableArray *_searchDataFIFO;
    NSMutableDictionary *_retryParamsForWebSearch;
    NSMutableDictionary *_retryParamsForSuggestion;
    double _totalStayTimeSec;
    double _totalWebViewTimeSec;
    int _bAction;
    struct timeval _tvStart;
    struct timeval _tvWebViewStart;
    unsigned long long _eStatus;
    _Bool _hasLoadDownloadH5;
    _Bool _isDetailSearch;
    _Bool _bForbidReportTime;
    _Bool _bForbidReportAction;
    int _scene;
    id <WebSearchMgrDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_newestSearchText;
    NSString *_respJson;
    WebSearchActionResultItem *_logItem;
    NSMutableDictionary *_dicMatchUserList;
    WebSearchBoxCtrlInfo *_boxCtrlInfo;
}

@property(retain, nonatomic) WebSearchBoxCtrlInfo *boxCtrlInfo; // @synthesize boxCtrlInfo=_boxCtrlInfo;
@property(retain, nonatomic) NSMutableDictionary *dicMatchUserList; // @synthesize dicMatchUserList=_dicMatchUserList;
@property(nonatomic) _Bool bForbidReportAction; // @synthesize bForbidReportAction=_bForbidReportAction;
@property(nonatomic) _Bool bForbidReportTime; // @synthesize bForbidReportTime=_bForbidReportTime;
@property(retain, nonatomic) WebSearchActionResultItem *logItem; // @synthesize logItem=_logItem;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *respJson; // @synthesize respJson=_respJson;
@property(retain, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) _Bool isDetailSearch; // @synthesize isDetailSearch=_isDetailSearch;
@property(nonatomic) __weak id <WebSearchMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCancel;
- (void)onEnterForeGround;
- (void)onEnterBackGround;
- (void)onResumeWebSearch;
- (void)onPauseWebSearch;
- (void)onStartWebSearchForDetail:(unsigned long long)arg1;
- (void)onStartWebSearch;
- (void)markItemClicked;
- (void)markResultValid:(_Bool)arg1 andQuery:(id)arg2 andType:(unsigned int)arg3;
- (void)reportStayTime;
- (void)reportAction;
- (void)reportVisit;
- (void)sendWebSearchRTReport:(id)arg1;
- (void)onLanguageChange;
- (void)addWebSearchLog:(id)arg1 forLogID:(unsigned int)arg2;
- (void)tryUpdatedLocation;
- (id)getUpdatedLocation;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)stopRetrievingLocation;
- (void)startRetrievingLocation;
- (void)handleSuggestionCgi:(id)arg1;
- (void)handleReportCgi:(id)arg1;
- (void)handleGuideCgi:(id)arg1;
- (void)handleWebSearchCgi:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isFromFuncQueryWithScene:(unsigned int)arg1 sceneActionType:(unsigned int)arg2;
- (_Bool)isValidWebSearchLog:(id)arg1;
- (_Bool)shouldCarryUserList:(id)arg1;
- (void)dealloc;
- (void)onResetResource:(_Bool)arg1;
- (void)cacheRecmdData:(id)arg1 withExpired:(unsigned long long)arg2 andSearchID:(id)arg3 andScene:(unsigned int)arg4 andVersion:(unsigned int)arg5 andBusinessType:(unsigned long long)arg6;
- (unsigned int)getVersion;
- (unsigned int)forceGetVersion;
- (void)cacheHomaPageResp:(id)arg1 forKey:(id)arg2;
- (id)homepageCacheForKey:(id)arg1;
- (_Bool)parseFunctionalCmd:(id)arg1;
- (void)invalidateSuggestion;
- (void)delayRequestForRecmdData;
- (void)sendRequestForRemcdData;
- (_Bool)isNeedWaitLocationForScene:(unsigned int)arg1 andType:(unsigned long long)arg2;
- (void)tryGetRecmdData:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
- (void)asyncSearch:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)asyncDownloadH5;
- (void)forceUpdateH5;
- (void)tryUpdateH5;
- (void)cancelSearch;
- (id)getDetailSearchTips:(unsigned long long)arg1;
- (void)onServiceReloadData;
- (id)init;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onImageFailForUrl:(id)arg1;
- (void)onImageReady:(id)arg1 forUrl:(id)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onHeadImageChange:(id)arg1;
- (void)downloadHeadImg:(id)arg1 withCategory:(unsigned char)arg2 withInfo:(id)arg3;
- (void)pageRequestEmot:(id)arg1;
- (void)pageRequestAvatar:(id)arg1;
- (void)pageRequestAvatarList:(id)arg1;
- (void)pageRequestSnsImage:(id)arg1;
- (void)pageRequestSnsImageList:(id)arg1;
- (void)pageRequestCommonImage:(id)arg1;
- (void)pageRequestCommonImageList:(id)arg1;
- (void)setImageResource:(id)arg1 toParams:(id)arg2 withSrcPath:(id)arg3 andBackUpUrl:(id)arg4;
- (id)makeWKCopyForRes:(id)arg1 fromFile:(id)arg2;
- (void)cleanWKTmpResourceIfNeeded;
- (id)getWKResourceTmpDir;
- (void)cleanLocalResource;
- (void)clearResourceExtension;
@property(retain, nonatomic) NSMutableDictionary *dicEmotInfo; // @dynamic dicEmotInfo;
@property(retain, nonatomic) NSMutableDictionary *dicCommonImgInfo; // @dynamic dicCommonImgInfo;
@property(retain, nonatomic) NSMutableDictionary *dicSnsImgInfo; // @dynamic dicSnsImgInfo;
@property(retain, nonatomic) NSMutableDictionary *dicHeadImgInfo; // @dynamic dicHeadImgInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

