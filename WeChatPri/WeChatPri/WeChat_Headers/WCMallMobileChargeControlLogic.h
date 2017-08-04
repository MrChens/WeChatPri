//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCMallControlLogic.h"

#import "IWCPayControlLogicExt-Protocol.h"
#import "WCMallChargeMobileViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, WCPayControlData;

@interface WCMallMobileChargeControlLogic : WCMallControlLogic <WCMallChargeMobileViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayControlData *m_oPayData;
    _Bool m_bNeedFirstGotoWCMallProductView;
    NSDictionary *dicPayedInfo;
    _Bool bHasTwoCGIRequestInStartLogic;
    _Bool bHasOneCGIHasResponsed;
    _Bool _bIsAddressBookLoading;
    _Bool _bHasLoadAddressBook;
    NSArray *_svrRetChangeHistory;
}

@property(retain, nonatomic) NSArray *svrRetChangeHistory; // @synthesize svrRetChangeHistory=_svrRetChangeHistory;
@property(nonatomic) _Bool bHasLoadAddressBook; // @synthesize bHasLoadAddressBook=_bHasLoadAddressBook;
@property(nonatomic) _Bool bIsAddressBookLoading; // @synthesize bIsAddressBookLoading=_bIsAddressBookLoading;
@property(nonatomic) _Bool m_bNeedFirstGotoWCMallProductView; // @synthesize m_bNeedFirstGotoWCMallProductView;
- (void).cxx_destruct;
- (void)setTelphoneOwnerName:(id)arg1 telString:(id)arg2;
- (void)checkHistoryData;
- (void)tryLoadAddressBook;
- (void)requestAccessForContactsDone:(_Bool)arg1;
- (void)loadAddressBookData;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (id)genTargetUrlFromOriginUrl:(id)arg1 withPhone:(id)arg2 remark:(id)arg3 transid:(id)arg4 reqkey:(id)arg5;
- (void)checkSuccessStopCurrentLogicWithPhone:(id)arg1 remark:(id)arg2;
- (id)getAddressbookRemarkWithPhoneNum:(id)arg1;
- (void)handleSvrRetNumberList:(id)arg1;
- (void)OnGetWCMallPayDeleteChargeHistoryResponse:(id)arg1 Error:(id)arg2;
- (void)OnGetWCMallPayFunctionListRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 FromCached:(_Bool)arg5 NotShowTutorial:(_Bool)arg6 typeMap:(id)arg7 Error:(id)arg8;
- (_Bool)IsNeedShowChargeEnsureAlertView;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(id)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (unsigned int)GetWCMallMallProductsAllListCount;
- (id)GetWCMallMallProductsFiltedOldList:(id)arg1;
- (_Bool)IsUsedWCMallMallProduct;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(id)arg1;
- (void)OnWCMallInputedCompleteTelphone:(id)arg1;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallChargeMobileViewControllerBack;
- (void)dealloc;
- (void)stopLogic;
- (void)startLogic;
- (void)SetPayData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

