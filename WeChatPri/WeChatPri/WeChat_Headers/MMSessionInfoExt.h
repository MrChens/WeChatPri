//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMSessionInfoExt : NSObject <PBCoding>
{
    unsigned int m_uLastNotifySeq;
    unsigned int m_uUndeliverCount;
    unsigned int m_uLastDeliverMsgSeq;
}

+ (void)initialize;
@property(nonatomic) unsigned int m_uLastDeliverMsgSeq; // @synthesize m_uLastDeliverMsgSeq;
@property(nonatomic) unsigned int m_uUndeliverCount; // @synthesize m_uUndeliverCount;
@property(nonatomic) unsigned int m_uLastNotifySeq; // @synthesize m_uLastNotifySeq;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

