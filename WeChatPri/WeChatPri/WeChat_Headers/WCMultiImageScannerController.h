//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "IMMAssetExt-Protocol.h"
#import "PageScrollViewDataSource-Protocol.h"
#import "PageScrollViewDelegate-Protocol.h"
#import "SightAssetPreviewViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, PageScrollView, SightAssetPreviewView, SightDraft, UIButton;
@protocol WCMultiImageScannerDelegate;

@interface WCMultiImageScannerController : MMFullScreenViewController <IMMAssetExt, SightAssetPreviewViewDelegate, UIScrollViewDelegate, PageScrollViewDelegate, PageScrollViewDataSource, WCActionSheetDelegate>
{
    PageScrollView *_pageScrollView;
    UIButton *_deleteButton;
    NSMutableArray *_arrViewItem;
    unsigned long long _currentIndex;
    _Bool _isComeFromRotate;
    _Bool m_bAnimating;
    SightAssetPreviewView *_sightPlayView;
    id <WCMultiImageScannerDelegate> _scannerDelegate;
    NSMutableSet *_setPreviewItem;
    SightDraft *_sightDraft;
}

@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(nonatomic) __weak id <WCMultiImageScannerDelegate> scannerDelegate; // @synthesize scannerDelegate=_scannerDelegate;
@property(retain, nonatomic) NSMutableArray *arrViewItem; // @synthesize arrViewItem=_arrViewItem;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) PageScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
- (void).cxx_destruct;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)pageScrollView:(id)arg1 viewForItem:(unsigned long long)arg2;
- (unsigned long long)numberOfItems:(id)arg1;
- (unsigned long long)currentIndex:(id)arg1;
- (void)onChangedWithCurrentIndex:(long long)arg1;
- (void)onSingleClicked;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didEnterForeground;
- (void)willEnterBackground;
- (void)viewDidUnload;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onAssetImageUpdate:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithSight:(id)arg1;
- (id)initWithViewItems:(id)arg1 currentIndex:(unsigned long long)arg2;
- (void)onTopBarFrameChanged;
- (void)onMainWindowFrameChanged;
- (struct CGPoint)contentOffsetForPageScrollView;
- (struct CGSize)contentSizeForPageScrollView;
- (struct CGRect)frameForPageAtItem:(unsigned long long)arg1;
- (struct CGRect)frameForPageScrollView;
- (void)handleSingleTap;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)hideFullScreen;
- (void)onAnimationDidStop;
- (void)showFullScreen;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)showFullScreenAnimated:(_Bool)arg1;
- (void)showAlert:(id)arg1;
- (void)deleteCurrentItem;
- (void)updateTitle;
- (void)initScrollView;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

