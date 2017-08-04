//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class JailBreakHelper, NSMutableArray, NSMutableSet, NSString, iAPCache;

@interface iAPMgr : MMService <SKPaymentTransactionObserver, SKProductsRequestDelegate, PBMessageObserverDelegate, MMService>
{
    NSMutableSet *_setSKProductsRequests;
    NSMutableArray *_arrRestoredTransactions;
    NSMutableArray *_arrRestoredVerifiedTransaction;
    _Bool _bIsRestoring;
    unsigned int _status;
    iAPCache *_iAPCache;
    JailBreakHelper *m_jailBreakHelper;
}

+ (unsigned int)getIdKeyVerifyPurchaseFailed;
+ (unsigned int)getIdKeyIAPPurchaseFailed;
+ (unsigned int)getIdKeyPreparePurchaseFailed;
+ (unsigned int)getIdKeyIdIAP;
+ (unsigned int)getBizTypeOfProductID:(id)arg1;
@property(retain, nonatomic) JailBreakHelper *m_jailBreakHelper; // @synthesize m_jailBreakHelper;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (int)covertErrcode:(unsigned int)arg1;
- (void)onPreparePurchase:(id)arg1;
- (void)onVerifyPurchase:(id)arg1;
- (void)onVerifyPurchaseForRestore:(id)arg1 request:(id)arg2;
- (void)restoreNextTransaction:(id)arg1;
- (void)onVerifyPurchaseForPurchase:(id)arg1 request:(id)arg2 IapRet:(int)arg3;
- (void)finishTransactionForTransactionID:(id)arg1;
- (_Bool)FinishTransaction:(id)arg1;
- (unsigned int)UnfinishTransactionCount;
- (int)RestoreCompletedTransactions;
- (int)RestoreCompletedTransactionsNeedCheckJailBreak:(_Bool)arg1;
- (int)Purchase:(id)arg1 extInfo:(id)arg2;
- (int)Purchase:(id)arg1 extInfo:(id)arg2 NeedCheckJailBreak:(_Bool)arg3;
- (_Bool)cannotPurchaseDuetoJailbreakPlugin:(_Bool)arg1;
- (_Bool)GetProduct:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)cancelPurchase:(id)arg1 verifyType:(int)arg2;
- (void)verifyTransationForUnVerifyTransactionAll:(unsigned int)arg1;
- (void)verifyTransationForUnVerifyTransaction:(id)arg1 verifyType:(int)arg2 uiscene:(unsigned int)arg3;
- (void)verifyTransation:(id)arg1 verifyType:(int)arg2;
- (_Bool)preparePurchase:(id)arg1 extInfo:(id)arg2;
- (_Bool)isNonConsumable:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (void)onServiceInit;
- (void)writeCache;
- (id)pathForCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

