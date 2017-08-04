//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol ScanTVDelegate;

@interface ScanTVHelper : MMObject <PBMessageObserverDelegate>
{
    NSString *m_nsTVID;
    unsigned int m_uiTVDetailScene;
    id <ScanTVDelegate> m_delegate;
}

@property(retain, nonatomic) NSString *m_nsTVID; // @synthesize m_nsTVID;
@property(nonatomic) __weak id <ScanTVDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetTVItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)GetTVItemFromSVR;
- (void)StopGet;
- (void)GetTVItemByID:(id)arg1 Scene:(unsigned int)arg2;
- (void)dealloc;

@end

