//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommentViewFBDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UINavigationController, UIView, WCDataItem;
@protocol ILinkEventExt, WCTimeLineCommentCellViewDelegate;

@interface WCTimeLineCommentCellView : MMUIView <WCActionSheetDelegate, WCCommentViewFBDelegate>
{
    long long _iSection;
    long long _iRow;
    WCDataItem *_mainDataItem;
    UINavigationController *_navigationController;
    id <WCTimeLineCommentCellViewDelegate> m_delegate;
    id <ILinkEventExt> m_urlDelegate;
    UIImageView *m_commentContainer;
    UIView *m_likeContainer;
    UIView *m_lineView;
    NSMutableArray *m_arrCommentView;
    _Bool m_bHaveActionSheet;
}

+ (double)getCommentViewLeftMarginCurOri;
+ (double)getCellHeightForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (id)getNickNameForDataItem:(id)arg1;
@property(nonatomic) __weak id <ILinkEventExt> m_urlDelegate; // @synthesize m_urlDelegate;
@property(nonatomic) __weak id <WCTimeLineCommentCellViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCDataItem *mainDataItem; // @synthesize mainDataItem=_mainDataItem;
@property(nonatomic) long long iRow; // @synthesize iRow=_iRow;
@property(nonatomic) long long iSection; // @synthesize iSection=_iSection;
- (void).cxx_destruct;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)onReloadCommentCellView:(id)arg1;
- (void)onCommentViewClicked:(id)arg1;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showCommentOption:(id)arg1;
- (void)deleteComment:(unsigned long long)arg1;
- (void)initView;
- (void)initLineView;
- (void)initLikeContainer;
- (void)initCommentContainer;
- (id)getShowComment;
- (_Bool)isShowLikeCell;
- (id)initWithUrlDelegate:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

