//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

@class JSEvent;

@interface WCPayJSApiUploadIdCardSuccessControlLogic : WCPayControlLogic
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
}

- (void).cxx_destruct;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1;

@end

