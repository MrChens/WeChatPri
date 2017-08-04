//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "FavSightViewDelegate-Protocol.h"
#import "FavVideoDetailDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavDataItemWrap, FavForwardLogicController, FavSightView, NSString;

@interface FavSightDetailViewController : FavBaseDetailViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavSightViewDelegate, FavVideoDetailDelegate>
{
    FavForwardLogicController *m_favForwardController;
    FavSightView *m_sightView;
    FavDataItemWrap *m_favDataWrap;
    _Bool m_hasIllegalData;
}

- (void).cxx_destruct;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)saveSight;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onExitFullScreen;
- (void)OpenVideoFavItem:(id)arg1;
- (void)openVideoDetail;
- (void)restartDownload;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (id)getFavForawrdViewController;
- (void)initSightView;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

