//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ProtobufCGIWrap;

@interface ProtobufPrtlChannel : NSObject
{
    ProtobufCGIWrap *m_pbCGIWrap;
    NSObject *m_ptrl;
}

- (void).cxx_destruct;
- (void)Stop;
- (_Bool)Start;
- (void)InitPrtl:(unsigned int)arg1 Delegate:(id)arg2 DB:(id)arg3 Lock:(id)arg4 Scene:(unsigned int)arg5;
- (id)initWithCGIWrap:(id)arg1;
- (void)initProtocolChannel;

@end

