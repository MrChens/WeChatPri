//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfQQ : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    NSString *m_nsDisplayName;
    NSString *m_nsImgSrc;
    CMessageWrap *m_refMessageWrap;
    NSString *_m_nsDisplayName;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName=_m_nsDisplayName;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_nsImgSrc; // @synthesize m_nsImgSrc;
- (void).cxx_destruct;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

