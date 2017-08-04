//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "TrackRoomHeadListItemDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TrackRoomHeadListItem, UIButton, UILabel, UIScrollView, UIView;
@protocol TrackRoomTopBarViewDelegate;

@interface TrackRoomTopBarView : MMUIView <UIScrollViewDelegate, TrackRoomHeadListItemDelegate>
{
    id <TrackRoomTopBarViewDelegate> _delegate;
    UIButton *_closeButton;
    UIButton *_minimizeButton;
    UILabel *_tipsLabel;
    UIView *_headListContainer;
    UIScrollView *_headList;
    NSMutableArray *_headListItems;
    TrackRoomHeadListItem *_selectedHeadListItem;
    _Bool _getMicSuccess;
    NSMutableDictionary *_tipsArray;
}

@property(nonatomic) __weak id <TrackRoomTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHeadListItemClick:(id)arg1;
- (void)updateHeadItemAlpha:(id)arg1;
- (void)selecteHeadListItem:(id)arg1;
- (void)openTalkOk;
- (void)reStart;
- (void)pause;
- (void)reConnecting;
- (void)someoneLeave:(id)arg1 ShowTips:(_Bool)arg2;
- (void)someoneEnter:(id)arg1 ShowTips:(_Bool)arg2;
- (void)nobodyTalking;
- (void)someoneTalking:(id)arg1;
- (void)imTalking;
- (void)giveUpMic;
- (void)getMicTimeout;
- (void)getMicFail;
- (void)gettingMic;
- (void)removeTipsForOrderAndUpdate:(int)arg1;
- (void)setTipsAndUpdate:(id)arg1 forOrder:(int)arg2;
- (void)doUpdateStrategy;
- (void)updateTipsLabel:(id)arg1 TextColor:(id)arg2;
- (void)updateTitle;
- (void)clearEnterExitTips;
- (id)getHeadListItemByUsername:(id)arg1;
- (void)removeAllHeadListItem;
- (void)relayoutAllHeadListItem;
- (void)removeHeadListItem:(id)arg1;
- (void)addHeadListItem:(id)arg1 UpdateTitle:(_Bool)arg2;
- (void)onMinimizeButtonClick;
- (void)onCloseButtonClick:(id)arg1;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

