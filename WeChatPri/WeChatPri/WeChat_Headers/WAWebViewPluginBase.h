//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWAWebViewPluginProtocol-Protocol.h"

@class NSString, WAWebViewController;

@interface WAWebViewPluginBase : MMObject <IWAWebViewPluginProtocol>
{
    WAWebViewController *_webViewController;
}

@property(readonly, nonatomic) __weak WAWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)setWebViewOwner:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

