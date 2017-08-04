//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class MMTwitterAuth, NSString;

@interface MMTwitterMgr : MMService <MMService, NSURLConnectionDelegate>
{
    MMTwitterAuth *m_TwitterAuth;
}

@property(retain, nonatomic) MMTwitterAuth *m_TwitterAuth; // @synthesize m_TwitterAuth;
- (void).cxx_destruct;
- (_Bool)hasAccessToken;
- (void)verifyAccessTokenValid;
- (void)didTwitterLogin:(id)arg1;
- (void)startAuth;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

