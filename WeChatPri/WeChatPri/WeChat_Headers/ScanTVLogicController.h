//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseScanLogicController.h"

#import "ShakeLogicProxyDelegate-Protocol.h"

@class NSString, ShakeTvLogicController;

@interface ScanTVLogicController : BaseScanLogicController <ShakeLogicProxyDelegate>
{
    _Bool _shouldShowScanAnimation;
    ShakeTvLogicController *_logicController;
    NSString *_alertText;
}

@property(retain, nonatomic) NSString *alertText; // @synthesize alertText=_alertText;
- (void).cxx_destruct;
- (void)onShakeTvReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeTvReportEndWithTvItem:(id)arg1;
- (void)showShakeTvResult:(id)arg1 andModal:(_Bool)arg2;
- (void)showTvDetail:(id)arg1;
- (_Bool)shouldStartScanAnimation;
- (id)getInfoText;
- (id)getAlertText;
- (struct CGRect)getDrawCropRect;
- (void)stopScan;
- (void)startScan;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

