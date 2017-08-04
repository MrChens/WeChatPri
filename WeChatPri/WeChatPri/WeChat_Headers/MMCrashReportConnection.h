//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMCrashReportWrap, MMTimer, NSURLConnection;
@protocol crashReportConnectionDelegate;

@interface MMCrashReportConnection : MMObject
{
    id <crashReportConnectionDelegate> m_delegate;
    NSURLConnection *m_ucReport;
    MMCrashReportWrap *m_wrapCrash;
    unsigned int m_uiRetStatusCode;
    MMTimer *m_tmCheckTimeOut;
    unsigned long long m_eReportType;
    _Bool m_bTimeOut;
}

@property(nonatomic) _Bool m_bTimeOut; // @synthesize m_bTimeOut;
@property(retain, nonatomic) MMTimer *m_tmCheckTimeOut; // @synthesize m_tmCheckTimeOut;
@property(retain, nonatomic) MMCrashReportWrap *m_wrapCrash; // @synthesize m_wrapCrash;
@property(retain, nonatomic) NSURLConnection *m_ucReport; // @synthesize m_ucReport;
@property(nonatomic) __weak id <crashReportConnectionDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)ReportTimeOut;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (_Bool)Connect;
- (id)EncodePack:(id)arg1 Key:(basic_string_a490aa4c *)arg2;
- (_Bool)uploadCrash:(id)arg1 reportType:(unsigned long long)arg2;
- (void)CancelUrlConnection;
- (void)dealloc;
- (id)init;

@end

