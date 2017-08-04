//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString, WCPayCredInfo;

@interface WCPayBindCardInfo : NSObject <NSCoding>
{
    NSString *m_cardBankName;
    NSString *m_cardBankType;
    NSString *m_cardType;
    NSString *m_cardTypeName;
    NSString *m_creditTypeID;
    unsigned int m_cardBankTag;
    NSString *m_cardNumber;
    NSString *m_cardTail;
    NSString *m_cardLogoUrl;
    NSString *m_cardHolder;
    NSString *m_bindSerial;
    NSString *m_bindPhoneNumber;
    NSString *m_bankPhone;
    WCPayCredInfo *m_oWCPayCredInfo;
    unsigned int m_virtualSingalTranscationLimit;
    unsigned int m_virtualDayTranscationLimit;
    unsigned int m_physicalSignalTranscationLimit;
    unsigned int m_physicalDayTranscationLimit;
    _Bool m_bankFlag;
    _Bool m_expiredFlag;
    _Bool m_bNeedMoneyToResetPwd;
    _Bool m_bCanReturnMoneyAfterResetPwd;
    _Bool m_bIsSupportOfflinePay;
    _Bool m_bIsWXCredit;
    NSString *m_nsForbidWord;
    NSString *m_nsRepayUrl;
    NSDate *m_ndFetchPreArriveTime;
    NSString *m_nsFetchPreArriveTime;
    unsigned int m_uiCvvLength;
    NSString *m_nsAvailableSavedDetail;
    NSString *m_nsTips;
    NSString *m_nsCardDetailUrl;
    _Bool _m_bISFullFetchDirect;
    unsigned int _m_uiFetchChargeRate;
    unsigned int _m_uiFullFetchChargeFee;
    NSString *m_arriveType;
    NSString *m_nsOfflinePayNotSupportWord;
    NSString *_m_nsFetchChargeInfo;
    NSString *_m_forbid_title;
    NSString *_m_forbid_url;
    NSString *_m_nsBottomWording;
}

@property(retain, nonatomic) NSString *m_nsBottomWording; // @synthesize m_nsBottomWording=_m_nsBottomWording;
@property(retain, nonatomic) NSString *m_forbid_url; // @synthesize m_forbid_url=_m_forbid_url;
@property(retain, nonatomic) NSString *m_forbid_title; // @synthesize m_forbid_title=_m_forbid_title;
@property(nonatomic) _Bool m_bISFullFetchDirect; // @synthesize m_bISFullFetchDirect=_m_bISFullFetchDirect;
@property(nonatomic) unsigned int m_uiFullFetchChargeFee; // @synthesize m_uiFullFetchChargeFee=_m_uiFullFetchChargeFee;
@property(retain, nonatomic) NSString *m_nsFetchChargeInfo; // @synthesize m_nsFetchChargeInfo=_m_nsFetchChargeInfo;
@property(nonatomic) unsigned int m_uiFetchChargeRate; // @synthesize m_uiFetchChargeRate=_m_uiFetchChargeRate;
@property(retain, nonatomic) NSString *m_nsCardDetailUrl; // @synthesize m_nsCardDetailUrl;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips;
@property(retain, nonatomic) NSString *m_nsFetchPreArriveTime; // @synthesize m_nsFetchPreArriveTime;
@property(retain, nonatomic) NSString *m_nsOfflinePayNotSupportWord; // @synthesize m_nsOfflinePayNotSupportWord;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType;
@property(retain, nonatomic) NSString *m_nsAvailableSavedDetail; // @synthesize m_nsAvailableSavedDetail;
@property(nonatomic) unsigned int m_uiCvvLength; // @synthesize m_uiCvvLength;
@property(retain, nonatomic) NSDate *m_ndFetchPreArriveTime; // @synthesize m_ndFetchPreArriveTime;
@property(retain, nonatomic) NSString *m_nsRepayUrl; // @synthesize m_nsRepayUrl;
@property(nonatomic) _Bool m_bIsWXCredit; // @synthesize m_bIsWXCredit;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(nonatomic) _Bool m_bIsSupportOfflinePay; // @synthesize m_bIsSupportOfflinePay;
@property(nonatomic) _Bool m_bCanReturnMoneyAfterResetPwd; // @synthesize m_bCanReturnMoneyAfterResetPwd;
@property(nonatomic) _Bool m_bNeedMoneyToResetPwd; // @synthesize m_bNeedMoneyToResetPwd;
@property(nonatomic) _Bool m_expiredFlag; // @synthesize m_expiredFlag;
@property(nonatomic) unsigned int m_virtualSingalTranscationLimit; // @synthesize m_virtualSingalTranscationLimit;
@property(nonatomic) unsigned int m_virtualDayTranscationLimit; // @synthesize m_virtualDayTranscationLimit;
@property(nonatomic) unsigned int m_physicalSignalTranscationLimit; // @synthesize m_physicalSignalTranscationLimit;
@property(nonatomic) unsigned int m_physicalDayTranscationLimit; // @synthesize m_physicalDayTranscationLimit;
@property(retain, nonatomic) NSString *m_bankPhone; // @synthesize m_bankPhone;
@property(retain, nonatomic) WCPayCredInfo *m_oWCPayCredInfo; // @synthesize m_oWCPayCredInfo;
@property(retain, nonatomic) NSString *m_bindSerial; // @synthesize m_bindSerial;
@property(retain, nonatomic) NSString *m_bindPhoneNumber; // @synthesize m_bindPhoneNumber;
@property(retain, nonatomic) NSString *m_cardType; // @synthesize m_cardType;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardTail; // @synthesize m_cardTail;
@property(retain, nonatomic) NSString *m_creditTypeID; // @synthesize m_creditTypeID;
@property(retain, nonatomic) NSString *m_cardLogoUrl; // @synthesize m_cardLogoUrl;
@property(retain, nonatomic) NSString *m_cardHolder; // @synthesize m_cardHolder;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(nonatomic) _Bool m_bankFlag; // @synthesize m_bankFlag;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

