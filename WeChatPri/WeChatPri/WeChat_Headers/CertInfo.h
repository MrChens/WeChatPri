//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, UIImage;

@interface CertInfo : NSObject <NSCoding>
{
    unsigned int m_uiVersion;
    unsigned int m_uiKey;
    unsigned int m_uiLastUpdateTime;
    NSString *m_nsDesc;
    UIImage *m_imgIcon;
}

@property(retain, nonatomic) UIImage *m_imgIcon; // @synthesize m_imgIcon;
@property(retain, nonatomic) NSString *m_nsDesc; // @synthesize m_nsDesc;
@property(nonatomic) unsigned int m_uiLastUpdateTime; // @synthesize m_uiLastUpdateTime;
@property(nonatomic) unsigned int m_uiKey; // @synthesize m_uiKey;
@property(nonatomic) unsigned int m_uiVersion; // @synthesize m_uiVersion;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)preInit;

@end

