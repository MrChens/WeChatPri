//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AsyncSocket, MMTimer, NSDate, NSMutableData, NSString, NSURL, ProtobufCGIWrap;
@protocol NotifyFromPrtlDelegate;

@interface CdnChannel : NSObject
{
    ProtobufCGIWrap *m_wrapInfo;
    id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl;
    MMTimer *m_tmCheck;
    NSDate *m_tLastRecvData;
    unsigned int m_uiRetryCount;
    unsigned int m_uiMaxRetryCount;
    NSMutableData *m_dtResponseData;
    unsigned int m_uiChannelStatus;
    unsigned int m_uiRetStatusCode;
    unsigned long long m_ui64StartTime;
    unsigned long long m_ui64ConnectStartTime;
    unsigned long long m_ui64SendStartTime;
    unsigned long long m_ui64WaitResponseStartTime;
    unsigned long long m_ui64ReceiveStartTime;
    unsigned int m_uiContentLen;
    AsyncSocket *m_oSocket;
    NSURL *m_urlCurLink;
    unsigned int m_uiRedirectCount;
    NSString *m_nsIP;
}

@property(retain, nonatomic) NSString *m_nsIP; // @synthesize m_nsIP;
@property(retain, nonatomic) NSURL *m_urlCurLink; // @synthesize m_urlCurLink;
@property(retain, nonatomic) NSMutableData *m_dtResponseData; // @synthesize m_dtResponseData;
@property(nonatomic) unsigned int m_uiMaxRetryCount; // @synthesize m_uiMaxRetryCount;
@property(retain, nonatomic) NSDate *m_tLastRecvData; // @synthesize m_tLastRecvData;
@property(retain, nonatomic) MMTimer *m_tmCheck; // @synthesize m_tmCheck;
@property(nonatomic) __weak id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl; // @synthesize m_delNotifyFromPrtl;
@property(retain, nonatomic) ProtobufCGIWrap *m_wrapInfo; // @synthesize m_wrapInfo;
- (void).cxx_destruct;
- (void)onReceiveDataLength:(id)arg1;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)onSocket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)onSocket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 willDisconnectWithError:(id)arg2;
- (void)HandleHttpResp:(id)arg1;
- (void)GetClientIP:(id)arg1;
- (_Bool)IsNoCache:(id)arg1;
- (unsigned int)GetContentLen:(id)arg1;
- (id)GetRedirectUrl:(id)arg1;
- (unsigned int)GetRetCode:(id)arg1;
- (id)PackHttpHeader;
- (void)TryReportFailIP;
- (void)CheckTimeOut;
- (void)Connect;
- (void)ConnectToHost:(id)arg1;
- (void)ResetChannel;
- (void)ClearSocket;
- (void)Stop;
- (_Bool)Start;
- (void)InitPrtl:(id)arg1;
- (void)dealloc;
- (id)init;

@end

