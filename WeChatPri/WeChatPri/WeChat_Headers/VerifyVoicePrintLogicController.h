//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VoicePrintLogicControllerFactory.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IVoicePrintMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "VoicePrintGetTicketDelegate-Protocol.h"
#import "VoicePrintViewControllerDelegate-Protocol.h"

@class NSString, VoicePrintGetTicket;

@interface VerifyVoicePrintLogicController : VoicePrintLogicControllerFactory <VoicePrintGetTicketDelegate, UIAlertViewDelegate, IRecordPermissionCheckExt, VoicePrintViewControllerDelegate, IVoicePrintMgrExt>
{
    _Bool _isWaitting;
    long long _failureTimes;
    VoicePrintGetTicket *m_getTicket;
    unsigned long long uiMaxVerifyTryTimes;
}

+ (id)factoryMethod;
@property(nonatomic) unsigned long long uiMaxVerifyTryTimes; // @synthesize uiMaxVerifyTryTimes;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnGetTicketError;
- (void)OnGetTicket:(id)arg1;
- (void)OnVerifyOkWithRandomKey:(id)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnUploadError:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord:(_Bool)arg1;
- (void)OnStartRecord;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnClickCanNotUnLockBtn;
- (void)OnBackButtonDone;
- (void)stopNonBlockLoading;
- (void)startNonBlockLoading;
- (void)OnTalkButtonCanceled;
- (void)beginAllAnimation;
- (void)OnTalkButtonPressed;
- (void)OnViewDidLoad;
- (void)voicePrintBtnPressed;
- (void)processTimeOut;
- (void)NeedMoreVoice;
- (void)AuthenticationFailure;
- (void)AuthenticationSuccess;
- (void)callVoicePrintMgrStart;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1;
- (void)unregisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

