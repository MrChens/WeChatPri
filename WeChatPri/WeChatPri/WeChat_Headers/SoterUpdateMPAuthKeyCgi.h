//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol SoterUpdateMPAuthKeyCgiDelegate;

@interface SoterUpdateMPAuthKeyCgi : NSObject <PBMessageObserverDelegate>
{
    id <SoterUpdateMPAuthKeyCgiDelegate> _m_delegate;
}

@property(nonatomic) __weak id <SoterUpdateMPAuthKeyCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)callErrorDelegate;
- (void)callOkDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)elementJsonWithPublicKeyString:(id)arg1;
- (void)startRequestWithPublicKeyString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

