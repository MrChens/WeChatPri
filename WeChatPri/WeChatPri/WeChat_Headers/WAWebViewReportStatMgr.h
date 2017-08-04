//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WAReportOuterMenuActionItem;

@interface WAWebViewReportStatMgr : MMService <MMService>
{
    NSMutableDictionary *m_menuActionTimestampDict;
    NSMutableDictionary *m_outActionTimestampDict;
    NSMutableDictionary *m_apiActionDict;
    NSMutableArray *m_mutiSelectMsgList;
    _Bool _isOpenDebugState;
    WAReportOuterMenuActionItem *m_mutiSelectBaseItem;
}

@property(nonatomic) _Bool isOpenDebugState; // @synthesize isOpenDebugState=_isOpenDebugState;
@property(retain, nonatomic) WAReportOuterMenuActionItem *m_mutiSelectBaseItem; // @synthesize m_mutiSelectBaseItem;
- (void).cxx_destruct;
- (_Bool)getJSApiEventAction:(unsigned int)arg1 withActionItem:(id)arg2 appId:(id)arg3;
- (void)registerJSApiAction:(id)arg1 callid:(unsigned int)arg2 appId:(id)arg3;
- (_Bool)hasJSApiEventAction:(unsigned int)arg1 appId:(id)arg2;
- (_Bool)needReportJSApiAction:(id)arg1;
- (void)reportOutMenuActionOnMutiSelectMsgResult:(unsigned long long)arg1 contacts:(id)arg2;
- (void)registOutMenuActionOnMutiSelectMsgArray:(id)arg1;
- (id)outActionItemFromMgr:(unsigned long long)arg1;
- (void)registOutMenuAction:(id)arg1;
- (id)menuActionItemFromMgr:(unsigned long long)arg1;
- (void)registWebMenuAction:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

