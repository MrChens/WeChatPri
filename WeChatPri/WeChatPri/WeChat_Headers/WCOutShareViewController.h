//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "InviteFriendLogicDelegate-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"

@class NSString, RichTextView, UIView, WCOutInviteFriendLogic, WeChatOutGiftCard;

@interface WCOutShareViewController : MMUIViewController <InviteFriendLogicDelegate, ILinkEventExt, RichTextLayoutDelegate>
{
    _Bool _needShowActionsheet;
    UIView *_cardView;
    WCOutInviteFriendLogic *_inviteFriendLogic;
    WeChatOutGiftCard *_card;
    RichTextView *_shareContentRichTextView;
}

@property(nonatomic) _Bool needShowActionsheet; // @synthesize needShowActionsheet=_needShowActionsheet;
@property(retain, nonatomic) RichTextView *shareContentRichTextView; // @synthesize shareContentRichTextView=_shareContentRichTextView;
@property(retain, nonatomic) WeChatOutGiftCard *card; // @synthesize card=_card;
@property(retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic; // @synthesize inviteFriendLogic=_inviteFriendLogic;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onDetailBtnClick;
- (void)didReceiveCouponResponse;
- (void)showShareActionSheet;
- (void)configData;
- (void)didPressShareBtn:(id)arg1;
- (void)configShareCardView;
- (void)configView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

