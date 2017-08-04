//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "IWCAddressControlLogic-Protocol.h"
#import "IWCAddressGetAddressControlLogicExt-Protocol.h"
#import "IWCPayControlLogicExt-Protocol.h"
#import "IWCProductExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCProudctReceiptEditDelegate-Protocol.h"

@class MMTableViewInfo, NSString, UIButton, WCBizLoadingView, WCProductDiscountInfo, WCProductExpressItem, WCProductOrderInfo;
@protocol WCProductBuyDetailViewControllerDelegate;

@interface WCProductBuyDetailViewController : WCBizBaseViewController <IWCProductExt, WCProudctReceiptEditDelegate, IWCAddressGetAddressControlLogicExt, IWCPayControlLogicExt, MMWebViewDelegate, UIAlertViewDelegate, IWCAddressControlLogic>
{
    struct map<long, WCProductBuyDetailViewSectionType, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, WCProductBuyDetailViewSectionType>>> _sectionIndexToType;
    WCProductOrderInfo *_orderInfo;
    MMTableViewInfo *_mainTableViewInfo;
    WCProductExpressItem *_selectExpressItem;
    NSString *_receiptStr;
    WCBizLoadingView *_loadingView;
    unsigned int _payLogictag;
    _Bool _isAddressInfoEmpty;
    _Bool _isUnSupportExpress;
    _Bool _isGetLastestExpressFail;
    UIButton *_buyButton;
    WCProductDiscountInfo *_currentSelectedDiscountInfo;
    unsigned int scene;
    id <WCProductBuyDetailViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WCProductBuyDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *receiptStr; // @synthesize receiptStr=_receiptStr;
@property(retain, nonatomic) WCProductOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(nonatomic) unsigned int scene; // @synthesize scene;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSubmitMallFreeOrderSuccess:(id)arg1 retCode:(int)arg2;
- (void)onSubmitMallFreeOrderFail:(id)arg1;
- (void)onSubmitMallOrdFail:(id)arg1 skuID:(id)arg2;
- (void)popToSourceViewController;
- (void)OnFinishedWCPayInnerPayLogic:(id)arg1 CompleteStatus:(int)arg2 ExtraInfo:(id)arg3;
- (void)onSubmitMallOrdSuccess:(id)arg1 skuID:(id)arg2 prepardID:(id)arg3 retCode:(int)arg4 retMsg:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertView:(id)arg1 tag:(unsigned int)arg2;
- (void)dealloc;
- (void)buyProduct;
- (void)initFooterView;
- (void)makeProductInfo:(id)arg1;
- (id)getExpressTimeDesc;
- (id)getExpressDesc:(id)arg1;
- (void)updatePrice;
- (void)onModifyExpress:(id)arg1;
- (void)onSaveWCProductReceiptEdit:(id)arg1;
- (void)onGotProuductDiscountInfoSuccess:(id)arg1 discountInfo:(id)arg2;
- (void)onGotProuductDiscountInfoFail:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onClickDiscountInfo:(id)arg1;
- (void)makeDiscountInfoCell:(id)arg1;
- (void)onClickReceipt;
- (void)onClickExpressCell;
- (void)makeExpressCell:(id)arg1;
- (void)onClickDeliveryCell;
- (void)onGotLastestExpressInfoFail:(id)arg1 lockID:(id)arg2;
- (void)onGotLastestExpressInfoSuccess:(id)arg1 lockID:(id)arg2 expressAry:(id)arg3 retCode:(int)arg4;
- (void)OnPreFinishedWCAddressLogic:(id)arg1 waitUntilDone:(_Bool *)arg2;
- (void)OnWCAddressGetAddressControlLogicEnd:(id)arg1;
- (void)clearExpressInfo;
- (void)makeDeliveryCell:(id)arg1;
- (id)getDiscountInfo:(id)arg1;
- (void)reloadTableData;
- (void)onReturn;
- (void)viewDidLayoutSubviews;
- (void)initMainTableView;
- (void)initChildView;
- (void)initChildData;
- (void)viewDidLoad;
- (id)initWithWCProductInfo:(id)arg1 isUnSupportExpress:(_Bool)arg2;
- (void)stopLoadingView;
- (void)startLoadingView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

