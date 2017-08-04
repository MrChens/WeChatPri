//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WSContactSearchDelegate-Protocol.h"

@class NSString, WSContactSearchMgr;
@protocol WSContactSearchLogicDelegate;

@interface WSContactSearchLogic : NSObject <WSContactSearchDelegate>
{
    unsigned int _bussinessType;
    id <WSContactSearchLogicDelegate> _delegate;
    WSContactSearchMgr *_searchMgr;
    NSString *_newestQueryText;
}

@property(nonatomic) unsigned int bussinessType; // @synthesize bussinessType=_bussinessType;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) WSContactSearchMgr *searchMgr; // @synthesize searchMgr=_searchMgr;
@property(nonatomic) __weak id <WSContactSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onWSContactSearchResultUpdated;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)handleTextChanged:(id)arg1;
- (void)cancelSearch;
- (void)dealloc;
- (id)initWithBussinessType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

