//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCreditPayAuthenResponseStruct : NSObject
{
    NSString *m_nsSessionKey;
    _Bool m_bZXBankUser;
    NSString *m_nsPhoneNumMask;
    _Bool m_bNeedBindCard;
}

@property(nonatomic) _Bool m_bNeedBindCard; // @synthesize m_bNeedBindCard;
@property(retain, nonatomic) NSString *m_nsPhoneNumMask; // @synthesize m_nsPhoneNumMask;
@property(nonatomic) _Bool m_bZXBankUser; // @synthesize m_bZXBankUser;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;
- (void).cxx_destruct;
- (void)dealloc;

@end

