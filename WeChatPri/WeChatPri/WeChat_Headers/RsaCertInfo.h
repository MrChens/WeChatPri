//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface RsaCertInfo : NSObject <NSCoding>
{
    unsigned int m_uiCertVersion;
    NSString *m_nsCertE;
    NSString *m_nsCertN;
}

@property(retain, nonatomic) NSString *m_nsCertN; // @synthesize m_nsCertN;
@property(retain, nonatomic) NSString *m_nsCertE; // @synthesize m_nsCertE;
@property(nonatomic) unsigned int m_uiCertVersion; // @synthesize m_uiCertVersion;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

