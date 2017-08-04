//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayAlertItem;

@interface WCPayTransferPrepayResponseStruct : NSObject
{
    NSString *m_nsReqKey;
    unsigned int m_uiHasUnarriveMoney;
    long long m_lExtMoney;
    NSString *m_nsInterruptDesc;
    NSString *m_nsMsgContent;
    unsigned int m_uiChargeFee;
    unsigned int m_uiAccFee;
    unsigned int m_uiFeeLimit;
    unsigned int m_uiRemainFee;
    unsigned int m_uiExceedFee;
    NSString *m_nsChargeRate;
    NSString *m_nsTransferInterruptChargeDesc;
    unsigned int m_uiUsedFee;
    _Bool m_isShowCharge;
    NSString *m_nsReceiverTrueName;
    unsigned int _amount;
    WCPayAlertItem *_alertItem;
    NSString *_f2fId;
    NSString *_transId;
    NSString *_extendStr;
    NSString *_receiverOpenId;
}

@property(nonatomic) unsigned int amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *receiverOpenId; // @synthesize receiverOpenId=_receiverOpenId;
@property(retain, nonatomic) NSString *extendStr; // @synthesize extendStr=_extendStr;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(retain, nonatomic) NSString *f2fId; // @synthesize f2fId=_f2fId;
@property(retain, nonatomic) WCPayAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(retain, nonatomic) NSString *m_nsReceiverTrueName; // @synthesize m_nsReceiverTrueName;
@property(nonatomic) _Bool m_isShowCharge; // @synthesize m_isShowCharge;
@property(nonatomic) unsigned int m_uiUsedFee; // @synthesize m_uiUsedFee;
@property(retain, nonatomic) NSString *m_nsTransferInterruptChargeDesc; // @synthesize m_nsTransferInterruptChargeDesc;
@property(retain, nonatomic) NSString *m_nsChargeRate; // @synthesize m_nsChargeRate;
@property(nonatomic) unsigned int m_uiExceedFee; // @synthesize m_uiExceedFee;
@property(nonatomic) unsigned int m_uiRemainFee; // @synthesize m_uiRemainFee;
@property(nonatomic) unsigned int m_uiFeeLimit; // @synthesize m_uiFeeLimit;
@property(nonatomic) unsigned int m_uiAccFee; // @synthesize m_uiAccFee;
@property(nonatomic) unsigned int m_uiChargeFee; // @synthesize m_uiChargeFee;
@property(retain, nonatomic) NSString *m_nsMsgContent; // @synthesize m_nsMsgContent;
@property(retain, nonatomic) NSString *m_nsInterruptDesc; // @synthesize m_nsInterruptDesc;
@property(nonatomic) long long m_lExtMoney; // @synthesize m_lExtMoney;
@property(retain, nonatomic) NSString *m_nsReqKey; // @synthesize m_nsReqKey;
@property(nonatomic) unsigned int m_uiHasUnarriveMoney; // @synthesize m_uiHasUnarriveMoney;
- (void).cxx_destruct;
- (void)dealloc;

@end

