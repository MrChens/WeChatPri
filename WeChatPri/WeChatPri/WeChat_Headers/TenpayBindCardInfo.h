//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TenpayBindCardInfo : NSObject
{
    _Bool m_bSameCardExist;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    NSString *m_nsTelphone;
    NSString *m_nsCardType;
    NSString *m_nsBindCardNumber;
    NSString *m_nsBindSerial;
    NSString *m_nsToken;
}

@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsTelphone; // @synthesize m_nsTelphone;
@property(retain, nonatomic) NSString *m_nsCardType; // @synthesize m_nsCardType;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBindCardNumber; // @synthesize m_nsBindCardNumber;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(nonatomic) _Bool m_bSameCardExist; // @synthesize m_bSameCardExist;
- (void).cxx_destruct;
- (void)dealloc;

@end

