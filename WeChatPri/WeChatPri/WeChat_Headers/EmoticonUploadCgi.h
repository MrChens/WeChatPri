//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol EmoticonUploadCgiDelegate;

@interface EmoticonUploadCgi : MMObject <PBMessageObserverDelegate>
{
    _Bool m_hasStartRequestOnce;
    unsigned int m_eventId;
    unsigned int m_startPos;
    unsigned int m_totalLen;
    id <EmoticonUploadCgiDelegate> m_delegate;
    NSString *m_md5;
    NSString *m_filePath;
}

@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath;
@property(nonatomic) unsigned int m_totalLen; // @synthesize m_totalLen;
@property(nonatomic) unsigned int m_startPos; // @synthesize m_startPos;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) __weak id <EmoticonUploadCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callOkDelegateMd5:(id)arg1;
- (void)callFailedDelegate;
- (void)internalRequest;
- (void)startRequest;
- (_Bool)isActive;
- (id)initWithFilePath:(id)arg1 md5:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

