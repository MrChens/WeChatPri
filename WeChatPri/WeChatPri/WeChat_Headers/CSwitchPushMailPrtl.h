//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

@interface CSwitchPushMailPrtl : PrtlBase
{
    unsigned int m_uiSwithPushMailValue;
    NSString *m_nsSecPwd;
}

@property(retain, nonatomic) NSString *m_nsSecPwd; // @synthesize m_nsSecPwd;
@property(nonatomic) unsigned int m_uiSwithPushMailValue; // @synthesize m_uiSwithPushMailValue;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end

