//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "BrandOpenSpecificViewHandlerDelegate-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"

@class BrandOpenSpecificViewHandler, NSString;

@interface WebviewJSEventHandler_openSpecificView : WebviewJSEventHandlerBase <VerifyPhoneDelegate, BrandOpenSpecificViewHandlerDelegate>
{
    BrandOpenSpecificViewHandler *_openSpecificViewHandler;
    _Bool _isDismissCurrentViewController;
}

- (void).cxx_destruct;
- (id)getCurrentController;
- (_Bool)shouldDismissCurrentViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

