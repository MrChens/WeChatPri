//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCheckTransferStatusResponse : NSObject
{
    unsigned int m_uiTransferStatus;
    NSString *m_nsTransferStatusName;
    NSString *m_nsFeeType;
    long long m_llFee;
    NSString *m_nsSenderUserName;
    NSString *m_nsRecieverUserName;
    NSString *m_nsTransferTime;
    NSString *m_nsRefundBandType;
    NSString *m_nsModifyTime;
    NSString *m_nsRefundBankType;
    NSString *_m_nsStatusDesc;
    NSString *_m_nsStatusSupplementary;
    unsigned long long _delayStatus;
}

@property(nonatomic) unsigned long long delayStatus; // @synthesize delayStatus=_delayStatus;
@property(retain, nonatomic) NSString *m_nsStatusSupplementary; // @synthesize m_nsStatusSupplementary=_m_nsStatusSupplementary;
@property(retain, nonatomic) NSString *m_nsStatusDesc; // @synthesize m_nsStatusDesc=_m_nsStatusDesc;
@property(retain, nonatomic) NSString *m_nsRefundBankType; // @synthesize m_nsRefundBankType;
@property(retain, nonatomic) NSString *m_nsModifyTime; // @synthesize m_nsModifyTime;
@property(retain, nonatomic) NSString *m_nsTransferTime; // @synthesize m_nsTransferTime;
@property(retain, nonatomic) NSString *m_nsTransferStatusName; // @synthesize m_nsTransferStatusName;
@property(retain, nonatomic) NSString *m_nsSenderUserName; // @synthesize m_nsSenderUserName;
@property(retain, nonatomic) NSString *m_nsRecieverUserName; // @synthesize m_nsRecieverUserName;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;
@property(nonatomic) unsigned int m_uiTransferStatus; // @synthesize m_uiTransferStatus;
- (void).cxx_destruct;
- (void)dealloc;

@end

