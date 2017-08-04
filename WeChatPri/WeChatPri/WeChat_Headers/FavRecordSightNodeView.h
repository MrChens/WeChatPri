//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavRecordBaseNodeView.h"

#import "FavSightViewDelegate-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"

@class FavSightView, NSString;

@interface FavRecordSightNodeView : FavRecordBaseNodeView <FavSightViewDelegate, ICdnComMgrExt>
{
    FavSightView *m_sightView;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)restartDownload;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onExitFullScreen;
- (void)openVideoDetail;
- (void)onClick;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)updateContentSubview;
- (void)addContentSubView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

