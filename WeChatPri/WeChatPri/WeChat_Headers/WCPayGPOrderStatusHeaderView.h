//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class AAQueryDetailRes, CContact;

@interface WCPayGPOrderStatusHeaderView : MMUIView
{
    CContact *_chatroomContact;
    AAQueryDetailRes *_orderDetailData;
    MMUIView *_contentView;
    CDUnknownBlockType _onClickPayMoneyBtn;
}

@property(copy, nonatomic) CDUnknownBlockType onClickPayMoneyBtn; // @synthesize onClickPayMoneyBtn=_onClickPayMoneyBtn;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AAQueryDetailRes *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
- (void).cxx_destruct;
- (id)getLauncherContact;
- (id)getLauncherHeadImg;
- (_Bool)isCommonAAType;
- (void)payBtnPress:(id)arg1;
- (id)genOrderTipsLabel;
- (id)genOrderMainContentLabel;
- (id)genOrderTitleLabel;
- (void)setupOthersContentViewWithOriginY:(double)arg1 withTipsContent:(id)arg2;
- (void)setupPayerContentViewWithOriginY:(double)arg1;
- (void)setupReceiverContentViewWithOriginY:(double)arg1;
- (void)setupContentViewWhenOrderStatusUnNormalWithOriginY:(double)arg1;
- (void)setupTitleContentView;
- (void)setupContentView;
- (id)initHeaderViewWithContainerWidth:(double)arg1 orderStatusRespData:(id)arg2 chatroomContact:(id)arg3;
- (void)dealloc;

@end
