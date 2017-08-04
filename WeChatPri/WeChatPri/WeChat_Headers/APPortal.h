//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "NSURLConnectionDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, NSURLConnection, PublicWifiCache, UIViewController;
@protocol APProtalDelegate;

@interface APPortal : APBase <NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    NSString *ticket;
    NSString *authUrl;
    NSString *extend;
    int _retryCount;
    id <APProtalDelegate> _delegate;
    NSString *_tid;
    NSString *_openid;
    NSString *_appid;
    UIViewController *_viewController;
    NSURLConnection *_connection;
    NSURLConnection *_postConnection;
    NSURLConnection *_ping32BlackUrlConnection;
    PublicWifiCache *_acache;
}

@property(retain, nonatomic) PublicWifiCache *acache; // @synthesize acache=_acache;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLConnection *ping32BlackUrlConnection; // @synthesize ping32BlackUrlConnection=_ping32BlackUrlConnection;
@property(retain, nonatomic) NSURLConnection *postConnection; // @synthesize postConnection=_postConnection;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <APProtalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goon32connection;
- (void)ping32BlackUrl;
- (void)stopLoading;
- (void)startLoading;
@property(readonly, copy) NSString *description;
- (void)handleApPortalInfoResponseWith32:(id)arg1 extend:(id)arg2;
- (void)handleApPortalInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)mockBackPageInfo;
- (id)currMac;
- (void)didFailWithErrMsg:(id)arg1;
- (void)didSuccess;
- (void)didStart;
- (void)didReady;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)sendGetApPortalInfoRequestToWeixinSvr;
- (void)sendRequestToAPWithUrlString:(id)arg1 withParams:(id)arg2;
- (id)parseGetParamsToPostBodyWithUrlString:(id)arg1;
- (id)getParamValueFromUrl:(id)arg1 withKey:(id)arg2;
- (id)getCGIWithUrl:(id)arg1;
- (int)getRedirectMethod:(id)arg1;
- (void)sendAuthRequestToAP;
- (void)cancel;
- (void)start;
- (id)initWithAPBase:(id)arg1 scene:(unsigned int)arg2 delegate:(id)arg3;
- (id)initWithGetA8KeyResult:(id)arg1 scene:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

